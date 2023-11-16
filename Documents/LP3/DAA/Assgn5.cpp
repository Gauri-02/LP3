/******************************************************************************

							  Online C++ Compiler.
			   Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return;
}
int randomI(int low, int high)
{
	return low + rand() % (high - low + 1);
}

void QuickSort(vector<int> &arr, int low, int high)
{
	if (low < high)
	{
		int rI = randomI(low, high);
		int rV = arr[rI];

		swap(arr[high], arr[rI]);

		int i = low - 1;

		for (int j = low; j < high; j++)
		{
			if (arr[j] < rV)
			{
				i++;
				swap(arr[i], arr[j]);
			}
		}

		swap(arr[i + 1], arr[high]);

		QuickSort(arr, low, i);
		QuickSort(arr, i + 1, high);
	}
}

int main()
{
	int n;
	cout << "Enter size of vector" << endl;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	QuickSort(arr, 0, n - 1);
	cout << "Sorted array !" << endl;
	printArray(arr, n);

	return 0;
}
