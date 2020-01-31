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
            char c = getch();
            if(c == 'z') {      //TOP
                mvaddch(x_pos,y_pos,'.');
                x_pos-=1;
                mvaddch(x_pos,y_pos, '@');
            };
            if(c == 's') {      //BOTTOM
                mvaddch(x_pos,y_pos,'.');
                x_pos+=1;
                mvaddch(x_pos,y_pos, '@');
            };
            if(c == 'q'){       //LEFT
                mvaddch(x_pos,y_pos,'.');
                y_pos-=1;
                mvaddch(x_pos,y_pos, '@');
            };
            if(c == 'd') {      //RIGHT
                mvaddch(x_pos,y_pos,'.');
                y_pos+=1;
                mvaddch(x_pos,y_pos, '@');
            }
        
    }

    getch();
    endwin();

    return 0;
}