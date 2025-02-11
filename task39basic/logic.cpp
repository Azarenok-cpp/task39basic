#include "logic.h"

void sort(int* vector, int length) {
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i; j < length; j++)
		{
			if (vector[j] < vector[i]) {
				swap(vector[i], vector[j]);
			}
		}
	}
}