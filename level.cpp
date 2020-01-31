#include <iostream>
using namespace std;
#include <ncurses.h>
#include <vector>
#include <string>
#include "functions.hpp"

vector<string> level () {
    vector<string> tab {};
    tab.push_back("                    ");
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
    tab.push_back("------              ");      //je laisse de la place en bas pour bouger
    tab.push_back("                    ");
    tab.push_back("                    ");
    tab.push_back("                    ");
    tab.push_back("                    ");
    refresh();
    return tab;    
  
}