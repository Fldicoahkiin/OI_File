#include <iostream>
#include <cstdio>
using namespace std;
#define file(x) freopen(#x".in","r",stdin),freopen(#x".out","w",stdout)
const int MAXN = 10000;

int A[MAXN];

void sift_down(int a[], int start, int end)
{
  int parent = start;
  int child = parent * 2 + 1;
  while (child <= end)
  {
    if (child + 1 <= end && a[child] < a[child + 1])
    {
    	child++;
    }
    if (a[parent] >= a[child])
    {
    	return;
    }
    else 
    {
      swap(a[parent], a[child]);
      parent = child;
      child = parent * 2 + 1;
    }
  }
}

void heap_sort(int arr[], int len)
{
  for (int i = (len - 1 - 1) / 2; i >= 0; i--)
  {
  	sift_down(arr, i, len - 1);
  }
  for (int i = len - 1; i > 0; i--)
  {
    swap(arr[0], arr[i]);
    sift_down(arr, 0, i - 1);
  }
}

int main()
{
	file(number);
	int N;cin >> N;
	for(int i = 1;i <= N; i++)
	{
		cin >> A[i];
	}
	
	heap_sort(A,N);
	
	for(int i = 1; i <=N; i++)
	{
		cout << A[i] << ' ';
	}
	return 0;
}