#include<iostream>
using namespace std;
int factorial(int num)
{   int fact=1;
	for(int i=num;num>0;num--)
	{
		fact=fact*num;
		
	}
	return fact;
}

int recfactor(int num)
{
	if(num==0)
	return 1;
	else
	return num*recfactor(num-1);
}
int gcditeration(int x,int y)
{
	int temp;
	while(y!=0)
	{
		temp=x;
	    x=y;
		y=temp%y;
	}
	return x;
}
int gcdrecursion(int x, int y)
{
	if(y==0)
	return x;
	else 
	return gcdrecursion(x,x%y);
}
int rec_pow(int x,int y)
{
	if(y==0)
	return 1;
	else 
	return x*rec_pow(x,y-1);
}
int pow(int x,int y)
{
	int res=x;
	for(int i=1;i<y;i++)
	res*=x;
	return res;
}
int recursive_fib(int n)
{
	if((n==1)||(n==0))
	return n;
	else
	return (recursive_fib(n-1)+recursive_fib(n-2));
}
void fib(int n)
{
	int x=0,y=1,z;
	cout<<x<<" "<<y<<" ";
	for(int i=2;i<n;i++)
	{
	z=x+y;
	cout<<z<<" ";
	x=y;
	y=z;}
}
int main()
{
	int num,result1,result2;
	cout<<"enter the number whose factorial is to be calculated : ";
	cin>>num;
	try 
	{
		if(num<0)
		throw "Invalid ...";
		result1=factorial(num);
		result2=recfactor(num);
		cout<<"factorial without recursion: "<<result1;
		cout<<"\nFactorial with recursion: " <<result2;
	}
	catch(char const *a)
	{
		cout<<a;
	}
	  
	 cout<<"\n\nenter values for gcd calculation";

	int a,b;
	cout<<"\nenter 2 numbers: ";
	cin>>a>>b;
	try
    {   if(a<0||b<0)
      throw "Invalid...";	
      result1=gcditeration(a,b);
      result2=gcdrecursion(a,b);
      cout<<"result for iteration: "<<result1;
      cout<<endl;
      cout<<"result for recursion: "<<result2;
    } 
    catch(char const *a)
	{
		cout<<a;
	}
	cout<<"\n\nenter values for power function:\n";
	cin>>a>>b;
	try
	{  if(a==0&&b==0)
	   throw "invalid..." ;
	
	  int pow1=rec_pow(a,b);
	  int pow2=pow(a,b);
	  cout<<"power by recursion: "<<pow1<<"\npower by iteration: "<<pow2<<endl;
    }
    catch(char const *a)
    {
    	cout<<a;
	}
	  cout<<"\n\nenter input for fibonacci calculation\n";
	  cin>>num;
	  try
	{
	  if(num<=0)
	  throw "invalid...";
	  fib(num);
	  cout<<endl; 
	  int i=0;
	  while(i<num)
	  {cout<<" "<<recursive_fib(i);
	    i++;
	  }
    }
    catch(char const*a)
    {
    	cout<<a;
	}
}
