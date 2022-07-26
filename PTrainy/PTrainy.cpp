#include <iostream>

using namespace std;

double* allMem(double* pArr, const int size);
double fillArr(double* pArr, const int size);
int fillArr(int* pArr, const int size);
double outArr(double* pArr, const int size);
int outArr(int* pArr, const int size);
double* freeMem(double* pArr, const int size);
void p_Func2(int* pAr, const int size);
void fillDoubleArr(int** pdAr, const int length, const int width);
void outDoubleArr(int** pdAr, const int length, const int width);

int main() {
	setlocale(LC_ALL, "ru");
	int length, width;
	cout << "Введите размер: \n";
	cin >> width;
	cin >> length;
	int* pAr = new int[length];
	int** pdArr = new int *[length];
	for (int i = 0; i < length; i++) { //выделение памяти двумерному массиву
		pdArr[i] = new int[width];
	}
	fillDoubleArr(pdArr, length, width);
	outDoubleArr(pdArr, length, width);
	delete[] pAr;
	for (int i = 0; i < length; i++) {
		delete[] pdArr[i];
	}
	delete[] pdArr;
}



double* allMem(double* pArr, const int size) { //выделение памяти на одномерный массив
	pArr = new double[size];
	return pArr;
}

double fillArr(double* pArr, const int size) {
	for (int i = 0; i < size; i++) {
		pArr[i] = rand() % 10 * 0.2;
	}
	return 0;
}   // заполнение одномерного массива типа дабл

int fillArr(int* pArr, const int size) {
	for (int i = 0; i < size; i++) {
		pArr[i] = rand() % 10;
	}
	return 0;
}  // заполнение одномерного массива типа инт

double outArr(double* pArr, const int size) {
	cout << "\n";
	for (int i = 0; i < size; i++) {
		cout<<pArr[i]<<"\n";
	}
	return 0;
}// вывод массива типа дабл

int outArr(int* pArr, const int size) {
	cout << "\n";
	for (int i = 0; i < size; i++) {
		cout << pArr[i] << " ";
	}
	return 0;
} // вывод массива типа инт

double* freeMem(double* pArr, const int size) {
	delete[] pArr;
	return 0;
} //освобождение памяти

void p_Func2(int* pAr, const int size) {
	int swap;
	for (int i = 0; i < size - 1; i++) {
		if (i == 0 || !(i % 2)) {
			swap = pAr[i+1];
			pAr[i+1] = pAr[i];
			pAr[i] = swap;
		}
	}
} //поменять местами числа в массиве

void fillDoubleArr(int** pdAr, const int length, const int width) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			pdAr[i][j] = (rand() % 41) + 10;
		}
	}
} //заполнить двумерный массив от 10 до 50

void outDoubleArr(int** pdAr, const int length, const int width) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			cout<<pdAr[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;
} //вывести двумерный массив