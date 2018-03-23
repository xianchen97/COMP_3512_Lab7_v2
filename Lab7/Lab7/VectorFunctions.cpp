#include "VectorFunctions.hpp"


/*
The function should sum up all the values in the vector.
PRECONDITION: The vector should contain at least one element.
POSTCONDITION: Returns a sum all elements in the vector.
*/
int VectorFunctions::sum(const std::vector<int>& v)
{
	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	return sum;
}

/*
The function should sum up all the values in the vector.
PRECONDITION: The vector should contain at least one element.
POSTCONDITION: Returns the smallest element in the vector.
*/
int VectorFunctions::max(const std::vector<int>& v)
{
	int max = v[0];
	for (int i=0; i < v.size(); i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}

/*
The function should sum up all the values in the vector.
PRECONDITION: The vector should contain at least one element
POSTCONDITION: Returns the smallest element in the vector.
*/
int VectorFunctions::min(const std::vector<int>& v)
{
	int min = v[0];
	for (int i=0; i < v.size(); i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}
	std::cout << min;
	return min;
}

/*
The function should sum up all the values in the vector.
PRECONDITION: The vector should contain at least one element
POSTCONDITION: Returns the average as double of the vector.
*/
double VectorFunctions::average(const std::vector<int>& v)
{
	double sum = v[0];
	for (int i=0; i < v.size(); i++) {
		sum += v[0];
	}
	return sum/v.size();
}
