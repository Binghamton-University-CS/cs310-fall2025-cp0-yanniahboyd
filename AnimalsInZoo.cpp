#include "AnimalsInZoo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

AnimalsInZoo::AnimalsInZoo(): numAnimals(0), animal(){};

AnimalsInZoo::AnimalsInZoo(const Animal& a): numAnimals(1), animal(a){};

void AnimalsInZoo::display(){
	cout << "Number of animals: " << numAnimals << endl;
	if (numAnimals > 0){
		animal.display();
	}
}

void AnimalsInZoo::setAnimal(const Animal& a){
	animal = a;
	numAnimals = 1;
}
