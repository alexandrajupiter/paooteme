// main.cpp
#include "Animal.h"

int main() {
    // Creare obiecte Animal cu inițializare
    Animal cat("Maya", "Pisică", 3, "Ioana Popescu", "Vaccinuri complete, deparazitare internă");

    Animal dog("Max", "Câine", 5, "Andrei Ionescu", "Operație de sterilizare, vaccin antirabic");

    // Afișare detalii animale
    cat.display();
    dog.display();

    // Folosirea operatorului "="
    dog = cat;

    // Afișare detalii animale după atribuire
    dog.display();

    return 0;
}