//
//  main.cpp
//  Exercice_1
//
//  Created by Bui Trung on 30/09/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//

/* Écrire un programme age.cc qui :
    + demande son âge à l'utilisateur
    + lit la réponse de l'utilisateur et l'enregistre dans une variable nommée age de
    type entrier
    + calcule l'année de naissance ( à un an près ) de l'utilisateur et l'enregistre dans
    la variable annee de type entier;
    + affiche l'année de naissance ainsi calculée
 */

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int age(0);
    cout << "Quel est votre age" << endl;
    cin >> age;
    int annee(2020-age);
    cout << "Votre annee de naissance est:" << annee << endl;
}
