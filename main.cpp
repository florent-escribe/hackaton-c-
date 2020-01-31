#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"

int main(void) {

    cbreak();    
    keypad(stdscr, TRUE);
    level ();
    noecho();
    int x_h = 10;  //coordonnées du héros
    int y_h = 17;

    int* x_ph = &x_h;   //pointeurs vers position du héros
    int* y_ph = &y_h;

    move(*x_ph,*y_ph);
    addch('@');
    refresh();

    printw(inwstr());

    while(1) {
            move_hero (x_ph,y_ph);
    };


    getch();
    endwin();

    return 0;
}