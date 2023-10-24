#include<iostream>
using namespace std;
int main()
{
	//First in centimeter
	float centimeter;
	cout << "Put value in cm"<<endl;
	cin >> centimeter;
	float meter=centimeter/100;
	float kilometer=centimeter/10000;
	cout << " value in m " ;
	cout << meter <<endl;
	cout <<" value in km " ;
	cout << kilometer <<endl;
	return 0;
	}