#ifndef HEADERS_HPP_INCLUDED
#define HEADERS_HPP_INCLUDED
#include <SFML/Audio.hpp>

 class Board{

    public:
        void initialize();

 };

 class Tecla{

    private:
        sf::SoundBuffer buffer;
        sf::Sound sound;

    public:
        std::string soundFile;
        std::string note;
        void play();
        Tecla (std::string, std::string);
 };


#endif // HEADERS_HPP_INCLUDED
