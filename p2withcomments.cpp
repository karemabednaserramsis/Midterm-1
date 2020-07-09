#include <iostream>

using namespace std;
/* these are floats as requested */
float sum(float, float); 
float sub(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
	float float1, float2;
	cout << "Please enter the first number:" << endl;
	cin >> float1;										//input the first float
	cout << "Please enter the second number:" << endl;
	cin >> float2;										//input the second float
    /* calling the functions and outputing the results*/
	cout << "sum: " << sum(float1, float2) << endl;
	cout << "sub: " << sub(float1, float2) << endl;
	cout << "mult: " << multiply(float1, float2) << endl;
	cout << "div: " << divide(float1, float2) << endl;

	return 0; // end main
}
/* each of these is the function that get called in main 
and all are float as to not lose percision*/
float sum(float A, float B)
{
	return(A + B);
}

float sub(float A, float B)
{
	return(A - B);
}

float multiply(float A, float B)
{
	return(A * B);
}

float divide(float A, float B)
{
	return(A / B);
}