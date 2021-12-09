#include <iostream>

using namespace std;

class Personne
{
private:
    string nom;
    string prenom;
    string DateNaissance;

public:

    Personne(string n, string p, string dn)
    {
        nom = n;
        prenom = p;
        DateNaissance = dn;
    }

    void Afficher()
    {
        cout << "Nom: " << nom << "\nPrenom: " << prenom << "\nDate de naissance: " << DateNaissance << endl;
    }
};
class Employe : public Personne
{
private:
    double salaire = 0;

public:

    Employe(string n, string p, string dn, double s) : Personne(n, p, dn)
    {
        salaire = s;
    }

    void Afficher()
    {
        Personne::Afficher();
        cout << "Salaire: " << salaire << endl;
    }
   
};
class Chef : public Employe
{
private:
    string service;

public:

    Chef(string n, string p, string dn, double s, string ser) : Employe(n, p, dn, s)
    {
        service = ser;
    }

    void Afficher()
    {
        Employe::Afficher();
        cout << "Service: " << service << endl;
    }
};
class Directeur : public Chef
{
private:
    string societe;

public:
    Directeur(string n, string p, string dn, double s, string ser, string soc) : Chef(n, p, dn, s, ser) { societe = soc; }
    void Afficher()
    {
        Chef::Afficher();
        cout << "Societe: " << societe << endl;
    }
};
int main()
{
    Directeur d("Izougaghen", "Mouna", "14/01/2002", 120000, "CEO", "pitiky");
    d.Afficher();
    return 0;
}
