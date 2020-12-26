//
//  main.cpp
//  Exercice_12
//
//  Created by Bui Trung on 02/10/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//
/* Ecrire un programme proto.cc dans lequel il s'agit de définir une fonction ayant pour
   protocole:
        int demander_nombre();
   Modifier la fonction pour qu'elle prenne deux arguments: les bornes minimale et maximale entre lesquelles le nombre donné par l'utilisateur doit se trouver
    
   La fonction boucler tant que l'utilisateur ne donne pas un nombre valide
   Affiner encore le programme de sorte que si la borne maximale est inferieur ou égale
   à la borne minimale, elle ne soit pas prise en compte (c-a-d, que l'on peut entrer
   n'importe quel chiffre plus grand que la borne minimale.
 
 */

#include <iostream>
#include <utility> // pour swap
using namespace std;

int demander_nombre();
int demander_nombre(int min, int max);


int main(int argc, const char * argv[]) {
    
    int var = demander_nombre();
    cout << "Le nombre est: " << var << endl;
    int var_1 = demander_nombre(10,10);
    cout << "Le nombre est: " << var_1 << endl;

}

int demander_nombre(){
    int variable;
    cout << "Entrez un nombre: " << endl;
    cin >> variable;
    return variable;
}

int demander_nombre(int a, int b){
    if(a > b) { swap(a, b);}
    
    int variable;
    do{
        cout << "Entrez un nombre entier compris entre " << a << " et "
        << b << " : " << endl;
        if (a >= b) {
            cout <<" superieur ou egal a " << a;
        }else{
            cout <<" compris entre " << a << " et " << b << endl;
        }
        cin >> variable;
    } while((variable < a) or ((a < b) and (variable > b)));
    /* Trong chương trình trên, vòng lặp sẽ dừng lại khi chọn giá trị nằm trong khoảng [a,b]
       Lựa chọn giá trị nằm ngoài khoảng sẽ khiến lặp lại vòng lặp.
     */
    return variable;
}
