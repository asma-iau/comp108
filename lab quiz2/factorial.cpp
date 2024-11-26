#include <iostream>
using namespace std;


int factor(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factor(n-1);
    }   
}


int main(){
cout<<"enter a number: ";
int number;
cin>>number;

cout<<factor(number);
}