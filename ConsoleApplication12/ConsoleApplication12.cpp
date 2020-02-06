// ConsoleApplication12.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define N 10

using namespace std;

int delete_elem(int arr[], int new_arr[])
{
	int i = 0, new_arr_len = 0;
	int flag[N] = { 0 };
	for (i = 0; i < 10; i++)
	{
		if (flag[arr[i]] == 0)
		{
			new_arr[new_arr_len++] = arr[i];
			flag[arr[i]] = 1;

		}
	}
	return new_arr_len;
}

void main()
{
	int i, arr[N];
	int new_arr[N];
	int arr_len = 10;
	int new_arr_len;
	cout << "Input 10 numbers: \n";
	for (i = 0; i < arr_len; i++)
	{
		cin >> arr[i];
	}
	new_arr_len = delete_elem(arr, new_arr);
	cout << "\n" << "New arrar is : \n";
	for (i = 0; i < new_arr_len; i++)
	{
		cout << new_arr[i]<<" ";
	}
	cout << "\n";

}