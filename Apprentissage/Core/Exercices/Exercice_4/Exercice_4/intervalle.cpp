//
//  main.cpp
//  Exercice_4
//
//  Created by Bui Trung on 01/10/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//
/* Soit I l'intervalle [-1,1[ dans l'ensemble des nombres réel:
        + demande à l'utilisateur d'entrer un réel
        + enregistre la réponse de l'utilisateur dans une variable x
        + teste l'appartenance de x à l'ensemble I et affiche le message << x appartient à I >> si c'est le cas et << x n'appartient pas à I >> dans le cas contraire
 
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double x;
    cout << "Entrez un nombre" << endl;
    cin >> x;
    if ( (x >= -1.0) and (x < 1.0) ){
        cout << " x appartient a l'intervalle" << endl;
    } if (((x >= 2.0) and (x < 3.0))
          or ((x > 0) and (x <= 1.0))
          or ((x >= -10.0) and ( x <= -2.0))) {
        cout << " x appartient a l'intervalle" << endl;
    }else{
        cout << " x n'appartient pas a l'intervalle" << endl;
    }
    return 0;
}
