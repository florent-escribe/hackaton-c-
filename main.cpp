#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"

int main(void) {
   
    level ();
    
    int x_pos = 1;
    int y_pos = 1;

    move(2,3);  // Déplace le curseur tout en bas à droite de l'écran
    addch('@');
    refresh();
    getch();
    endwin();

    return 0;
}