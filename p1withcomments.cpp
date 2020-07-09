#include <iostream>
#include <algorithm> // to get the sort function
using namespace std;

int main()
{
	int arr[10]; // declare 10 element array
	cout << "Please enter the 10 integers:" << endl; // request the 10 integers

	for (int i = 0; i < 10; i++) {   // for loop to input the integers
		cin >> arr[i];  
	}

	sort(arr, arr + 10);

	for (int i = 0; i < 10; i++) {  // for loop to print the integers
		cout << arr[i] << " "; 
	}

	
	return 0;
}