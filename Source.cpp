#include<iostream>
using namespace std;
int swap(int *ptr, int n);
int main() {
	int n, swap_num;
	cout << "Enter the size: " << endl;
	cin >> n;
	int *mass = new int [n];
	int *ptr = &(*mass);
	cout << "Enter your elements under this line:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Element " << i+1 << ":";
		cin >> *(ptr + i);
		
	}
	swap_num=swap(&(*ptr), n);
	//bool stop = false;
	//while (!stop) {
	//	int tmp;
	//	stop = true;
	//	for (int i = 0; i < n-1; i++) {
	//		if (*(ptr+i) > *(ptr+i + 1)) {
	//			tmp = *(ptr + i+1);
	//			*(ptr + i+1) = *(ptr+i);
	//			*(ptr+i) = tmp;
	//			stop = false;
	//		}
	//	}

	//}
	cout << "Here is your sorted array: " << endl;
	for (int i = 0; i < n; i++) {
		cout << mass[i] << ",";
	}
	cout << endl;
	cout << "Quantity of swaps: " << swap_num <<"."<< endl;
	cout <<endl<< *(ptr-n);
	delete[] mass;
	system("pause");
	
	return 0;
}

int swap(int *ptr, int n)
{
	int counter = 0;
	bool stop = false;
	while (!stop) {
		int tmp;
		stop = true;
		for (int i = 0; i < n - 1; i++) {
			if (*(ptr + i) > *(ptr + i + 1)) {
				tmp = *(ptr + i + 1);
				*(ptr + i + 1) = *(ptr + i);
				*(ptr + i) = tmp;
				stop = false;
				counter++;
			}
		}

	}
	return counter;
}
