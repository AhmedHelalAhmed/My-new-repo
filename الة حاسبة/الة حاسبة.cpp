#include <iostream>
using namespace std;
int sum (int x , int y);
int sub (int x , int y);
int mult (int x , int y);
int d (int x , int y);
int pow (int x , int y);
int main()
{
	int a,b;
	int choice =0;
	
	while(choice!=6)
	
	{
	cout<<"enter 1 for sum"<<endl ;
	cout<<"enter 2 for substruct"<<endl ;
	cout<<"enter 3 for multiplication"<<endl ;
	cout<<"enter 4 for divided"<<endl ;
	cout<<"enter 5 for power"<<endl ;
	cout<<"enter 6 for exit the program"<<endl ;
	cin>>choice;
	
	
	switch (choice)
	{
	
	case (1):
		
	cout<<"enter two numbers for sumation\n";
	cin>>a>>b;
	cout<<sum(a,b)<<endl;
	break;
	case (2):
	cout<<"enter two numbers for substruct\n";
	cin>>a>>b;
	cout<<sub(a,b)<<endl;
	break;
	case (3):
	cout<<"enter two numbers for multiplication\n";
	cin>>a>>b;
	cout<<mult(a,b)<<endl;
	break;
	case (4):
	cout<<"enter two numbers for divided\n";
	cin>>a>>b;
	cout<<d(a,b)<<endl;
	break;
	case (5):
	cout<<"enter two numbers for power\n";
	cin>>a>>b;
	cout<<pow(a,b)<<endl;
	break;

	
	
	}
	
	
	}
	
	
	
	return 0;

}
	
int sum (int x , int y)
{

	return x+y;

}
int sub (int x , int y)
{

	if ( x>=y)
		return x-y;
	else
		cout<<"error\n";

}
int mult (int x , int y)
{

	return x*y ;
}

int d (int x , int y)
{
	int z;
	if (y==0)
	{
	z=x;
	x=y;
	y=z;
	return x/y;
	}
	return x/y ;
	
}

int pow (int x , int y)
{

	 if(y==0)
		 return 1;
	 else if (y>0)
		 return x * pow(x,y-1);
	 else
	  return 1 / pow(x,-y);



}

