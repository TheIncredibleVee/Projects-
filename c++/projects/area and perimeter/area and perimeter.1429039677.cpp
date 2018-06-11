#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d,e,f,g,h,result,area,perimeter,volume;

	
	string mystring;
	mystring = "This will help you to calculate the perimeter and area of a rectangle"; 
	cout << mystring << endl;
	
	mystring = "Type the following and hit enter"; 
	cout << mystring << endl;
	
	mystring = "The length of rectangle=";
	cout << mystring ;
	cin >> a;
	
	mystring = "The bredth of rectangle="; 
	cout << mystring;
	cin >>	b;
	
	e =a+b;
	result =2*e;
	f=a*b;
	
	{
		mystring = "The perimeter of rectangle is=";
		cout << mystring << result << endl ;
		cout << "The area of rectangle =" << f;		
		return 0;
	}
}
