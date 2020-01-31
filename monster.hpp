#include<iostream>
using namespace std;
#include <vector>
#include <ncurses.h>

class Monstre {
private:
    vector<char> Name;
    char Id;
    int PV;
    int dg;
    int x;
    int y;
public:

    Monstre(vector<char> N, char I, int P, int d, int X, int Y): Name(N), Id(I), PV(P), dg(d), x(X), y(Y) {};

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
