#include <iostream>

using namespace std;

class myclass{
public:
string nom ;
    myclass();
    ~myclass();

};

myclass::myclass(){
cout<<"enter votre nom:"<<endl ;

}
myclass::~myclass(){
cin>>nom;
cout<<"bonjour "<< nom <<endl;
cout<<"au revoir "<< nom <<endl;
}

int main()
{
    myclass c ;
    return 0;
}
