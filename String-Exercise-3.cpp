//Nurul Anissa binti Huzaini
//A17DW4087

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std; 

int main()
{
	char strPswd[80];

	cout<<"Enter password: ";
	gets(strPswd);
	
	if(strcmp(strPswd, "password"))
    {		
		cout<<"invalid password "<<endl;
    }
		cout<<"Logged in "<<endl;
	return 0;
}
