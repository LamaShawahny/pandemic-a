#pragma once
#include "Player.hpp"
namespace pandemic{
    class FieldDoctor: public Player{
    public:
        FieldDoctor(Board& board, int city) : Player(board, city) {};
        FieldDoctor& treat(City city);
    };
}