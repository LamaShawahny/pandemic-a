#pragma once
#include <map>
#include <vector>
using namespace std;
#include "Color.hpp"
#include "City.hpp"
namespace pandemic{

    class Board {
    
    void GameBoard();
    public:
        std::map<City,CityData> cities;
        Board(){
            GameBoard();
        }
        int operator[] (City city) const;
        int& operator[] (City city);
        friend std::ostream& operator<<(std::ostream& outst,const Board& board);
        bool is_clean();
        void remove_cures(){};
    };
}
