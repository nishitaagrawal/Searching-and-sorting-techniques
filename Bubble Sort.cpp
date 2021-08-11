#include<iostream> //Bubble Sort
using namespace std;
int display(int a[],int n,int i,int j)
{
	cout<<"\nThe array after pass no "<<i+1<<" and comparison number "<<j+1<<" is : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int bubble_sort(int b[],int m)
{
	int i,j,temp;
	for(i=0;i<m-1;i++) 
	{
		for(j=0;j<m-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
			display(b,m,i,j);
		}
		
	}
	cout<<"\n\nThe sorted array is : ";
	for(i=0;i<m;i++)
	{
		cout<<b[i]<<"\t";
	}
}
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
	bubble_sort(a,n);
	return 0;
}

