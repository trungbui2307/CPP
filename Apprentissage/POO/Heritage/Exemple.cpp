#include <iostream>
#include <cmath>
using namespace std;

class Figure {
    protected:
        double x; 
        double y;
    public:
        void getCentre(double& x_out, double& y_out) const {
            x_out = x;
            y_out = y;
        }

        void setCentre(double x_in, double y_in) {
            x = x_in;
            y = y_in;
        }
        Figure(double x = 0.0, double y = 0.0) : x(x), y(y) {}
        void affiche(ostream& sortie){
            sortie << "centre = (" << x << ", " << y << ")";
        }
};

class Rectangle : public Figure {
protected:
    double largeur;
    double longueur;
public:
    double surface() const {  // On peut interdire la modification des attributs de l'objet aux methodes qui n'ont pas a le faire.
        return largeur * longueur;
    }
    double getLongueur() const {
        return longueur;
    }
    double getLargeur() const {
        return largeur;
    }
    void setLargeur(double x){ largeur = x;}
    void setLongueur(double y){ longueur = y;}
    Rectangle(double larg, double L) : largeur(larg), longueur(L){}
    Rectangle(double larg, double L, double x, double y) : Figure(x,y), largeur(larg), longueur(L){}
    void affiche(ostream&);
};

class Cercle : public Figure {
private:
    double x;
    double y;
    double rayon;
    
public:
    Cercle(double rayon, double x = 0.0, double y = 0.0) : Figure(x,y), rayon(rayon){
    }
    void affiche(ostream&);

    void getCentre(double& x_out, double& y_out){
        x_out = x;
        y_out = y;
    }
    void setCentre(double x_in, double y_in){
        x = x_in;
        y = y_in;
    }
    double getRayon() const{
        return rayon;
    }
    void setRayon(double r) {
        if (r < 0.0) r = 0.0;
        rayon = r;
    }
    double surface() const {return M_PI * rayon * rayon;} // calcule et retourne la surface du cercle
    // teste si le point de coordonne (x,y) passe en parametre fait ou non partie du cercle
    bool estInferieur(double x1, double y1) const{
        return (((x1-x) * (x1-x) + (y1-y) * (y1 - y)) <= rayon * rayon);
    }
};

class RectangleColore : public Rectangle {
    protected:
        unsigned int couleur;
    public:
        RectangleColore(double larg, double L, unsigned int c) : Rectangle(larg, L), couleur(c) {}
};

void Cercle::affiche(ostream& sortie){
    Figure::affiche(sortie);
    sortie << ", r=" << rayon;
}

void Rectangle::affiche(ostream& sortie){
    Figure::affiche(sortie);
    sortie << ", largueur=" << largeur
           << ", longueur=" << longueur;
}



int main(){
    RectangleColore r(4.3,12.5,4);
    cout << r.getLargeur() << endl;
    r.affiche(cout);
    cout << endl;

    Cercle c(12.2, 2.3, 4.5);
    c.affiche(cout); cout << endl;

    Rectangle r1(1.2, 3.4, 12.3, 43.2);
    r1.affiche(cout); cout << endl;
    return 0;
}
