
#pragma once

namespace pandemic{
    enum City{
        Miami,
        Lima,
        London,
        Cairo,
        NewYork,
        Algiers,
        StPetersburg,
        Montreal,
        Washington,
        Baghdad,
        Chennai,
        HoChiMinhCity,
        Istanbul,
        SanFrancisco,
        Chicago,
        Paris,
        Essen,
        Delhi,
        Madrid,
        Milan,
        Karachi,
        Kolkata,
        Moscow,
        Shanghai,
        Mumbai,
        Riyadh,
        Taipei,
        Tehran,
        Bogota,
        BuenosAires,
        Khartoum,
        Kinshasa,
        Lagos,
        LosAngeles,
        MexicoCity,
        Santiago,
        Johannesburg,
        SaoPaulo,
        Bangkok,
        Beijing,
        Osaka,
        HongKong,
        Jakarta,
        Manila,
        Seoul,
        Atlanta,
        Sydney,
        Tokyo,
        invalidCity
    };
    class CityData{
    public:
        CityData(){
            Level=0;
            City_color=Red;
            ReStation=false;
            

        }
        CityData(int Level, pandemic::Color Color,std::vector<pandemic::City> ni){
            ne = std::move(ni);
            Level=Level;
            City_color=Color;
            ReStation=false;
        }
        bool is_con(pandemic::City con) {
            return true;
        }
        int Level;
        pandemic::Color City_color;
        std::vector<pandemic::City> ne;
        bool ReStation;
    };
}
