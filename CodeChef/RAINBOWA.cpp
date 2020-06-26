#include<iostream>
using namespace std;
int main()
{
	int t,flag=1,start,end,no=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		start=0;
		end=n-1;
		for(int i=0;i<n;i++)
			cin>>a[i];
		while(start<=end)
		{
			// check if palin
			if(a[start]!=a[end])
			{
				flag=0;
				break;
			}		
			start++;
			end--;	
		}
		if(flag==0)
			cout<<"no\n";
		// if palin
		else
		{
			// check if all 1 to 7 exist
			int no=1,mid=n/2;
			int b[7]={0};
			for(int i=0;i<=mid;i++)
			{
				// if any no is greater than 7
				if(a[i]>7)
				{
					flag=0;
					break;
				}		
				else
					b[a[i] - 1]++;		
			}
			if(flag==0)
				cout<<"no\n";
			// check for every occurence of 1 to 7
			else
			{
				for(int i=0;i<7;i++)
				{
					if(!b[i])
					{
						flag=0;
						break;
					}
				}
				if(flag==0)
				cout<<"no\n";
				else
				cout<<"yes\n";
			}
		}
		flag=1;	
	}
	return 0;
}
