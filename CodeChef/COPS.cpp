#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int totalcops,speed,time,totalhouses=100,distance;
		int upperbound,lowerbound,lastub;
		cin>>totalcops>>speed>>time;
		int houses[totalcops];
		
		for(int i=0;i<totalcops;i++)
			cin>>houses[i];		
			
		distance=speed*time;
		sort(houses,houses+totalcops);
		
		
		if(distance>=houses[0])
			lowerbound=1;
		else
			lowerbound=houses[0]-distance;
		upperbound=houses[0]+distance;
		if(upperbound>100)
				upperbound=100;
		lastub=upperbound;
		totalhouses=totalhouses - (upperbound - lowerbound) - 1;
		// for each house
		for(int i=1;i<totalcops;i++)
		{
			
			lowerbound=houses[i]-distance;
			upperbound=houses[i]+distance;
			if(lowerbound<=lastub)
				lowerbound=lastub+1;
			if(upperbound>100)
				upperbound=100;
			totalhouses=totalhouses - (upperbound - lowerbound) - 1;
			if(totalhouses<1)
			{
				totalhouses=0;
				break;
			}
			lastub=upperbound;
		}		
		cout<<totalhouses<<endl;
	}
	return 0;
}
