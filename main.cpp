#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(800, 600), "TITLE");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Yellow);

    sf::Music music;
    if (!music.openFromFile("sound.ogg"))
        return 1;
    music.play();

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}
