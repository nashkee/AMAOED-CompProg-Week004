#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "test.h"

using namespace std;
int main(){
//string animal, string fur, int legs, bool tail
    Dog puppy("Cat", "Fluffy", 5, true);
    puppy.setBreed("Malamute");
    puppy.setSize("large");
    puppy.setIsRegistered(true);
   // puppy.setAnimal("dog");
   // puppy.setFur("fluffy");
   // puppy.setLegs(5);
   // puppy.setTail(true);

    cout<< "\tDetails\n" << puppy.getMammal()<< endl;
    cout << "Breed       : " << puppy.getBreed()<< endl
         << "Size        : " << puppy.getSize()<< endl
         << "Reg Status  : " << puppy.getIsRegistered()<<endl<<endl;

    _pause();
    return EXIT_SUCCESS;
}
