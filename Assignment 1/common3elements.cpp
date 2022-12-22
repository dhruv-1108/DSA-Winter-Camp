#include<bits/stdc++.h>
using namespace std;

void commonIn3Sorted(int a1[], int a2[], int a3[], int a, int b, int c)
{
	// Time Complexity -> O(n*2)
	// Space Complexity -> O(n)
	// int arr[10];
	// int k  = 0;
	// for(int i = 0; i < a; i++)
	// {
	// 	for(int j = 0 ; j < b; j++)
	// 	{
	// 		if(a1[i] == a2[j]){
	// 			arr[k] = a1[i];
	// 			k++;
	// 		}
	// 	}
	// }

	// for(int i =0 ; i < k; i++)
	// {
	// 	for(int j =0 ; j < c; j++)
	// 	{
	// 		if(arr[i] == a3[j])
	// 		{
	// 			cout << a3[j] << " ";
	// 		}
	// 	}
	// }

	// Time Complexity -> O(largest array size)
	
	int i =0, j =0,l =0;
	while( (i < a) && (j < b) && (l < c))
	{
		if((a1[i] == a2[j]) && a2[j] == a3[l])
		{
			cout << a1[i] << " ";
			i++;
			j++;
			l++;
		}

		else if(a1[i] < a2[j])
			i++;

		else if(a2[j] < a3[l])
			j++;
		else
			l++;
	}
}

int main()
{
	int a1[] = {1,2,3,4,5,6};
	int a2[] = {1,4,6,9,54};
	int a3[] = {1, 6, 12, 122, 991};

	commonIn3Sorted(a1,a2,a3, 6, 5, 5);
}