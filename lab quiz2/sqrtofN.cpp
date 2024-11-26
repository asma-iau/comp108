#include  <iostream>
#include <cmath>

using namespace std;
int squareRoot(int n){
    return sqrt(n);
}

int main(){
    int input;
    cout<<"enter a number: ";
    cin>>input;
    cout<<"the square root of this number is "<<squareRoot(input);
}