#pragma once
#include "Player.hpp"
namespace pandemic{
    class Scientist : public Player {
    private:
        int number;
    public:
        Scientist(Board& board, int CityNum,int num): Player(board,CityNum){ number=num;}
        Scientist& discover_cure(Color color) override;
    };
}