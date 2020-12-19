#include <iostream>
using namespace std;

// modele de classes
template<typename T1, typename T2> class Paire{
    public:
        Paire(const T1&, const T2&);
        virtual ~Paire(){}
        T1 get1() const { return premier; }
        T2 get2() const { return second; }
        void set1(const T1& val) { premier = val; }
        void set2(const T2& val) { second = val; }
    
    protected:
        T1 premier;
        T2 second;
};
template<typename T1, typename T2> Paire<T1,T2>::Paire(const T1& un, const T2& deux) : premier(un), second(deux){}


template<typename type> void echange(type& var1, type& var2){
    type tmp(var1);
    var1 = var2;
    var2 = tmp;
}

template<typename type> type monmax(const type& x, const type& y){
    if(x<y) return y;
    else return x;
}


template<typename Type> void affiche(Type* t){
    cout << "J'affiche" << *t << endl;
}

template<> void affiche<int>(int* t){
    cout << "J'affiche le contenu d'un entier : " << *t << endl;
}

int main(){
    int a(2), b(4);
    echange(a,b);
    cout << a << " " << b << endl;

    double da(2.3), db(4.5);
    echange(da,db);
    cout << da << " " << db << endl;

    string sa("ca marche"), sb("coucou");
    echange(sa,sb);
    cout << sa << " " << sb << endl;

    cout << monmax<double>(3.14,7) << endl;

    affiche(&da);
    affiche(&a);
}