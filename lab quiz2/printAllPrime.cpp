#include <iostream>

using namespace std;


bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= n/2; ++i){
        if(n % i == 0){
            return false;
        }
        else 
            return true;
    }
    return true;
}


void printPrime(int num1,int num2){
    if (num1>num2){

        swap(num1,num2);
    }
    for (int i = num1+1 ;i < num2;++i){
        if (isPrime(i)){
            cout << i << " ";

        }
    }
    }



int main(){
    int number1, number2;
    cout<<"enter two numbers: ";
    cin>>number1>>number2;

    printPrime(number1,number2);
    return 0;



}