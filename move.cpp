#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"

void move_hero (int* x_p,int* y_p) {
    char c = getch();
            if(c == 'z') {      //TOP
                mvaddch(*x_p,*y_p,'.');
                *x_p-=1;
                mvaddch(*x_p,*y_p, '@');
            };
            if(c == 's') {      //BOTTOM
                mvaddch(*x_p,*y_p,'.');
                *x_p+=1;
                mvaddch(*x_p,*y_p, '@');
            };
            if(c == 'q'){       //LEFT
                mvaddch(*x_p,*y_p,'.');
                *y_p-=1;
                mvaddch(*x_p,*y_p, '@');
            };
            if(c == 'd') {      //RIGHT
                mvaddch(*x_p,*y_p,'.');
                *y_p+=1;
                mvaddch(*x_p,*y_p, '@');
            }
};