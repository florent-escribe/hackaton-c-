#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"

int main(void) {

    cbreak();    
    keypad(stdscr, TRUE);
    level ();
    noecho();
    int x_pos = 10;  //coordonnées du héros
    int y_pos = 17;

    move(x_pos,y_pos);
    addch('@');
    refresh();


    while(1) {
            move ();
        
    }

    getch();
    endwin();

    return 0;
}