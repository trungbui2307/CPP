//
//  main.cpp
//  Exo46
//
//  Created by Bui Trung on 24/11/2020.
//


#include <iostream>
#include <cmath>
using namespace std;

class Cercle {
private:
    double x;
    double y;
    double rayon;
    
public:
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


int main(int argc, const char * argv[]) {
    Cercle c1, c2;
    
    c1.setCentre(1.0, 2.0);
    c1.setRayon(sqrt(5.0));
    c2.setCentre(-2.0,1.0);
    c2.setRayon(2.25);
    
    cout << "Surface de C1 : " << c1.surface() << endl;
    cout << "Surface de C2 : " << c2.surface() << endl;
    
    cout << "position du point (0,0): ";
    if(c1.estInferieur(0.0, 0.0))  cout << "dans";
    else                            cout << "hors de";
    cout << " C1 et ";
    if(c2.estInferieur(0.0, 0.0)) cout << "dans";
    else                          cout << "hors de";
    
    cout << " C2." << endl;
    return 0;
}
