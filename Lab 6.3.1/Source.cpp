#include <iostream>  

#include <iomanip>  

#include <time.h>  
using namespace std;

void random(int* mas, const int size, const int min, const int max, const int i) {
	mas[i] = min + rand() % (max - min + 1);
	if (i < size - 1)
		random(mas, size, min, max, i + 1);
}

void wivid(int* mas, const int size, const int i) {
	cout << setw(4) << mas[i];
	if (i < size - 1)
		wivid(mas, size, i + 1);
	else
		cout << setw(4) << endl;
}

int suma(int* mas, const int size, int i, int sum) {
	if (i < size) {
		if (mas[i] > 0)
			sum += mas[i];
		suma(mas, size, i + 1, sum);
	}
	else
		return sum;
}

template <typename Q>
Q randomtemp(Q* mas, Q size, Q min, Q max, Q i) {
	mas[i] = min + rand() % (max - min + 1);
	if (i < size - 1)
		random(mas, size, min, max, i + 1);
	return 0;
}


template <typename W>
W wividtemp(W* mas, W size, W i) {
	cout << setw(4) << mas[i];
	if (i < size - 1)
		wivid(mas, size, i + 1);
	else
		cout << setw(4) << endl;
	return 0;
}

template <typename E>
E sumatemp(E* mas, E size, E i, E sum) {
	if (i < size) {
		if (mas[i] > 0)
			sum += mas[i];
		suma(mas, size, i + 1, sum);
	}
	else
		return sum;
}

int main() {

	srand((unsigned)time(NULL));
	int min = -100;
	int max = 100;
	const int n = 25;
	int a[n];

	random(a, n, min, max, 0);
	wivid(a, n, 0);
	cout << endl;
	int sum = suma(a, n, 0, 0);
	cout << "Sum: " << sum << endl;
	cout << endl;

	randomtemp(a, n, min, max, 0);
	wividtemp(a, n, 0);
	cout << endl;
	int sum2 = sumatemp(a, n, 0, 0);
	cout << "Sum: " << sum2 << endl;
	cout << endl;

	return 0;
}
