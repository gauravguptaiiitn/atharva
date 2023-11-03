#include <bits/stdc++.h>
using namespace std;
  
int getInvCount(int arr[], int num)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
  
    return inv_count;
}
  int k;

int main()
{
    int t,i,n;


	cin>>t;
	for(i=0;i<t;i++)
	{
	cin >> num
    int arr[num];
    int n = sizeof(arr) / sizeof(arr[0]);
    k=getInvCount(arr, n);
   
	
		
	}
	
return 0;
}
