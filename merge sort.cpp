#include<iostream>
using namespace std;
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void merge(int arr[],int l,int m,int r)
{
	int i,j,k;
	i=l;  //starting index for left subarray
	j=m+1;  //starting index for right subarray
	k=l;    // starting index for temp subarray
	int temp[10]; // temporary array
	while(i<=m && j<=r)   // keep track if the boundary are in proper range or not
	{
		if(arr[i]<=arr[j])   // ele in left subarray is smalller than rgt sub array copy 1st one to the temp
		{
			temp[k]=arr[i];
			i++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=m)   // copying remaining elements of the left subarray in temp as it is
	{
		temp[k]=arr[i];
		i++;k++;
	}
	while(j<=r) // copying remaining elements of the right subarray in temp as it is
	{
		temp[k]=arr[j];
		j++;k++;
	}
	for(int p=l;p<=r;p++)
	{
		arr[p]=temp[p];
	}
	cout<<"\nafter merge : ";
	display(temp,r);
}
void mergesort(int arr[],int l,int r)
{
	int m;
	if(l<r)  //to check if the subarray has only one element or not. If only 1 ele then this condition will 
	{        //become false mergesort will stop giving recurssive calls and the array cannot be furthur divided
		int m=(l+r)/2;		
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
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
	mergesort(a,0,n-1);
	cout<<"\nArray after sorting : ";
	display(a,n);
	return 0;
}
