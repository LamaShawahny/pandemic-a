#pragma once
#include "Player.hpp"
namespace pandemic{
    class OperationsExpert: public Player{
    public:
        OperationsExpert(Board& board, int city) :Player(board,city) {
        };
        OperationsExpert& build();
    };
}