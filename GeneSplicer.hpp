#pragma once
#include "Player.hpp"
namespace pandemic{
    class GeneSplicer: public Player{
    public:
        GeneSplicer(Board& board, int city): Player(board, city){}
        GeneSplicer& discover_cure(Color color);
    };
}