#include <iostream>
using namespace std;

#define ARRAY_SIZE 5
bool compare(int x[], int y[], int size);

int main(void)
{
	int a1[ARRAY_SIZE] = {1, 2, 3, 4, 5};
	int a2[ARRAY_SIZE] = {1, 2, 3, 4, 5};
	int a3[ARRAY_SIZE] = {1, 1, 1, 1, 1};

	if (compare(a1, a2, ARRAY_SIZE))
		cout << "Arrays a1 and a2 are equal" << endl;
	else
		cout << "Arrays a1 and a2 are not equal" << endl;

	if (compare(a1, a3, ARRAY_SIZE))
		cout << "Arrays a1 and a3 are equal" << endl;
	else
		cout << "Arrays a1 and a3 are not equal" << endl;
	
}

bool compare(int x[], int y[], int size) {
	int i = 0;
	bool is_equal = true;
	while (i < size && is_equal) {
		if (x[i] != y[i])
			is_equal = false;
		else
			i++;
	}
	return is_equal;
}