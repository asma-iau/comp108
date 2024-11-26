#include <iostream>
using namespace std;
int main(){
    int low = 0, high = 20;
    while(low < high){

        low = low + 3;
        high = high - 2;
    }
      cout <<"high: "<< high<< " low: " << low;

    return 0;


}