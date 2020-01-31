#include <iostream>
using namespace std;
#include <ncurses.h>

int main(void) {
    initscr();
    
//    move(LINES - 5, COLS - 100);  // Déplace le curseur tout en bas à droite de l'écran
//    addch('.');                 // Écrit le caractère . au nouvel emplacement
    
    /** est équivalent à : **/
    //mvaddch(LINES - 1, COLS - 1, '.');
    
    /** ou encore à : **/
    //mvprintw(LINES - 1, COLS - 1, ".");

    for (int i = 1; i<10; i+=1) {
        move(LINES - i, COLS - i);  // Déplace le curseur tout en bas à droite de l'écran
        addch('.');
    }

    getch();
    endwin();
    
    return 0;
}