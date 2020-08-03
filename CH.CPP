
/*
	#include<iostream.h>
	#include<conio.h>

	void main( )	
	{
	int a , b , ch;
	clrscr();

	cout << "Enter 2 numbers\n";	
	cin >> a >> b;
	
	cout << "1. Addition " << endl;
	cout << "2. Difference" << endl;
	
	cout << "Enter choice" << endl;
	cin >> ch;	

	switch( ch )
	{
	case 1: cout << a+b << endl; break;
	case 2: cout << a-b << endl; break;
	default:
		cout << "Invalid choice";
	}

	}
		
		
*/


	#include<iostream.h>
	#include<conio.h>

	void main( )	
	{
	int a , b ;
	char ch;
	clrscr();

	cout << "Enter 2 numbers\n";	
	cin >> a >> b;
	
	cout << "a. Addition " << endl;
	cout << "b. Difference" << endl;
	
	cout << "Enter choice" << endl;

	cin.ignore();
	ch = cin.get();

	switch( ch )
	{
	case 'a': cout << a+b << endl; break;

	case 'b': cout << a-b << endl; break;

	default:
		cout << "Invalid choice";
	}

	}
		
		
		