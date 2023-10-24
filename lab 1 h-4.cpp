#include<iostream>
using namespace std;
int main()
{
	cout << "Fahrenheit to Celcius: " <<endl;
	float fahrenheit;
	float Celcius;
	cout << "Value of Temparature ";
	cin >> fahrenheit;
	Celcius= (fahrenheit-32)*5/9;
	cout << " Value in Celcius is ";
	cout << Celcius <<endl;
	return 0;
}