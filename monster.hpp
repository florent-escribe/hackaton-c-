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

    void mouvement(int x_pos, int y_pos) {};
}