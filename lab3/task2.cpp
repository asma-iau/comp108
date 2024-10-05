#include <iostream>
using namespace std;
int main(){

    float price;
    float items;
    float cost;
    float disc = 0.05;
    

    cout<<"enter item price: "<< endl;
    cin>> price;
    cout<< "enter No items: "<< endl;
    cin>> items;
    cost = price * items;

    if (price >= 100 && price > 1000 && items > 2){
        cost= cost - (cost * disc);
        cout<< "total cost: "<< cost;

    }



    if (cost > 1000){
        cost = cost - (cost * disc);
        cost = cost - (cost * disc);
        cout<<"total cost: "<< cost;


    }

    else{
        cost = cost + 10;
        cout<< "total cost: "<< cost;
    }



}