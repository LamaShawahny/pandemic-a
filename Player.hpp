
#pragma once
#include <utility>
#include <typeinfo>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
using namespace std;
namespace pandemic{
    class Player {
    public:
        int mycity;
        Board b;
        std::string myrole;
        ~Player(){}
        Player(Board& board, int city): b(board), mycity(city) {}
        virtual Player& drive(City city);
        virtual Player& fly_direct(City city);
        virtual Player& fly_charter (City city);
        virtual Player& fly_shuttle(City city);
        virtual Player& build();
        virtual Player &discover_cure(pandemic::Color card_color);
        virtual Player& treat(City city);
        virtual Player& take_card(City city);
        std::string role() const;
    };
}
