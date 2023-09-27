// AutoBattleCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Interfaces/IBattlefieldDataSource.h"
#include "Managers/BattlefieldManager.h"

using namespace AutoBattle::Manager;
using namespace AutoBattle::Interface;

int main()
{
    std::cout << "Hello World!\n";
    
    int BATTLEFIELD_X_SIZE = 5;
    int BATTLEFIELD_Y_SIZE = 7;

    BattlefieldManager battlefieldManager;
    // IBattlefieldDataSource battlefieldDataSource = battlefieldManager;

    
    // Single line comment
    /*
     * Multiple lines
     * comment
     */
    // Primitive types
    int var_int = 1;
    short var_short = 2;
    float var_float = 10.55;
    double var_double = 1005.9;
    char var_char = 'A';
    bool var_bool = false;
    char my_c_string[5] = { 'D', 'o', 'g', 's', '\0' }; // string in C style
    char my_c_string2[5] = "Dogs"; // string in C style
    std::string var_string = "Leo";
    auto val_auto1 = 1; // inferred
    auto val_auto2 = 1.f; // inferred
    auto val_auto3 = "Carol"; // inferred
    
    int calc_sum = 1+1;
    int calc_sub = 10-11;
    int calc_mult = 1*5;
    int calc_duv = 6/2;

    // #include <cmath>
    // std::pow(base, exponent);
    // std::sqrt(number); 

    unsigned int val_unsigned_int = 1;

    // -----
    int age = 21; // C-like initialization
    // int age (21); // Constructor initialization
    // int age {21}; // C++11 list initialization syntax

    // cout << "enter the width of the room: ";
    // int roomWidth {0};
    // cin >> roomWidth;
    //
    // cout << "The area of the room is " << roomWidth * roomLength << " square feet" endl;
    //
    // const int LEO = 1;
    //
    //
    // sizeof(int)
    // sizeof(some_variable)

    // ------------------------------------------------------------------------------------------

    // 54. What is an Array?

// - Compound data type or data structure ( which means its data type is made of other data types, ex: collection of test scores - array of integers)
//  - Collection of elements
// - All elements are of the same type
// - Each element can be accessed directly
//
// int test_score_1 {0};
//     int test_score_2 {0};
//     int test_score_3 {0};
//     ...
//     int test_score_100 {0};
//
//     Characteristics
//     - Fixed size
//     - Elements are all the same type
//     - Stored contiguously in memory
//     - Individual elements can be accessed by position or index
//
//     - First element is at index 0
//     - Last element is at index size-1
//
//     - No checking to see if you are out of bounds
//
//     - Always initialize arrays
//     - Very efficient
//     - Iteration (looping) is often used to process
//     
//     55 - Declaring and initializing arrays
//
// Element_type array_name[constant number of elements];

    // std::string leoo[5] = {"Leoo", "Leo2"};
    // int test_scores[5];
    // const int days_in_year {365};
    // double hi_temperatures[days_in_year];
    //
    // int test_scores[5] {100,95,99,87,88};
    // int high_score_per_level[10] {3,5}; // init to 3,5 and remaining to 0
    //
    // int hi_temperatures[days_in_year] {0}; // init all to zero
    //
    // int another_array[] {1,2,3,4,5}; // size automatically calculated
    //
    //
    // // ------------------
    // int var_a = 1;
    // {
    //     var_a = 2;
    //     std::cout << var_a << std::endl;
    // }
    //
    // std::cout << var_a << std::endl;

    // -----------------
    
    
}

