#pragma once
#include "Player.hpp"
namespace pandemic{
    class Virologist: public Player{
    public:
        Virologist(pandemic::Board& board, int City): Player(board, City){}
        Virologist& treat(City city) override;
    };
}

