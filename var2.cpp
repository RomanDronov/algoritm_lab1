#include<iostream>
using namespace std;
int SelectionSort(int *ptr,int n);
int main()
    {
	int count;
	int n;
	cout << "Enter size" << endl;
	cin >> n;
	int *mass = new int[n];
	cout << "Enter elements: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "mass [" << i << "]" << endl;
		cin >> mass[i];
	}
	count = SelectionSort(*(&mass),n);
	cout << "Number of swaps: " << count << endl;
	for (int i = 0; i < n; i++) {
		cout << mass[i] << " ";
	}
	system("pause");
	return 0;
}
int SelectionSort(int *ptr,int n) {
	int i, j, min, temp;
	int count = 0;
	for (i = 0; i<(n - 1); i++) {
		min = i;
			for (j = i + 1; j<n; j++) {
				if (*(ptr + j) < *(ptr + min)) {
					min = j;
					cout << "min " << min << endl;
					cout << "min element" << *(ptr+j) << endl;
					count++;
				}
			
			}
		temp =*(ptr+i);
		*(ptr+i) = *(ptr+min);
		*(ptr+min) = temp;
	}
	return count;
}