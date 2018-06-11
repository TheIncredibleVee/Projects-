#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,h;
	string mystring;
	mystring = "This will help you tocalculate the area of a rectangle"; 
	cout << mystring << endl;
	mystring = "Type the following and hit enter"; 
	cout << mystring << endl;
	mystring = "The length of rectangle=";
	cout << mystring ;
	cin >>a;
	mystring = "The bredth of rectangle ="; 
	cout << mystring;
	cin >>	b;
	int result;
	result =a*b;
	cout << "The area of rectangle is=" << result;
	cin >> h;
	return 0;
}
