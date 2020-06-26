#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,no,digit=2,flag=0;
		cin>>n;
		vector<int> a,b,c;
		for(int i=0;i<n;i++)
		{
			cin>>no;
			a.push_back(no);
		}
		// make a copy
		b=a;
		// check if its already descending
		sort(a.begin(),a.end(),greater<int>());
//		for(int i=0;i<n;i++)
//			cout<<a[i];
		if(b==a)
			flag=0;
		
		else
		{
			
			while(digit<=n)
			{
				vector<int> d;
				int found=0;
				int q=digit;
				int r=0;
				for(int i=n-digit;i<n;i++)
				{
					d.push_back(b[i]);
				}
				
				c=d;
				sort(d.begin(),d.end());
				do
				{
					
					if(c==d)
					{
						found=1;
						break;
					}
					
				} while (next_permutation(d.begin(),d.end()));
				if(found==1 && next_permutation(d.begin(),d.end()))
				{
					c=d;
					flag=1;
					break;
				}
				else
				{
					flag=0;
				}
				
				digit++;
			}
			
		}
		if(flag==0)
			cout<<"-1\n";
		else
		{
			for(int i=0;i<n-digit;i++)
			{
				cout<<b[i];
			}
			for(int i=0;i<digit;i++)
			{
				cout<<c[i];
			}
			cout<<endl;
		}
		
			}
		}
			
