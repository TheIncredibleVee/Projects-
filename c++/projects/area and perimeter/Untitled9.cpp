#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	string mystring;
	mystring = "This will help you to calculate the perimeter of a rectangle"; 
	cout << mystring << endl;
	mystring = "Type the following and hit enter"; 
	cout << mystring << endl;
	mystring = "The length of rectangle=";
	cout << mystring ;
	cin >> a >> b;
	mystring = "The bredth of rectangle ="; 
	cout << mystring;
	cin >>	b;
	int result;
	c =a+b;
	result =2*c;
	cout << "The perimeter of rectangle is=" << result;
	return 0;
}
