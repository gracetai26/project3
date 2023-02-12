/*
 * utility.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * Grace Tai, Andy Fang
 * gracetai, andyfqm
 *
 * EECS 183: Project 3
 * Winter 2023
 *
 * Contains utility ciphers
 */

#include "utility.h"
#include <iostream>


string toUpperCase(string original) {
    // TODO: implement
    
    // returning a string to avoid compile error
    return "";
}

string removeNonAlphas(string original) {
    // TODO: implement
    
    // returning a string to avoid compile error
    return "";
}

string removeDuplicate(string original) {
    // TODO: implement
    
    // returning a string to avoid compile error
    return "";
}

int charToInt(char original) {
    // TODO: implement
    
    // returning 0 to avoid compile error
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
// Do not touch code below. ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void printGrid(const char grid[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        cout << " ---";
    }
    cout << endl;
    for (int row = 0; row < SIZE; row++) {
        cout << "| ";
        for (int col = 0; col < SIZE; col++) {
            cout << string(1, grid[row][col]) + " | ";
        }
        cout << endl;
        for (int col = 0; col < SIZE; col++) {
            cout << " ---";
        }
        cout << endl;
    }
}
