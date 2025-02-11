#include "util.h"

string convert_to_string(int* vector, int size) {
	string msg = "";
	for (int i = 0; i < size; i++)
	{
		msg += to_string(vector[i]) + " ";
	}
	return msg;
}

void init_random(int* vector, int size, int a, int b) {
	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		vector[i] = rand() % (b - a + 1) + a;
	}
}