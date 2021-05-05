#include "doctest.h"
#include <string>
#include <iostream>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
using namespace std;
using namespace pandemic;


Board MyGBoard;
OperationsExpert Player1{MyGBoard, LosAngeles};
Dispatcher Player2{MyGBoard, Lagos};
Scientist Player3{MyGBoard, Algiers, 2};
Researcher Player4{MyGBoard, Miami};
Medic Player5{MyGBoard, Atlanta};
Virologist Player6{MyGBoard, HongKong};
GeneSplicer Player7{MyGBoard, Madrid};
FieldDoctor Player8{MyGBoard, Cairo};


TEST_CASE(" TEST 1")
{
    CHECK(MyGBoard.is_clean() == true);

    MyGBoard[Istanbul] = 2;
            CHECK(MyGBoard[Istanbul] == 2);

    MyGBoard[Miami] = 5;
            CHECK(MyGBoard[Miami] == 5);
    CHECK(MyGBoard.is_clean() == false);

}

TEST_CASE(" TEST 2")
{
    CHECK_NOTHROW(Player1.drive(HongKong));
    CHECK_NOTHROW(Player2.drive(Atlanta));
    CHECK_NOTHROW(Player3.drive(Lagos));
    CHECK_NOTHROW(Player4.drive(Miami));
    CHECK_NOTHROW(Player5.drive(Madrid));
    CHECK_NOTHROW(Player6.drive(Algiers));
    CHECK_NOTHROW(Player7.drive(Atlanta));
    CHECK_NOTHROW(Player8.drive(Bangkok));
}


TEST_CASE (" TEST 3") 
{
    CHECK_NOTHROW(Player1.fly_direct(Paris));
    CHECK_NOTHROW(Player2.fly_direct(London));
    CHECK_NOTHROW(Player3.fly_direct(SanFrancisco));
    CHECK_NOTHROW(Player4.fly_direct(BuenosAires));
    CHECK_NOTHROW(Player5.fly_direct(HoChiMinhCity));
    CHECK_NOTHROW(Player6.fly_direct(HongKong));
    CHECK_NOTHROW(Player7.fly_direct(Atlanta));
    CHECK_NOTHROW(Player8.fly_direct(Miami));

}

TEST_CASE ("Test 4")
{

    CHECK_NOTHROW(Player1.fly_charter(Paris));
    CHECK_NOTHROW(Player2.fly_charter(London));
    CHECK_NOTHROW(Player3.fly_charter(SanFrancisco));
    CHECK_NOTHROW(Player4.fly_charter(BuenosAires));
    CHECK_NOTHROW(Player5.fly_charter(Chicago));
    CHECK_NOTHROW(Player6.fly_charter(HongKong));
    CHECK_NOTHROW(Player7.fly_charter(Manila));
    CHECK_NOTHROW(Player8.fly_charter(Atlanta));
}

TEST_CASE ("TEST 5") 
{
    
    CHECK_NOTHROW(Player1.fly_shuttle(Algiers));
    CHECK_NOTHROW(Player2.fly_shuttle(Algiers));
    CHECK_NOTHROW(Player3.fly_shuttle(Algiers));
    CHECK_NOTHROW(Player4.fly_shuttle(Algiers));
    CHECK_NOTHROW(Player5.fly_shuttle(Algiers));
    CHECK_NOTHROW(Player6.fly_shuttle(Algiers));
    CHECK_NOTHROW(Player7.fly_shuttle(Algiers));
    CHECK_NOTHROW(Player8.fly_shuttle(Algiers));

}



TEST_CASE ("TEST 6") 
{
    CHECK_NOTHROW(Player1.build());
    CHECK_NOTHROW(Player2.build());
    CHECK_NOTHROW(Player3.build());
    CHECK_NOTHROW(Player4.build());
    CHECK_NOTHROW(Player5.build());
    CHECK_NOTHROW(Player6.build());
    CHECK_NOTHROW(Player7.build());
    CHECK_NOTHROW(Player8.build());
}