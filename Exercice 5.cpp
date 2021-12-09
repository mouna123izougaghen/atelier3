#include<iostream>

using namespace std;
class animal{
	
	public:
		string name;
		int age ;
		void set_value(string n,int a){
			name=n;
			age=a;	
		}
		
};
class zebra:public animal {
	
	public:
		string origine="l`afrique ";
		void dis(){
		cout<<"  Son nom est :  "<< name <<endl;
		cout<<"  l'age de zebra est :  "<<age << endl ;
		cout<<"  Son origine est : "<<origine <<endl ;
}
			
};
class dolphi : public animal{
	
	public :
	string origine="brazil";
	void dis(){
        cout<<"  son nom est :"<< name<< endl;
		cout<<"  l'age du dolphi est :"<<age<<endl ;
		cout<<"  son origine est :"<<origine <<endl ; }	
		
};
	
	

int main(){
	
	zebra z;
	z.set_value("zebra",34);
	z.dis();
    dolphi d;
    d.set_value("dolphi",56);
    d.dis();
	return 0 ;
	
}
