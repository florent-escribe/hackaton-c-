#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"

void move () {
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