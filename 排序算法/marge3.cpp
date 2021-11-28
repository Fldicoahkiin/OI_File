#include <iostream>
#include <cstdio>

using namespace std;

void array_msort_merge(int array[], int temp[], int low, int high, int middle)
{
	int i = low;
	int j = middle + 1;
	int k = low;
 
	while (i <= middle && j <= high)
	{
		if (array[i] <= array[j])
		{
			temp[k++] = array[i++];
		}
		else
		{
			temp[k++] = array[j++];
		}
	}
 
	while (i <= middle)
	{
		temp[k++] = array[i++];
	}
 
	while (j <= high)
	{
		temp[k++] = array[j++];
	}
 
	for (int k = low; k <= high; k++)
	{
		array[k] = temp[k];
	}
}

void array_msort(int array[], int temp[], int low, int high)
{
	if (low < high)
	{
		int middle = (low + high) / 2;
		array_msort(array, temp, low, middle);
		array_msort(array, temp, middle + 1, high);
		array_msort_merge(array, temp, low, high, middle);
	}
}
 
void array_sort_by_merge(int array[], int size)
{
	int *temp = malloc(size * sizeof(int));
	assert(temp != NULL);
 
	array_msort(array, temp, 0, size - 1);
 
	free(temp);
}

int main()
{
	freopen("number.in","r",stdin);
	
	//¶ÁÈë	
	int n,value[MAXN];
	cin >>n;
	for(int i=0;i<n;i++) 
	{
		cin >>value[i];
	}
	
	
	
}
