#include<iostream>
using namespace std;
#include <vector>

class Monstre {
private:
    vector<char> Name;
    char Id;
    int PV;
    int dg;
    int x;
    int y;
public:

    Monstre(vector<char> N, char I, int P, int d): Name(N), Id(I), PV(P), dg(d), x(0), y(0) {};

    void mouvement(int x_pos, int y_pos) {
        if (abs(x-x_pos)>=abs(y-y_pos)) {
            if (x>x_pos) {x--}
            if (x<x_pos) {x++}
        }
        else {
            if (y>y_pos) {y--}
            if (y<y_pos) {y++}
        } 
    };
}