
// C++ program to illustrate the macro definition
#include <iostream>
using namespace std;

// Define a macro to calculate the square of a number
#define SQUARE(x) (x * x)

int main()
{
	int n = 7;
	int result = SQUARE(n); // Expands to: (n * n)
	cout << "Square of " << n << " is " << result;
	return 0;
}
