#include<iostream>
using namespace std;
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int partition(int a[],int l,int h)
{
	int x,i,j,temp;
	x=a[h]; //pivot
	i=l-1;
	for(j=l;j<=h-1;j++)
	{
		if(a[j]<=x)
		{
			i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[h];
	a[h]=temp;
	return i+1;
}

int quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int q=partition(a,l,h);
		quicksort(a,l,q-1);
		quicksort(a,q+1,h);	
	}
}  
int main()
{
	int n,i,a[20];
	cout<<"Enter the size of the array : ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array before sorting : ";
	display(a,n);
	quicksort(a,0,n-1);
	cout<<"\nArray after sorting : ";
	display(a,n);
	return 0;
}
