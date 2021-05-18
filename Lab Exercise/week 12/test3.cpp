#include <iostream>

using namespace std;

void fillChar(char* x){
    char c = 'A';
    for(int i = 0; i <= sizeof(x)+ 1; i++){
        *(x + i)= c;
        c++;
    }
}

int main(){
    char array[10];
    char* ptr;
    ptr=(char*)&array;
    fillChar(ptr);

for(int i=0;i<10;i++){
      cout <<"\nThe value is : "<< *(ptr + i)
             <<"\nThe logical address of it is : " <<(&ptr + i)
             <<endl;
}
cin.get();
return EXIT_SUCCESS;
}
