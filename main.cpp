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

    mvaddch(*x_ph,*y_ph,'@');
    refresh();

    Monstre monstre = Monstre ('a','a',1,1,5,5);
    mvaddch(5,5,'M');
    refresh();

    while(1) {
        move_hero (x_ph,y_ph, map);
        move_monster (monstre, x_ph, y_ph, map);
        refresh();
    };

    endwin();

    return 0;
}