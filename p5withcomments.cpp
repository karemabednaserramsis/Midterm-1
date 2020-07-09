#include <iostream>
using namespace std;

void print(int array[5]); // declaring the print function

int main()
{
	int array[5] = { 1,2,3,4,5 }; // creating an array with 5 values
	cout <<"the elements of the array are: " <<endl;
	print(array); // printing the array using the function

	return 0; // end main
}
/* void function called in main */
void print(int array[5])
{
	for (int i = 0; i < 5; i++) 
	/*for loop that will print the elements in the array from 0 through 5  
	incrementing each loop */
	cout<< array[i] << " ";

}