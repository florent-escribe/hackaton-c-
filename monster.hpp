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