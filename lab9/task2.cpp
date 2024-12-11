#include <iostream>
using namespace std;

int main (){
    int arrA[5], arrB[5], arrC[10], i;

    cout<<"enter the array 1 values: ";
    for ( i = 0; i < 5; ++i){
        cin>>arrA[i]; 

    }
    


    cout<<"enter the array 2 values: ";
    for (i = 0; i < 5; ++i){
        cin>>arrB[i];
    }


     for (i = 0; i < 5; ++i){
        arrC[i]= arrA[i];
        arrC[i + 5]= arrB[i];

    }
    cout<<"\n\nThe values of arrC: ";
    for (i = 0 ; i< 10; ++i){
        cout<< arrC[i]<<", ";
    }


    



}