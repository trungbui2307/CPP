//
//  main.cpp
//  Exercice_5
//
//  Created by Bui Trung on 01/10/2020.
//  Copyright © 2020 Bui Trung. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Entrer un nombre reel" << endl;
    double x;
    cin >> x;
    double resultat(0.0);
    
    // Expression 1
    cout << "Expression 1" << endl;
    if(exp(x) == 1.0){
        cout << " indefinie " << endl;
    } else {
        resultat = x / (1.0 - exp(x));
        cout << resultat << endl;
    }

    //Expression 2
    cout << "Expression 2" << endl;
    if ( (x <= 0.0) or (x == 1.0)){
        cout << " indefinie " << endl;
    }else{
        resultat = x * log(x) * exp(2.0 / (x - 1.0));
        cout << resultat << endl;
    }
    
    //Expression 3
    cout << "Expression 3" << endl;
    if((x*x - 8.0*x <0.0) or (x == 2.0)){
        cout << " indefinie " << endl;
    }else{
        resultat = ( -x - sqrt(x*x -8.0*x)) / (2.0 - x);
        cout << resultat << endl;
    }
    
    //Expression 4
    cout << "Expression 4" << endl;
    if(x == 0.0){
        cout << " indefinie " << endl;
    }else{
        resultat = x*x - 1.0/x;
        if (resultat <= 0.0) {
            cout << " indefinie " << endl;
        } else {
            resultat = (sin(x) - x/20.0) * log(resultat);
            if(resultat < 0.0){
                cout << " indefinie " << endl;
            }else{
                cout << sqrt(resultat) << endl;
            }
        }
    }
}
