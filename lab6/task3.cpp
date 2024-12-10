#include <iostream>
#include<cctype>
using namespace std;

int main(){

    char x;
    cout<<"enter a charactar: ";
    cin>>x;
    if (islower(x)){
    cout<<"your character \' "<<x<<"\' is in lowercase.";
    x=toupper(x);
    cout<<" its uppercase is \'"<<x<<"\'"<<endl;}

    else if (isupper(x)){

    cout<<"your character \' "<<x<<"\' is in uppercase. ";
    x=tolower(x);
    cout<<"its lowercase is \'"<<x<<"\'"<<endl;}


    else if (isdigit(x)){
        cout<<"your character\'"<<x<<"\'"<<"is a digit."<<endl;

    }
    else {
        cout<<"your character\'"<<x<<"\'"<<"is a special character."<<endl;
    }
}