// Animal.cpp
#include "Animal.h"

// Inițializarea membrilor în constructor
Animal::Animal(const char* name, const char* species, int age, const char* ownerName, const char* medicalHistory)
    : age(age) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

    this->species = new char[strlen(species) + 1];
    strcpy(this->species, species);

    this->ownerName = new char[strlen(ownerName) + 1];
    strcpy(this->ownerName, ownerName);

    this->medicalHistory = new char[strlen(medicalHistory) + 1];
    strcpy(this->medicalHistory, medicalHistory);

    std::cout << "Constructor apelat pentru animal: " << this->name << std::endl;
}

// Destructor pentru eliberarea memoriei de pe heap
Animal::~Animal() {
    delete[] name;
    delete[] species;
    delete[] ownerName;
    delete[] medicalHistory;
    std::cout << "Destructor apelat pentru animal" << std::endl;
}

// Supraincarcarea operatorului "="
Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        // Eliberăm memoria existentă
        delete[] name;
        delete[] species;
        delete[] ownerName;
        delete[] medicalHistory;

        // Copierea valorilor din other în obiectul curent
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);

        species = new char[strlen(other.species) + 1];
        strcpy(species, other.species);

        ownerName = new char[strlen(other.ownerName) + 1];
        strcpy(ownerName, other.ownerName);

        medicalHistory = new char[strlen(other.medicalHistory) + 1];
        strcpy(medicalHistory, other.medicalHistory);

        age = other.age;

        std::cout << "Operator = apelat pentru animal" << std::endl;
    }
    return *this;
}

// Funcție pentru afișarea detaliilor animalului
void Animal::display() const {
    std::cout << "Nume: " << name << ", Specie: " << species << ", Vârstă: " << age
              << ", Proprietar: " << ownerName << ", Istoric medical: " << medicalHistory << std::endl;
}
