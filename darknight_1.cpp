// team darknight
//author rahul kushwaha 20135022
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	string pos[12][12]={
{"AA","AB","AC","AD","AE","AF","AG","AH","AI","AJ","AK","AL"},
{"BA","BB","BC","BD","BE","BF","BG","BH","BI","BJ","BK","BL"},
{"CA","CB","CC","CD","CE","CF","CG","CH","CI","CJ","CK","CL"},
{"DA","DB","DC","DD","DE","DF","DG","DH","DI","DJ","DK","DL"},
{"EA","EB","EC","ED","EE","EF","EG","EH","EI","EJ","EK","EL"},
{"FA","FB","FC","FD","FE","FF","FG","FH","FI","FJ","FK","FL"},
{"GA","GB","GC","GD","GE","GF","GG","GH","GI","GJ","GK","GL"},
{"HA","HB","HC","HD","HE","HF","HG","HH","HI","HJ","HK","HL"},
{"IA","IB","IC","ID","IE","IF","IG","IH","II","IJ","IK","IL"},
{"JA","JB","JC","JD","JE","JF","JG","JH","JI","JJ","JK","JL"},
{"KA","KB","KC","KD","KE","KF","KG","KH","KI","KJ","KK","KL"},
{"LA","LB","LC","LD","LE","LF","LG","LH","LI","LJ","LK","LL"}
};
	int arr[12][12];
	int n,m,i,j,k,l,count=0;
	cin>>n;
	//n==1 black
	//n==2 white
	if(n==1)
	{
		m=2;
	}
	else
		m=1;
	for ( i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			cin>>arr[i][j];
		}
	}
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (arr[i][j]==n)
			{
				
				count=0;
				//for east i=const
				for (k = j+1; k < 12; k++)
				{
					if (arr[i][k]==m && k<=10)
					{
						count++;
					}
					else
						break;
					
				}
				if (count>=1 && arr[i][k]==0)
					{
						
						cout<<pos[i][k];

						return 0;
					}

					count=0;
				//for west i=const
				for (k = j-1; k >=0; k--)
				{
					if (arr[i][k]==m && k>0)
					{
						count++;
					}
					else
						break;
					
				}
				if (count>=1 && arr[i][k]==0)
					{ 
						
						cout<<pos[i][k];

						return 0;
					}

					count=0;
				//for north j=const
				for (k = i-1; k >=0; k--)
				{
					if (arr[k][j]==m && k>0)
					{
						count++;
					}
					else
						break;
					
				}
				if (count>=1 && arr[k][j]==0)
					{
						
						cout<<pos[k][j];

						return 0;
					}

					count=0;
				//for south j=const
				for (k = i+1; k < 12; k++)
				{
					if (arr[k][j]==m && k<=10)
					{
						count++;
					}
					else
						break;
					
				}
				if (count>=1 && arr[k][j]==0)
					{
						
						cout<<pos[k][j];

						return 0;
					}
					
					
				count=0;
				//for north east 
				l=j;
				for (k = i-1; k >=0; k--)
				{
					l++;
					if (arr[k][l]==m && k>0 && l<=10)
					{
						count++;
					}
					else
						break;
					
				}
				if (count>=1  && arr[k][l]==0)
					{
						
						cout<<pos[k][l];

						return 0;
					}

					count=0;
				//for north west
					l=i;
				for (k = j-1; k >=0; k--)
				{
					l--;
					if (arr[l][k]==m && l>0 && k>0)
					{
						count++;
					}
					else
						break;
					
				}
				if (count>=1 && arr[l][k]==0)
					{ 
						
						cout<<pos[l][k];

						return 0;
					}

					count=0;
				//for south east
				l=i;
				for (k = j+1; k <=11; k++)
				{
					l++;
					if (arr[l][k]==m && k<=10 && l<=10)
					{
						count++;
					}
					else
						break;
					
				}
				if (count>=1 && arr[l][k]==0)
					{ 
						
						cout<<pos[l][k];

						return 0;
					}

					count=0;
				//for south west
				l=i;
				for (k = j-1; k >=0; k--)
				{
					l++;
					if (arr[l][k]==m && k>0 && l<=10 )
					{
						count++;
					}
					else
						break;
					
				}
				if (count>=1  && arr[l][k]==0)
					{
						
						cout<<pos[l][k];

						return 0;
					}

					count=0;
				
				
			}
		}
	}
	return 0;
}
