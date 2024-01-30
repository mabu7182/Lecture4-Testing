#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

using namespace std;

TEST_CASE ( "Sums together all of the numbers in a vector", "[Sum]")
{
    SECTION("check with positive numbers")
    {
        vector<int> test{1,2,3,4,5};
        vector<int> test2{3,4,5};
        vector<int> test3{7,7,7};

        REQUIRE( Sum(test) == 15 );
        REQUIRE( Sum(test2) == 12 );
        REQUIRE( Sum(test3) == 21 );
    }
    
    SECTION("check with negative numbers")
    {
        vector<int> test{-1,-2,-3};
        vector<int> test2{-7,-7,-7};

        REQUIRE( Sum(test) == -6 );
        REQUIRE( Sum(test2) == -21 );
    }

    SECTION("test if empty or full of zeros")
    {
        vector<int> test;
        vector<int> test2{0,0,0,0};

        REQUIRE( Sum(test) == 0 );
        REQUIRE( Sum(test2) == 0 );
    }

    SECTION("test with large numbders")
    {
        vector<int> test{1000000,2000000,5000000};
        vector<int> test2{7000000,7000000,7000000};

        REQUIRE( Sum(test) == 8000000 );
        REQUIRE( Sum(test2) == 21000000 );
    }
    
}


TEST_CASE ( "Multiplies all the numbers in a vector together ", "[Product]")
{
    SECTION("check with positive numbers")
    {
        vector<int> test{1,2,3,4,5};
        vector<int> test2{3,4,5};
        vector<int> test3{7,7,7};

        REQUIRE( Product(test) == 120 );
        REQUIRE( Product(test2) == 60 );
        REQUIRE( Product(test3) == 343 );
    }
    
    SECTION("check with negative numbers")
    {
        vector<int> test{-1,-2,-3};
        vector<int> test2{-7,-7,-7};

        REQUIRE( Product(test) == -6 );
        REQUIRE( Product(test2) == -343 );
    }

    SECTION("test if 0 or full of zeros")
    {
        vector<int> test{0};
        vector<int> test2{0,0,0,0};

        REQUIRE( Product(test) == 0 );
        REQUIRE( Product(test2) == 0 );
    }

    SECTION("test with large numbders")
    {
        vector<int> test{100,1000,2000};
        vector<int> test2{700,700,700};

        REQUIRE( Product(test) == 200000000 );
        REQUIRE( Product(test2) == 343000000 );
    }
}
