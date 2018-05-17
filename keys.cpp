#include <SFML/Graphics.hpp>
#include "headers.hpp"
#include <iostream>
#include <array>

void Board::initialize(){

     sf::RenderWindow window(sf::VideoMode(800, 600), "My Piano");
     Tecla C4 ("sounds/C4.wav", "C4");
     Tecla D4 ("sounds/D4.wav", "D4");
     Tecla E4 ("sounds/E4.wav", "E4");
     Tecla F4 ("sounds/F4.wav", "F4");
     Tecla G4 ("sounds/G4.wav", "G4");
     Tecla A4 ("sounds/A4.wav", "A4");
     Tecla B4 ("sounds/B4.wav", "B4");
     Tecla C5 ("sounds/C5.wav", "C5");

     Tecla teclas[8] = {C4,D4,E4,F4,G4,A4,B4,C5};
     sf::RectangleShape images[8];

     int x = 10;
     for(int i = 0; i < 8; i++){
        sf::RectangleShape rec(sf::Vector2f(80,550));
        rec.move(x,0);
        x = x+100;
        images[i] = rec;
     }

     while (window.isOpen()){

        sf::Event event;

        while(window.pollEvent(event)){

            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed){

                if(event.key.code==sf::Keyboard::Num1){
                    C4.play();
                    images[0].setFillColor(sf::Color::Red);

                }

                 if(event.key.code==sf::Keyboard::Num2){
                    D4.play();
                    images[1].setFillColor(sf::Color::Red);
                }

                 if(event.key.code==sf::Keyboard::Num3){
                    E4.play();
                    images[2].setFillColor(sf::Color::Red);
                }

                 if(event.key.code==sf::Keyboard::Num4){
                    F4.play();
                    images[3].setFillColor(sf::Color::Red);
                }

                 if(event.key.code==sf::Keyboard::Num5){
                    G4.play();
                    images[4].setFillColor(sf::Color::Red);
                }

                 if(event.key.code==sf::Keyboard::Num6){
                    A4.play();
                    images[5].setFillColor(sf::Color::Red);
                }

                 if(event.key.code==sf::Keyboard::Num7){
                    B4.play();
                    images[6].setFillColor(sf::Color::Red);
                }

                 if(event.key.code==sf::Keyboard::Num8){
                    C5.play();
                    images[7].setFillColor(sf::Color::Red);
                }

            }

             if (event.type == sf::Event::KeyReleased){
                 if(event.key.code==sf::Keyboard::Num1){
                    images[0].setFillColor(sf::Color::White);

                }


                 if(event.key.code==sf::Keyboard::Num2){
                    images[1].setFillColor(sf::Color::White);

                }

                 if(event.key.code==sf::Keyboard::Num3){
                    images[2].setFillColor(sf::Color::White);

                }

                 if(event.key.code==sf::Keyboard::Num4){
                    images[3].setFillColor(sf::Color::White);

                }

                 if(event.key.code==sf::Keyboard::Num5){
                    images[4].setFillColor(sf::Color::White);

                }

                 if(event.key.code==sf::Keyboard::Num6){
                    images[5].setFillColor(sf::Color::White);

                }

                 if(event.key.code==sf::Keyboard::Num7){
                    images[6].setFillColor(sf::Color::White);

                }

                 if(event.key.code==sf::Keyboard::Num8){
                    images[7].setFillColor(sf::Color::White);

                }


             }


        }

        window.clear(sf::Color::Black);
            for(int i = 0; i < 8; i++){
                window.draw(images[i]);
            }

        window.display();


    }

}
