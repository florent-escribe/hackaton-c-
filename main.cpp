#include <iostream>
using namespace std;
#include <ncurses.h>
#include "functions.hpp"
#include "inventaire.hpp"


int main(void) {

    Inventaire i {};

    cbreak();    
    keypad(stdscr, TRUE);
    level ();
    noecho();
    int x_pos = 10;  //coordonnées du héros
    int y_pos = 17;

    move(x_pos,y_pos);
    start_color();
	init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	attron(COLOR_PAIR(1));
    addch('@');
    refresh();


    //while(1) {
    //        move ();
        
    //}

    char c = getch();
    if (c == 'i') {    
        mvwin(stdscr,50,50);
        WINDOW* w=newwin(50,50,0,0);
        wmove(w,0,0);
        wrefresh(w);
        i.print(w);
        wrefresh(w);
        getch();
        wclear(w);
        delwin(w);
        mvwin(stdscr,0,0);
        refresh();
    };
    getch();
    endwin();


    return 0;
}