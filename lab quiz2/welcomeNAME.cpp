#include <iostream>
using namespace std;

void printname(string name){
    cout <<"Welcome, "<<name<<".";
}


int main(){
    string name;
    cout<<"enter your name: ";
    cin>>name;

    printname(name);

}