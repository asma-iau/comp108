#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main(){
    int number;
    cout<<"enter the number of names: ";
    cin>>number;
    vector<string> names(number);
    cout<<"enter the names: ";
    for (int i = 0; i < number; ++i){
        cin>>names[i];
    }
    string target;

    cout<<"enter the name you are looking for: ";
    cin>>target;

    for (int i = 0; i < number; ++i){
        if (names[i] == target){
            cout<<"first occurrence of "<<target<<" : "<<i + 1<<endl;
        }
       
        
    
    }

    


    return 0;

}