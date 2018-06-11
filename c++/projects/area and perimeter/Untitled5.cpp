#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d,e,f,g,h,result,area,perimeter;
	
	string mystring;
	mystring = "This will help you to calculate the perimeter, area and volume of a cuboid/rectangle"; 
	cout << mystring << endl;
	
	mystring = "Type the following and hit enter"; 
	cout << mystring << endl;
	
	mystring = "The length of cuboid/rectangle=";
	cout << mystring ;
	cin >> a;
	
	mystring = "The bredth of cuboid/rectangle="; 
	cout << mystring;
	cin >>	b;
	
	mystring = "The height of cuboid="; 
	cout << mystring;
	cin >>	c ;
	
	mystring = "What do you want"; 
	cout << mystring << endl ;
	
	mystring = "Type area/perimeter"; 
	cout << mystring << endl;
	cin >>	d;
	
	{
		e =a+b;
		result =2*e;
	
		f=a*b;
	}
	if ( d == perimeter)
	{      
		cout << "The perimeter of rectangle is=" << result;
		cin >>  g;
		return 0;
	}
	else
	{
		cout << "The area of rectangle =" << f;		
		cin >> h;
		return 0;
	}
}
