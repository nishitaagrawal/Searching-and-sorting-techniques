#include<iostream> //Selection sort
using namespace std;
int display(int b[],int m,int k)
{
	int i;
	cout<<"\nThe array after pass no "<<k+1<<" is :  ";
	for(i=0;i<m;i++)
	{
		cout<<b[i]<<"\t";
	}
}
int selection_sort(int b[],int m)
{
	int i,idx,j;
	for(i=0;i<m-1;i++)
	{
		idx=i;
		for(j=i+1;j<m;j++)
		{
			if(b[j]<b[idx])
			{
				idx=j;
			}
		}
		swap(b[idx],b[i]);
		display(b,m,i);	
	}
}
int swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
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
	cout<<"Original Array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	selection_sort(a,n);
	cout<<"\nThe sorted array is : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}

