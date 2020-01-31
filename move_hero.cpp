#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"

void move_hero (int* x_p,int* y_p, vector<string> carte) {
    char c = getch();
    if(c == 'z') {      //TOP
        if (carte[*x_p-1][*y_p]=='.' || carte[*x_p-1][*y_p]=='#' || carte[*x_p-1][*y_p]=='+'){
            mvaddch(*x_p,*y_p,carte[*x_p][*y_p]);
            *x_p-=1;
            mvaddch(*x_p,*y_p, '@');
            };
    };
    if(c == 's') {      //BOTTOM
        if (carte[*x_p+1][*y_p]=='.' || carte[*x_p+1][*y_p]=='#' || carte[*x_p+1][*y_p]=='+'){
            mvaddch(*x_p,*y_p,carte[*x_p][*y_p]);
            *x_p+=1;
            mvaddch(*x_p,*y_p, '@');
        };
    };
    if(c == 'q'){       //LEFT
        if (carte[*x_p][*y_p-1]=='.' || carte[*x_p][*y_p-1]=='#' || carte[*x_p][*y_p-1]=='+'){
            mvaddch(*x_p,*y_p,carte[*x_p][*y_p]);
            *y_p-=1;
            mvaddch(*x_p,*y_p, '@');
        };
    };
    if(c == 'd') {      //RIGHT
        if (carte[*x_p][*y_p+1]=='.' || carte[*x_p][*y_p+1]=='#' || carte[*x_p][*y_p+1]=='+'){    
            mvaddch(*x_p,*y_p,carte[*x_p][*y_p]);
            *y_p+=1;
            mvaddch(*x_p,*y_p, '@');
        };
    }
};
