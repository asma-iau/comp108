#include <iostream>
using namespace std;

struct shoes{
    string brand;
    double price;
    string color;

};





int main(){
    int size, key, found= 0;
    cout<<"enter the size of the array: ";
    cin>> size;
    cout<<"enter the elements of the array \n";
    int arr[size];

    for (int i =0; i< size; i++){
        cin>>arr[i];
    }
    

    cout<<"enter the element ur searching for: ";
    cin>> key;
    
    for (int i = 0 ; i< size; i++){
        if (arr[i]== key){
            found = i ;
            break;
        }
    }
    if (found != 0){
        cout<<"item found at index "<<found;
    }
    else{
        cout<<"item was not found";
    }

    shoes shoe1;
    shoe1.brand="adidas";
    shoe1.color= "black";
    shoe1.price=99.9;
    cout<<"\nthe brand of the shoe is "<<shoe1.brand<<" and the price is "<<shoe1.price<<"$.";


}