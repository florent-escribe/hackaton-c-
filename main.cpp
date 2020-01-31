#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"

int main(void) {

    cbreak();    
    keypad(stdscr, TRUE);
    vector<string> map = level ();
    noecho();
    int x_h = 3;  //coordonnées du héros
    int y_h = 4;

    int* x_ph = &x_h;   //pointeurs vers position du héros
    int* y_ph = &y_h;

    move(*x_ph,*y_ph);
    addch('@');
    refresh();

    while(1) {
            move_hero (x_ph,y_ph, map);
    };



    endwin();

    return 0;
}