#include <iostream>
using namespace std;
#include <ncurses.h>
#include <vector>
#include <string>
#include "functions.hpp"

vector<string> level () {
    vector<string> tab {};
    initscr();
    move(1,0);             
    printw("------    ----------\n");
    tab.push_back("------    ----------");
    printw("|....|    |........|\n");
    tab.push_back("|....|    |........|");
    printw("|....| ###+........|\n");
    tab.push_back("|....| ###+........|");
    printw("|....| #  |........|\n");
    tab.push_back("|....| #  |........|");
    printw("|....+##  ----------\n");
    tab.push_back("|....+##  ----------");
    printw("|....|              \n");
    tab.push_back("|....|              ");
    printw("------              \n");
    refresh();        
  
}
