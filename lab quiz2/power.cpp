#include <iostream>
using namespace std;

int power (int base,int exp){
    if (exp == 0){
        return 1;
    }
    else{
        return base *power(base,exp-1);

    }
}

int main(){
    cout<<"enter a base number: ";
    int base;
    cin>>base;
    cout<<"enter an exponent number: ";
    int exp;
    cin>>exp;
    cout<<power(base,exp);
}