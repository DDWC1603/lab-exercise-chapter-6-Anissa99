//Nurul Anissa binti Huzaini
//A17DW4087

#include <iostream>
using namespace std; 

int main()
{
  int arr[10], sum=0, x;
  cout<<"Enter the 10 numbers: "<<endl;
  for(x=0;x<10;x++)	
  
  {
   cin>>arr[x];
   sum=sum+arr[x];
  }

  cout<<"The sum of the 10 numbers: "<<sum<<endl;
  std::cin.get();
}


