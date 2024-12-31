#include <iostream>


using namespace std;
int main(){
   const int size= 5;
   int scores[size]= {5 ,9 , 2, 6,10};
   int max = scores[0];
   for (int i =0; i < size; i++){
    if (scores[i]> max){
        max= scores[i];
       }
       
   
   }
   cout<<max;
   return 0;
}