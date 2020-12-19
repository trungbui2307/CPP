//
//  main.cpp
//  Objet_POO
//
//  Created by Bui Trung on 24/11/2020.
//

#include <iostream>
using namespace std;

class Rectangle {
private:
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
};

int main(int argc, const char * argv[]) {
    Rectangle rect;
    rect.setLargeur(1.5);
    rect.setLongueur(12.8);
    cout << "Surface : " << rect.surface() << endl;
    return 0;
}
