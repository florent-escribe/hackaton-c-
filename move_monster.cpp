#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"

void move_monster (Monstre monstre,int* x_p,int* y_p, vector<string> carte) {     //_p, c'est le héros ; les coord du monstre sont dans ses carac de classe

    int x = monstre.x;
    int y = monstre.y;

    if (abs(x-*x_p)>=abs(y-*y_p)) {        //plus grand écart selon x
        if (x>*x_p) {      //on baisse le x du monstre si on peut
            if (carte[x-1][y]=='.') {    //on peut bouger
                mvaddch(x,y, '.');
                mvaddch(x-1,y,'M');
                monstre.x-=1;
            };
        }
        else {          //on augmente le x du monstre si on peut
            if (carte[x+1][y]=='.') {    //on peut bouger
                mvaddch(x,y, '.');
                mvaddch(x+=1,y,'M');
                monstre.x+=1;
            };
        };
    }
    else {
        if (y>*y_p) {      //on baisse le y du monstre si on peut
            if (carte[x][y-1]=='.') {    //on peut bouger
                mvaddch(x,y, '.');
                mvaddch(x,y-1,'M');
                monstre.y-=1;
            };
        }
        else {          //on augmente le y du monstre si on peut
            if (carte[x][y+1]=='.') {    //on peut bouger
                mvaddch(x,y, '.');
                mvaddch(x,y+=1,'M');
                monstre.y+=1;
            };
        };
    };
    refresh();
};