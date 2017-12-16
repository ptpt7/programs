#include<iostream>
using namespace std;
int  main()
{
	int a,total=0,b;
	cout<<"give a number";
	cin>>a;
	for(int j=1;j<=a;j++)
	{
		for(int i=2;i<j;i++)
		{
			b=j%i;
			if (b==0)
			total=total+1;

		}
		if(total==0)
			cout<<' '<<j;
		total=0;
	}
}		