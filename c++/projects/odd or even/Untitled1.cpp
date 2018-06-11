#include <iostream>
using namespace std;

int main ()
{
	string mystring;
	mystring = "This will help you to know weather the number is odd or even"; 
	cout << mystring << endl;
	mystring = "Type a number here ___";
	cout << mystring << endl;
	int a,b;
	cin >>a;
	if ( a%2==0 )
		{
			cout <<"The number you typed is an even number";
			cin >> a;
			return 0;
		} 
	else
		{
			cout << "The number you entered is an odd number";
			cin >> b;
			return 0;
		}
	
}
