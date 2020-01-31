#include <iostream>
using namespace std;
#include <vector>
#include <ncurses.h>

class Inventaire {
    vector<vector<char>> list;
public:
    Inventaire (): list({}) {
        vector<char> str1 = {'A', ' ', '+', '1', ',', '+', '1',  ' ', 'm', 'a', 'c', 'e'};
        vector<char> str2 = {'S', 'o', 'm', 'e', ' ', 'f', 'o',  'o', 'd'};
        list.push_back(str1);
        list.push_back(str2);
    };
    void print (WINDOW* w) {
        wmove(w,0,0);
        for (int i {0}; i<list.size(); i++) {
            for (int j {0}; j<list[i].size(); j++) {  
                waddch(w,list[i][j]);
            };
            wprintw(w,"\n");    
        };
    };
    void add (vector<char> o) {list.push_back(o);};
};