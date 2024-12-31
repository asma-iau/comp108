#include <iostream>
using namespace std;
int fun();
int fun(double a){
    return a + 10;
}

int main(){
    
    cout<< fun(5.0);
}