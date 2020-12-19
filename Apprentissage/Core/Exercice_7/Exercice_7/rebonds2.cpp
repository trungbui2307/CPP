//
//  main.cpp
//  Exercice_7
//
//  Created by Bui Trung on 02/10/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

constexpr double g(9.18);


int main(int argc, const char * argv[]) {
    double eps; // coefficient de rebond de la balle
       do{
           cout << "Coefficient de rebond (0 <= coeff < 1):" << endl;
           cin >> eps;
       }  while ((eps < 0.0) or ( eps >= 1.0));
       
    double h0; // hauteur avant rebond
       do{
           cout << "Hauteur initiale (h0 > 0) : " << endl;
           cin >> h0;
       } while (h0 <= 0.0);
    
    double h_fin;
    do{
        cout << "Hauteur finale (0 < hfin < h0) : " << endl;
        cin >> h_fin;
    }while ((h_fin  <= 0.0) or (h_fin >= h0));
    
    double h1;
    double v0,v1;
    int rebonds(0);
    
    do{
        rebonds++;
        v0 = sqrt(2.0*g*h0);
        v1 = eps * v0;
        h1 = (v1*v1) / (2.0 * g);
        h0 = h1;
    }while (h0 > h_fin);
    
    cout << "La balle rebondit " << rebonds
        << " fois avant que la hauteur de rebond " << h0
    << " inferieur a la limite " << h1 << endl;
}
