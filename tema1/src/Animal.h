// Animal.h
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <cstring>

class Animal {
private:
    char* name;
    char* species;
    int age;
    char* ownerName;
    char* medicalHistory;

public:
    // Constructor cu listă de inițializare (folosind încapsularea)
    Animal(const char* name, const char* species, int age, const char* ownerName, const char* medicalHistory);

    // Destructor pentru eliberarea memoriei alocate pe heap
    ~Animal();

    // Supraincarcarea operatorului "="
    Animal& operator=(const Animal& other);

    // Metodă pentru afișarea informațiilor despre animal
    void display() const;
};

#endif // ANIMAL_H
