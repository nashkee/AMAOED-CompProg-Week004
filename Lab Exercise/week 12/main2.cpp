#include <iostream>

using namespace std;

void add(float x[], int size){
   for (int i=0;i<size;i++){
          *(x + i) = i;
   }
}

int main(){

    float array[20];
    float(&ref)[20]=array;
    int arrSize = sizeof(array)/sizeof(array[0]);
    add(ref, arrSize);
    for(int i =0 ; i< 20 ; i++){
    cout <<"The Value is " <<(ref)[i]
         << " located at logical Address  "<< (&ref)[i]
         <<endl;
}
cin.get();
return EXIT_SUCCESS;
}
