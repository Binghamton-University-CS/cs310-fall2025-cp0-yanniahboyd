#include "Animal.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo();
		AnimalsInZoo(const Animal& a);

		void display();
		void setAnimal(const Animal& a);

	private:
		int numAnimals;
		Animal animal;
};
