#include <ncurses.h>

int main () {
    initscr();
    move(1,0);             
    printw("------    ----------\n");
    printw("|..@.|    |........|\n");
    printw("|....| ###+........|\n");
    printw("|....| #  |........|\n");
    printw("|....+##  ----------\n");
    printw("|....|              \n");
    printw("------              \n");
    refresh();             
    getch();               
    endwin();               
    
    
    return 0;
}