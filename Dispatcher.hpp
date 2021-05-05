#pragma once
#include "Player.hpp"
namespace pandemic{
    class Dispatcher: public Player{
    public:
        Dispatcher(pandemic::Board& board, int city): Player(board, city){}
        Dispatcher& fly_direct(City city);
    };
}
