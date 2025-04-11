/**
 * 抄+修改，用vector数组写的归并排序算法
 */

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>

using namespace std;

void MergeArray(vector<int>& a,int first,int mid,int last)
{
	vector<int> Temp(last-first+1,0);
	int i = first,j = mid+1;
	int k = 0;
	while(i <= mid && j <= last)
	{
		if(a[i] <= a[j])
		{
			Temp[k++] = a[i++];
		}
		else
		{
			Temp[k++] = a[j++];
		}
	}
	while(i <= mid)
		Temp[k++] = a[i++];
	while(j <= last)
		Temp[k++] = a[j++];
	for(int i = 0;i < k;i++)
	{
		a[i+first] = Temp[i];
	}
}

void MergeSort(vector<int>& a,int first,int last)
{
	if(first < last)
	{
		int mid = (first+last)/2;
		MergeSort(a,first,mid);
		MergeSort(a,mid+1,last);
		MergeArray(a,first,mid,last);
	}
}

int main()
{
	freopen("number_vector.in","r",stdin);

	vector<int> value;

	for (int temp; cin >> temp;)
	{
		value.push_back(temp);
		if (cin.get() == '\n')
		{
			break;
		}
	}

	cout << "输入元素个数为：" << value.size()<<endl<<"前:";
	for (size_t i = 0; i < value.size(); i++)
	{
		cout <<setw(3)<<value[i];
	}cout<<endl<<"后:";

	MergeSort(value,0,value.size()-1);

	for(auto&i:value)
	{
		cout<<setw(3)<<i;
	}

	return 0;
}