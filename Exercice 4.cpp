#include <iostream>
using namespace std;

class mere{
public:
   void display(){
  	cout<<"je suis la class mere"<<"\n";} 
};

class fille: public mere{
public :
   void display(){
	cout<<"je suis la class fille"<<"\n";}	
};

int main(){
   fille f;
  f.display();
    return 0;
}
