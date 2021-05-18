#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "_dog.h"

using namespace std;
int main(){

    DOG puppy;
    puppy.setBreed("Malamute");
    puppy.setSize("Large");
    puppy.setIsRegistered(false);
    puppy.setAnimal("Dog");
    puppy.setFur("Bushy");
    puppy.setLegs(4);
    puppy.setTail(true);

    cout<< "\n\tAnimal Details\n"
        << "Type of mammal : " << puppy.getAnimal()<<endl
        << "Type of fur    : " << puppy.getFur()<<endl
        << "Number of legs : " << puppy.getLegs()<<endl
        << "Tail Presence  : " << puppy.getTail()<<endl
        << "Breed          : " << puppy.getBreed()<< endl
        << "Size           : " << puppy.getSize()<< endl
        << "Reg Status     : " << puppy.getIsRegistered()<<endl<<endl;

    _pause();
    return EXIT_SUCCESS;
}
