#include <iostream>

using namespace std;


int main()
{
	int a, b;
	cout << "please enter two integers: " << endl;
	cin >> a >> b; 	////input the first and second integer values
	cout << "The values entered before swapping are " << a << " and " << b << endl; // output the initial values
	swap(a, b); // calling up the void function
	cout << "The values after swapping are " << a << " and " << b << endl; // output the new values

	return 0;
}
/* void function that swaps the 2 integers with no return */
void swap(int* a, int* b)    // pointers for 
{
	int* temp;
	temp = a;	// temp variable created to hold value of a
	a = b;		// a is now the value of b
	b = temp; 	// b is now value of temp which is the old value of a
}