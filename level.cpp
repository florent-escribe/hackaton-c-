#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"

void level () {
    initscr();
    move(1,0);             
    printw("------    ----------\n");
    printw("|....|    |........|\n");
    printw("|....| ###+........|\n");
    printw("|....| #  |........|\n");
    printw("|....+##  ----------\n");
    printw("|....|              \n");
    printw("------              \n");
    refresh();             
    getch();               
    endwin();               
    
}