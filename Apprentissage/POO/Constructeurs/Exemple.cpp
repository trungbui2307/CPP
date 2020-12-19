#include <iostream>
#include<string>
#include<string_view>
using namespace std;

class Peluche{
    private:
        const string espece;
        const string nom;
        double prix;

    public:
        Peluche(string_view espece, string_view nom, double prixAchat);
        Peluche(const Peluche& p);
        ~Peluche();
        string getEspece() const;
        string getNom() const;
        double getPrix() const;

        void setPrix(double valeur);

        
};

void etiquette(const Peluche& p){
            cout << "Hello, mon nom est : " << p.getNom() << endl
            << "Je suis un " << p.getEspece() << " et je coute " << p.getPrix() << " euros." << endl;
}

int main(){
    //Peluche bobo;  Constructeur par defaut
    Peluche bobo1("ours","BoBo", 14.95);
    cout << "Etiquette:" << endl;
    etiquette(bobo1);

    Peluche *bello;
    {
        Peluche ss("cobra", "Sssss", 10.0);
        bello = new Peluche("toucan", "Bello",20.0);
    }
    Peluche bello_clone(*bello);
    etiquette(bello_clone);
    delete bello;
    return 0;
}

Peluche::Peluche(string_view espece, string_view nom, double prixAchat)
: espece(espece), nom(nom),prix(prixAchat)
{
    cout << "[La peluche " << nom << " est fabrique " << nom << "]" << endl;
}

Peluche::Peluche(const Peluche &p)
: espece(p.espece), nom(p.nom+"-copie"),prix(p.prix)
{
    cout << "[La peluche " << p.nom << " a ete copiee en " << nom << "]" << endl;
}

Peluche::~Peluche()
{
    cout << "[La peluche " << nom << " est cassee] " << endl;
}

string Peluche::getEspece() const {return espece;}
string Peluche::getNom() const {return nom;}
double Peluche::getPrix() const {return prix;}
void Peluche::setPrix(double valeur) {prix = valeur;} 