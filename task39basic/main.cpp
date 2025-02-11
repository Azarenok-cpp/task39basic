#include <iostream>
#include "util.h"
#include "logic.h"
#define SIZE 15
/*		v.1.0
		Azarenok Rodion Maximovich, P13024, 11.02.2025	*/

int main() {
	int vector[SIZE];
	
	init_random(vector, SIZE, 0, 100);
	cout << convert_to_string(vector, SIZE) << endl;

	sort(vector, SIZE);

	cout << convert_to_string(vector, SIZE) << endl;

	return 0;
}