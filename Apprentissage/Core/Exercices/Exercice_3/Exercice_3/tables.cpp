//
//  main.cpp
//  Exercice_3
//
//  Created by Bui Trung on 01/10/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//
/*  Ecrire un programme tables.cc affichant les tables de multiplication de 2 à 10
    Le programme devra produire la sortie suivante à l'écran
    
 */
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    for (int i = 2; i <= 10; i++) {
        cout << "Table de " << i << endl;
        for (int j = 1; j <= 10; j++) {
            int mul = j * i;
            cout << j << " * " << i << " = " << mul << endl;
        }
    }
}
