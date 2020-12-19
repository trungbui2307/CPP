//
//  main.cpp
//  Exercice_8
//
//  Created by Bui Trung on 02/10/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//
/*  Une banque fait un pret a une personne X pour un montant total de s0 euros
    Cette personne rembourse chaque mois un montant fixe r et paye( en plus) un interet
        variable i = ir*s < ir : le taux d'interet mensuel (fixe) et s la somme restant a
        rembourser (avant deduction du remboursement mensuel)
    Le but :
        determiner la somme des interets en caisses par la banque une fois le pret rembourse
    avec valeur s0 = 30000, r = 1200, et ir = 0.01 sur 25 mois
 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    double s0; // montant pret
    double r; // montant rembourse chaque mois
    double ir; // le taux d'interet
    double somme_interet(0.0); //
    int nbr(0);
    cout << " Le montant total prete: " << endl;
    cin >> s0;
    cout << " Le montant rembourse chaque mois : " << endl;
    cin >> r;
    cout << " Le taux d'interet : " << endl;
    cin >> ir;
    if( (s0 > 0) and (r > 0) and ((ir < 1) and (ir > 0))){
        do{
            nbr++;
            somme_interet = somme_interet + ir * s0;
            s0 = s0 - r;
            cout << nbr << ": Montant reste " << s0 << " Somme interet : " << somme_interet << endl;
        } while (s0 > 0.0);
    }else{
        cout << " Reessayer !" << endl;
    }
    
    cout << " La somme des interet: " << somme_interet << " sur " << nbr << " mois " << endl;
    
    
}
