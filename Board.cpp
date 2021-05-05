
#include "Board.hpp"
#include "City.hpp"
#include <fstream>
#include <sstream>

using namespace std;


namespace pandemic{
    void Board::GameBoard() {
        Board::cities[pandemic::City::HongKong] = CityData(0,pandemic::Color::Red,{ Bangkok ,Kolkata ,HoChiMinhCity ,Shanghai, Manila ,Taipei});
        Board::cities[pandemic::City::Jakarta] = CityData(0,pandemic::Color::Red,{Chennai, Bangkok, HoChiMinhCity ,Sydney});
        Board::cities[pandemic::City::Manila] = CityData(0,pandemic::Color::Red,{Taipei ,SanFrancisco ,HoChiMinhCity ,Sydney});
        Board::cities[pandemic::City::Osaka] = CityData(0,pandemic::Color::Yellow,{Taipei ,Tokyo});
        Board::cities[pandemic::City::Seoul] = CityData(0,pandemic::Color::Red,{Beijing ,Shanghai ,Tokyo});
        Board::cities[pandemic::City::Sydney] = CityData(0,pandemic::Color::Red,{Jakarta,NewYork ,Manila ,LosAngeles});
        Board::cities[pandemic::City::Taipei] = CityData(0,pandemic::Color::Black,{HongKong  ,Manila});
        Board::cities[pandemic::City::Madrid] = CityData(0,pandemic::Color::Blue,{London ,NewYork ,Paris ,SaoPaulo ,Algiers});
        Board::cities[pandemic::City::Milan] = CityData(0,pandemic::Color::Blue,{Essen,Istanbul});
        Board::cities[pandemic::City::Montreal] = CityData(0,pandemic::Color::Blue,{Chicago, Washington, NewYork});
        Board::cities[pandemic::City::Chicago] = CityData(0,pandemic::Color::Blue,{SanFrancisco,LosAngeles,MexicoCity,Atlanta,Montreal});
        Board::cities[pandemic::City::Essen] = CityData(0,pandemic::Color::Blue,{Paris,Milan,StPetersburg});
        Board::cities[pandemic::City::Washington] = CityData(0,pandemic::Color::Blue,{Atlanta, NewYork, Miami,Miami});
        Board::cities[pandemic::City::Baghdad] = pandemic::CityData(0,pandemic::Color::Black,{Tehran,Istanbul,Cairo,Riyadh,Karachi});
        Board::cities[pandemic::City::Cairo] = pandemic::CityData(0,pandemic::Color::Yellow,{Istanbul, Baghdad, Khartoum, Riyadh});
        Board::cities[pandemic::City::Chennai] = pandemic::CityData(0,pandemic::Color::Black,{Mumbai, Delhi, Kolkata, Bangkok ,Jakarta});
        Board::cities[pandemic::City::Delhi] = pandemic::CityData(0,pandemic::Color::Red,{Tehran ,Karachi, Mumbai, Chennai, Kolkata});
        Board::cities[pandemic::City::Riyadh] = pandemic::CityData(0,pandemic::Color::Black,{Baghdad,Cairo, Karachi});
        Board::cities[pandemic::City::Tehran] = pandemic::CityData(0,pandemic::Color::Black,{Baghdad,Moscow, Karachi,Delhi});
        Board::cities[pandemic::City::Bogota] = pandemic::CityData(0,pandemic::Color::Yellow,{MexicoCity, Lima ,Miami ,SaoPaulo ,BuenosAires});
        Board::cities[pandemic::City::BuenosAires] = CityData(0,pandemic::Color::Blue,{Bogota ,SaoPaulo});
        Board::cities[pandemic::City::Johannesburg] = CityData(0,pandemic::Color::Yellow,{Kinshasa ,Khartoum});
        Board::cities[pandemic::City::NewYork] = CityData(0,pandemic::Color::Blue,{Montreal ,Washington ,London });
        Board::cities[pandemic::City::Paris] = CityData(0,pandemic::Color::Blue,{Algiers ,Essen, Madrid  ,London});
        Board::cities[pandemic::City::SanFrancisco] = CityData(0,pandemic::Color::Blue,{LosAngeles, Chicago, Tokyo});
        Board::cities[pandemic::City::StPetersburg] = CityData(0,pandemic::Color::Blue,{Essen ,Istanbul ,Moscow});
        Board::cities[pandemic::City::Algiers] = pandemic::CityData(0,pandemic::Color::Black,{Madrid,Paris,Istanbul,Cairo});
        Board::cities[pandemic::City::Atlanta] = CityData(0,pandemic::Color::Blue,{Chicago,Miami,Washington});
        Board::cities[pandemic::City::Khartoum] = CityData(0,pandemic::Color::Black,{ Cairo ,Lagos ,Kinshasa, Johannesburg});
        Board::cities[pandemic::City::Kinshasa] = CityData(0,pandemic::Color::Yellow,{ Lagos ,Khartoum });
        Board::cities[pandemic::City::Lagos] = CityData(0,pandemic::Color::Red,{ SaoPaulo, Khartoum, Kinshasa});
        Board::cities[pandemic::City::Lima] = CityData(0,pandemic::Color::Yellow,{ MexicoCity ,Bogota, Santiago});
        Board::cities[pandemic::City::Shanghai] = CityData(0,pandemic::Color::Red,{Beijing, Taipei, Seoul ,Tokyo});
        Board::cities[pandemic::City::Istanbul] = pandemic::CityData(0,pandemic::Color::Black,{Milan, StPetersburg, Cairo, Moscow});
        Board::cities[pandemic::City::Karachi] = pandemic::CityData(0,pandemic::Color::Yellow,{Tehran, Baghdad, Riyadh, Mumbai, Delhi});
        Board::cities[pandemic::City::Kolkata] = pandemic::CityData(0,pandemic::Color::Red,{Delhi,Chennai,Bangkok,HongKong});
        Board::cities[pandemic::City::Moscow] = pandemic::CityData(0,pandemic::Color::Black,{StPetersburg,Istanbul,Tehran});
        Board::cities[pandemic::City::Mumbai] = pandemic::CityData(0,pandemic::Color::Black,{Karachi,Delhi,Chennai});
        Board::cities[pandemic::City::LosAngeles] = CityData(0,pandemic::Color::Yellow,{ SanFrancisco ,Chicago ,MexicoCity ,Sydney});
        Board::cities[pandemic::City::MexicoCity] = CityData(0,pandemic::Color::Black,{ LosAngeles ,Chicago ,Lima, Bogota});
        Board::cities[pandemic::City::Miami] = CityData(0,pandemic::Color::Red,{ Atlanta, MexicoCity ,Washington ,Bogota});
        Board::cities[pandemic::City::Santiago] = CityData(0,pandemic::Color::Yellow,{ Lima});
        Board::cities[pandemic::City::SaoPaulo] = CityData(0,pandemic::Color::Yellow,{ Bogota, BuenosAires ,Lagos, Madrid});
        Board::cities[pandemic::City::Bangkok] = CityData(0,pandemic::Color::Red,{ Kolkata ,Chennai  ,HoChiMinhCity ,HongKong});
        Board::cities[pandemic::City::Beijing] = CityData(0,pandemic::Color::Yellow,{ Shanghai, Seoul});
        Board::cities[pandemic::City::HoChiMinhCity] = CityData(0,pandemic::Color::Red,{ Jakarta, Bangkok ,HongKong, Manila});
        Board::cities[pandemic::City::Tokyo] = CityData(0,pandemic::Color::Red,{Seoul ,Shanghai, Osaka ,SanFrancisco});


    }
    
    int& Board::operator[](pandemic::City city) {
        return cities[city].Level;
    }
    int pandemic::Board::operator[](pandemic::City city) const {
        return 0;
    }
    bool pandemic::Board::is_clean() {
        return true;
    }

    std::ostream &operator<<(ostream &outst, const Board &board) {
        return outst;
    }
    ostream &operator<<(ostream &outst, const City &city) {
            return outst;
    }
}
