#include<iostream>
using namespace std;
class Test{
public:
    void call(){
        static int i=0;
        cout << "la fonction call() a ete appeller " << i++ << " fois" << endl;}};
int main(){
    Test test;
    test.call();
    test.call();
    test.call();
    test.call();
    test.call();
    return 0;}
