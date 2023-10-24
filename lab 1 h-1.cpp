#include<iostream>
using namespace std;
int main()
{
	
	//Declaring the values
	int x1;
	int x2;
	int y1;
	int y2;
	int Distance;
	cout << "value of x1"<<endl;
	cin>> x1;
	cout <<"value of x2"<<endl;
	cin>> x2;
	cout <<"value of y1"<<endl;
	cin>> y1;
	cout <<"value of y2"<<endl;
	cin >> y2;
	//Decleraing the formula
	Distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    cout << Distance <<endl;
	return 0;
	}