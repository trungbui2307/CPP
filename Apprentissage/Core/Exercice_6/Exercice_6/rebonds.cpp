//
//  main.cpp
//  Exercice_6
//
//  Created by Bui Trung on 01/10/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

constexpr double g(9.81);

int main(int argc, const char * argv[]) {
    double eps; // coefficient de rebond de la balle
    do{
        cout << "Coefficient de rebond (0 <= coeff < 1):" << endl;
        cin >> eps;
    }  while ((eps < 0.0) or ( eps >= 1.0));
    
    double h0; // hauteur avant rebond
    do{
        cout << "Hauteur initiale (h0 > 0) : ";
        cin >> h0;
    } while (h0 <= 0.0);

    
    int n; // nombre de rebonds a simuler
    do{
        cout << " Nombre de rebonds (n >= 0)";
        cin >> n;
    }    while(n < 0);

    
    double h1;    // hauteur apres le rebond
    double v0,v1; // vitess avant et apres le rebond
    
    for (int rebonds(1); rebonds <= n; rebonds++) {
        v0 = sqrt(2.0 * g * h0);
        v1 = eps * v0;
        h1 = (v1 * v1) / (2.0 * g);
        h0 = h1;
    }
    
    cout << "Au" << n
    << "e rebond, la hauteur atteinte est de " << h0 << endl;
    return 0;
}
