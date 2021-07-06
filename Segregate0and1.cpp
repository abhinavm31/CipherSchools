//Segregate 0s and 1s
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,z=0,o=0;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
			z++;
		else if(arr[i]==1)
			o++;
	}
	for(int i=1;i<=z;i++)
		cout<<"0 ";
	for(int i=1;i<=o;i++)
		cout<<"1 ";
}
