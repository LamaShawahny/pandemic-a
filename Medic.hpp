#pragma once
#include "Player.hpp"
namespace pandemic{
    class Medic: public Player{
    public:
        Medic(Board& board, int city) : Player(board, city) {}
        Medic& treat(City city);
    };
}

