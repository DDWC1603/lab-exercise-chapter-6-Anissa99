//Nurul Anissa binti Huzaini
//A17DW4087
#include <iostream>
using namespace std;

int ary[]={1,2,3,4,5};
int n, result=0;

int main()
{
	for(n=0; n<5; n++)
	{
		result += ary[n];
	}
	cout<<result;
}
