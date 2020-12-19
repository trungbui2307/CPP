#include<iostream>
#include<vector>
using namespace std;

typedef size_t Degre;

class Polynome {
    public:
    Polynome(double coef = 0.0, Degre degre = 0);
    Degre degre() const {return p.size()-1;}
    void affiche_coef(ostream& out, Degre deg, bool signe = true) const;

    Polynome operator*(const Polynome& q) const;
    Polynome& operator*=(const Polynome& q);

    private:
    vector<double> p;
};

Polynome::Polynome(double coef, Degre deg)
: p(deg+1,0.0)
{
    p[deg] = coef;
}

//definition de la methode facilitant l'affichage
void Polynome::affiche_coef(ostream& out, Degre deg, bool signe) const
{
    double const c(p[deg]);
    if(c!=0){
        if(signe and (c > 0.0)) out << "+";
        out << c;
        if(deg > 1)
            out << "*X^" << deg;
        else if (deg == 1) out << "*X";
    } else if (degre()==0){
        // degre 0: afficher quand meme le 0 puisqu'il n'y a rien d'autre
        out << 0;
    }
}

// operateur externe
ostream& operator<<(ostream& sortie, const Polynome& polynome)
{
    Degre i(polynome.degre());
    // Pour plus haut degre: ne pas mettre de signe + devant
    polynome.affiche_coef(sortie, i, false);

    // Degre de N a 0 : afficher "+a*X^i"
    if(i>0){
        for(--i; i > 0; --i) polynome.affiche_coef(sortie,i);
        /* Sortir ce dernier affichage (i=0) de la boucle, evite le piege
        du --0 sur un nombre positif (le type de i, Degre, impose de ne pas etre negatif) */
        polynome.affiche_coef(sortie,0);
    }
    return sortie;
}

Polynome Polynome::operator*(const Polynome& q) const {
    Polynome r(0.0);
    /* Prepare la place pour le polynome resultat
     * (de degre degre()+q.degre()).
     * Notez que r = 0, donc il contient deja un monome
     * (0.0 de degre 0), et donc il suffit d'aller jusqu'au degre 1
     * (et non 0) pour avoir le bon nombre de coefficients */

    for(Degre i(degre() + q.degre()); i >= 1; --i)
        r.p.push_back(0.0);
    
    // Faire le calcul
    for(Degre i(0); i <= degre(); i++)
        for(Degre j(0); j <= q.degre(); ++j)
            r.p[i + j] += p[i] * q.p[j];
    
    return r;
}

Polynome& Polynome::operator*=(const Polynome& q){
    return(*this = *this * q);
}

int main(){
    Polynome p(3.2,4);
    cout << "p=" << p << endl;

    Polynome q(1.1,2), r;
    r = p * q;
    cout << p << " * " << q << " = " << r << endl; 

    r *= 2.0;
    cout << " * 2" << " = " << r << endl;
    return 0;
}
