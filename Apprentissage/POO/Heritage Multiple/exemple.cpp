#include <iostream>
using namespace std;

class Animal{
    public:
        Animal() { cout << "coucou, un animal de plus" << endl;}
        virtual ~Animal() { cout << "adieu..." << endl;}
};

class Vivipare:public virtual Animal{
    public:
        Vivipare(unsigned int jours = 128) : gestation(jours){}
        void naissance() const{
            cout << "Apres " << gestation << " jours de gestation"  
                 << endl << "je viens de mettre au monde un nouveau bebe" << endl;
        }
    protected:
        unsigned int gestation;
};

class Ovipare:public virtual Animal{
    public:
        Ovipare(unsigned int nombre = 12) : oeufs(nombre){}
        void naissance() const {
            cout << " Je viens de pondre environ " << oeufs << " oeuf(s)" << endl;
        }
    protected:
        unsigned int oeufs;
};


class Ovovivipare : public Vivipare, public Ovipare {
    protected :
        bool espece_rare;
    
    public:
        Ovovivipare(unsigned int jours, unsigned int nb, bool rare = false) 
        : Ovipare(nb), Vivipare(jours), espece_rare(rare){}
        //using Vivipare::naissance;

        void naissance() const{
            cout << "Apres " << gestation << " jours de gestation,"
            << "je viens de mettre au monde " << oeufs
            << " nouveaux bebe(s)" << endl;
        }
};

int main(){
    // Requin: de 6 -> 12 mois de gestation et de 9 -> 12 oeufs
    Ovovivipare un_requin(220,11);
    un_requin.naissance();
    return 0;
}



