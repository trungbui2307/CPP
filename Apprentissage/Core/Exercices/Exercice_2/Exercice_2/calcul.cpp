//
//  main.cpp
//  Exercice_2
//
//  Created by Bui Trung on 30/09/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//
/* Écrire un programme calcul.cc qui:
    + déclare les variables x et y de type entier
    + déclare les variables a,b,c et d de type réel
    + affecte la valeur 2 à x et 4 à y
    + calcule la somme, la différence, le produit et le quotient de x par y et affecte
    les résultats respectivement à a,b,c et d
    + affiche les valeurs de a,b,c et d
 
 
 */
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    double y;
    double a, b, c, d;
    x = 2; y = 4;
    a = x + y;
    b = x - y;
    c = x * y;
    d = x / y;
    
    cout << x << "+" << y << "=" << a << ";"
    << x << "-" << y << "=" << b << endl
    << x << "*" << y << "=" << c << ";"
    << x << "/" << y << "=" << d << endl;
    return 0;
}
