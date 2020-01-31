#include <iostream>
using namespace std;
#include <ncurses.h>
#include<vector>
#include<string>

vector<string> level ();

void move_hero (int* x_p,int* y_p, vector<string> carte, char c);


class Monstre {
public:
    char Name;      //plutot string en fait
    char Id;
    int PV;
    int dg;
    int x;
    int y;


    Monstre(char N, char I, int P, int d, int X, int Y): Name(N), Id(I), PV(P), dg(d), x(X), y(Y) {};
    Monstre () {};

    void mouvement(int x_pos, int y_pos) {
        if (abs(x-x_pos)>=abs(y-y_pos)) {
            if (x>x_pos) {x--;};
            if (x<x_pos) {x++;};
        }
        else {
            if (y>y_pos) {y--;};
            if (y<y_pos) {y++;};
        }
    };
};

void move_monster(Monstre monstre,int* x_p,int* y_p, vector<string> carte);


class Personnage
{
    public:
    Personnage()
{
    m_vie = 100;
    m_nomArme = "ExcaliBURNE";
    m_degatsArme = 10;
}

    void recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage

    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

    void attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
    //On inflige à la cible les dégâts que cause notre arme
}

    void boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100) //Interdiction de dépasser 100 de vie
    {
        m_vie = 100;
    }
}
    void changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

    void afficherEtat() const
{
    cout << "Vie : " << m_vie << endl;
}

    
    bool estVivant()
{
    return m_vie > 0;
}
 
    
    private:
 
    int m_vie;
    std::string m_nomArme;
    int m_degatsArme;
};



class Objet {
private:
    vector<char> Name;
    char Id;
    int car;
    int x;
    int y;
public:
    Objet (vector<char> N, char I, int c,int X, int Y): Name(N), Id(I), car(c), x(X), y(Y) {};

    void find () {
        addstr("Vous avez trouvé ");
        for (int i {}; i<Name.size(); i++) {
            addch(Name[i]);
        };
    };
};



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