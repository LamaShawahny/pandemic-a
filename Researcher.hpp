#pragma once
#include "Player.hpp"
namespace pandemic{
    class Researcher: public Player{
    public:
        Researcher(Board& board, int city): Player(board, city){}
        Researcher& discover_cure(Color color);
    };
}
