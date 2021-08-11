#include<iostream>
using namespace std;
int insertion_sort(int b[],int m);
int main()
{
	int a[10],n,i;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertion_sort(a,n);
	cout<<"\n\nThe sorted array is : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
int display(int b[],int m,int k)
{
	int i;
	cout<<"\nThe array after pass no "<<k+1<<" is : ";
	for(i=0;i<m;i++)
	{
		cout<<b[i]<<"\t";
	}
}
int insertion_sort(int b[],int m)
{
	int i,j,key,temp;
	for(i=0;i<m;i++)
	{
		j=i;
		while(j<=i&&j>=0)
		{
			if(b[j]<b[j-1])
			{
				temp=b[j];
				b[j]=b[j-1];
				b[j-1]=temp;
			}
			j--;
			display(b,m,i);			
		}		
	}
}

