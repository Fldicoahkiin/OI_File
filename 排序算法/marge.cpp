/**
 * 抄的，例1
 */

#include<iostream>
#include<vector>

using namespace std;

void MergeArray(vector<int>& v,int first,int mid,int last)
{
	vector<int> tmp(last-first+1,0);
	int i = first,j = mid+1;
	int k = 0;
	while(i <= mid && j <= last)
	{
		if(v[i] <= v[j])	tmp[k++] = v[i++];
		else	tmp[k++] = v[j++];
	}
	while(i <= mid)
		tmp[k++] = v[i++];
	while(j <= last)
		tmp[k++] = v[j++];
	for(int i = 0;i < k;i++)
	{
		v[i+first] = tmp[i];
	}
}

void MergeSort(vector<int>& v,int first,int last)
{
	if(first < last)
	{
		int mid = (first+last)/2;
		MergeSort(v,first,mid);
		MergeSort(v,mid+1,last);
		MergeArray(v,first,mid,last);
	}
}

int main()
{
	vector<int> v = {48,6,57,88,60,42,83,73,88,85};
	MergeSort(v,0,v.size()-1);
	for(auto&i:v)
	{
		cout<<i<<" ";
	}
	return 0;
}
