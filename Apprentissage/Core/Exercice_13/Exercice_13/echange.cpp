//
//  main.cpp
//  Exercice_13
//
//  Created by Bui Trung on 03/10/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//
/*  Dans le programme, écrire (protocole + definition) une fonction échange qui accepte deux arguments de type entier et échange les valeurs de ces deux arguments
 
    - Les valeurs de paramètres sont échangées bien que les variables soient locales à la fonction à la fonction main, c-a-d hor de portée de la fonction echange. Les parametre doivent donc être par reference
    Surcharge de fonctions:
 */
#include <iostream>
using namespace std;

void echange(int& a, int& b);
void echange(char& a, char& b);
void echange(double& a, double& b);


int main(int argc, const char * argv[]) {
    int i(10), j(55);
    char a('B'), b('A');
    double x(3.14159), y(1.414);
    
    cout << "Avant : i=" << i << " et j=" << j << endl;
    echange(i,j);
    cout << "Apres : i=" << i << " et j=" << j << endl;
    
    cout << "Avant : a=" << a << " et b=" << b << endl;
    echange(a,b);
    cout << "Apres : a=" << a << " et b=" << b << endl;
    
    cout << "Avant : x=" << x << " et y=" << y << endl;
    echange(x,y);
    cout << "Apres : x=" << x << " et y=" << y << endl;
    return 0;
}

void echange(int& a, int& b){
    int copie(a);
    a = b;
    b = copie;
}

void echange(char& a, char& b){
    char copie(a);
    a = b;
    b = copie;
}

void echange(double& a, double& b){
    double copie(a);
    a = b;
    b = copie;
}
