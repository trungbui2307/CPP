//
//  main.cpp
//  Exercice_11
//
//  Created by Bui Trung on 02/10/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//

#include <iostream>
using namespace std;
int variable(10); // ceci est une variable globale

int main() {
    { // ceci est un nouveau bloc: -> bloc1
        int variable(5); // variable locale à bloc1
        cout << "Un, la variable vaut: " << variable << endl;
    }
    
    { /* ceci est un nouveau bloc2
        mais il ne definit pas de variable " variable "
        l'appel ci-dessous fait donc appel à la variable globale
       */
        cout << "Deux, la variable vaut: " << variable << endl;
        
    }
    // ici un bloc "for" avec une variable locale au bloc
    for (int variable(0); variable < 3; variable++) {
        cout << "Trois, la variable vaut: " << variable << endl;
    }
    
    /* Encore la varable globale car aucune variable "variable"
       n'est définie au niveau de ce bloc
     */
    
    cout << "Quatre, la variable vaut: " << variable << endl;
    
    /* Ici un autre bloc "for", mais attention il ne déclare pas la variable
       "variable" (c'est ici une affectation, pas une déclaration) et donc
       il utilise la variable GLOBALE.
     
     */
    for ( variable = 0; variable < 3; variable++){
        cout << "Cinq, la variable vaut: " << variable << endl;
    }
    
    /* C'est toujours la variable GLOBALE dont il s'agit ici mais
       elle a été modifiée par le for précédent et sa valeur est donc 3.
     */
    cout << "Six, la variable vaut: " << variable << endl;
    return 0;
}
