#include <iostream>
#include <set>
using namespace std;
int main() {
    const int SIZE = 10; 
    int numbers[SIZE];

    cout << "Enter [" << SIZE << "] numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    set<int> distinctNumbers; 
    for (int i = 0; i < SIZE; ++i) {
        distinctNumbers.insert(numbers[i]);
    }

    
    cout <<"The number of distinct values is "<< distinctNumbers.size() <<"." <<endl;
    cout << "The distinct numbers are: "<< endl;

    for (int num : distinctNumbers) {
        cout<< num<< " ";
    }
    cout <<endl;
    cout<<"asma";

    return 0;
}