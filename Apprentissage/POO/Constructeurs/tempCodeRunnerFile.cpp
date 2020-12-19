#include <iostream>
using namespace std;

class Peluche{
    private:
        string espece;
        string nom;
        double prix;

    public:
        string getEspece() const { return espece ; }
        string getNom() const { return nom ; }
        double getPrix() const { return prix ; }

        void setPrix(double valeur) { prix = valeur ; }
        void etiquette(const Peluche& p){
            cout << "Hello, mon nom est : " << p.getNom() << endl
            << "Je suis un " << p.getEspece() << " et je coute " << p.getPrix() << " euros." << endl;
        }
};

int main(){
    Peluche bobo; // Constructeur par defaut
    cout << "Etiquette:" << endl;
    etiquette(bobo);
    return 0;
}