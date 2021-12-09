#include <iostream>
#include <cmath>

using namespace std;

class complexe {
    double Re;
    double Img;

public:
    complexe(double a = 0, double b = 0) { // constructeur
        cout << "entrer la valeur rel" << endl;
        cin >> a;
        cout << "entrer la valeur de imaginaire " << endl;
        cin >> b;
        Re = a;
        Img = b;
    }
    void afficher() // methode d affichage
    {
        cout << Re;

        //Pour ne pas afficher 5 + -10i (si Img est negatif)
        if (Img >= 0)
            cout << " + ";

        cout << Img << "i" << endl;
    }
    double module(complexe a)
    {
        return sqrt(a.Re * a.Re + a.Img * a.Img);
    }
    complexe conjugue(complexe a)
    {
        a.Re = Re;
        a.Img = -Img;
        return a;
    }

    //Opérateur : complexe + complexe
    complexe operatorAjt(complexe a, complexe b)
    {
        complexe s;
        s.Re = a.Re + b.Re;
        s.Img = a.Img + b.Img;
        return s;
    }


    //Opérateur : complexe - complexe
    complexe operatorSous(complexe a, complexe b)
    {
        complexe s;
        s.Re = a.Re - b.Re;
        s.Img = a.Img - b.Img;
        return s;
    }

    //Opérateur : complexe * complexe
    complexe operatorMulti(complexe a, complexe b)
    {
        complexe p;
        p.Re = a.Re * b.Re - a.Img * b.Img;
        p.Img = a.Re * b.Img + a.Img * b.Re;
        return p;
    }
    //Opérateur : complexe / complexe
    complexe operatorDiv(complexe a, complexe b)
    {
        complexe d, inv; // methode
        inv.Re = 1 / module(b);
        inv.Img = 0;
        complexe m = operatorMulti(a, conjugue(b));
        d = operatorMulti(m, inv);
        return d;
    }
};
int main()
{
    int x;
    complexe c; // objet 
    complexe a(1, 2), b(3, 4);
    cout << "1. adition" << endl;
    cout << "2. soustraction " << endl;
    cout << "3. multiplicatuion" << endl;
    cout << "4. division" << endl;
    cout << "entrer VOTRE CHOIX : " << endl;
    cin >> x;
    switch (x) {
    case 1:
        cout << "l adition  est ";
        c.operatorAjt(a, b);
        c.afficher();
        break;
    case 2:
        cout << "la soustraction est ";
        c.operatorSous(a, b);
        c.afficher();
        break;
    case 3:
        cout << "la multiplicatuion est ";
        c.operatorMulti(a, b);
        c.afficher();
        break;
    case 4:
        cout << "la devision  est ";
        c.operatorDiv(a, b);
        c.afficher();
        break;
    default:
        cout << "il faut entrer la valeur entre 1 et 4" << endl;


    }

    return 0;
};
