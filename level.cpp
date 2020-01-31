#include <iostream>
using namespace std;
#include "functions.hpp"

char caca[]="T'es une bite";

void commandline(char* command) {
    move(0,0);
    printw(command);

}

void level () {
    initscr();
    move(2,0);             
    printw("------    ----------\n");
    printw("|....|    |........|\n");
    printw("|....| ###+........|\n");
    printw("|....| #  |........|\n");
    printw("|....+##  ----------\n");
    printw("|....|              \n");
    printw("------              \n");
    refresh();  
    commandline(caca);

}
