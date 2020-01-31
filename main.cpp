#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"


int main(void) {
   
    level ();
    curs_set(0);
    int x_pos = 1;
    int y_pos = 1;

    move(2,3);  // Déplace le curseur tout en bas à droite de l'écran
    addch('@');
    refresh();
    getch();
    endwin();

    return 0;
}