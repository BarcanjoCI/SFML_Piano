#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "headers.hpp"
#include <iostream>

Tecla::Tecla(std::string a, std::string b){

    buffer.loadFromFile(a);
    b = note;

}

void Tecla::play(){


    sound.setBuffer(buffer);
    sound.play();
}
