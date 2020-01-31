#include <iostream>
using namespace std;
#include <vector>
#include <ncurses.h>

class Inventaire {
    vector<vector<char>> list;
public:
    Inventaire (): list({}) {
        vector<char> str = {'A', ' ', '+', '1', ',', '+', '1',  ' ', 'm', 'a', 'c', 'e'};
        list.push_back(str);
    };
    void print () {
        for (int i {0}; i<list.size(); i++) {
            for (int j {0}; j<list[i].size(); j++) {  
                addch(list[i][j]);
                refresh();
            };
            printw("\n");    
        };
    };
};