
#include "Player.hpp"

#include <utility>


namespace pandemic{


Board b=Board();
City c=Algiers;
Player p=Player(b,c);


Player &pandemic::Player::drive(City city) {
    return p;
}

Player &pandemic::Player::fly_direct(City city) {
    return p;
}

Player &pandemic::Player::fly_charter(City city) {
    return p;
}

Player &pandemic::Player::fly_shuttle(City city) {
    return p;
}

Player &pandemic::Player::build() {
    return p;
}

Player &pandemic::Player::discover_cure(pandemic::Color card) {
    return p;
}

Player &pandemic::Player::treat(City city) {
    return p;
}

Player &pandemic::Player::take_card(City city) {
    return p;
}

string pandemic::Player::role() const {
    return this->myrole;
}

};