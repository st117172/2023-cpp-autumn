#include<iostream>
#include<cstdlib> // для srand(...)
#include<ctime> // для time() в srand()

int* initRandomArray(int len, int mn = 0, int mx = 9); //создать массив и заполнить случ.числами
void printArray(int* a, int len); // вывести массив
void mixArray(int* a, int n); // перемешать массив
void swap(int& a, int& b); // поменять местами элементы
void bubbleSort(int* a, int len); // пузырьком
void insertionSort(int* a, int len); // вставками
void selectionSort(int* a, int len); // выбором
void countSort(int* a, int len); // подсчётом 
void gnomeSort(int* a, int len); // гномья
bool isSorted(int* a, int len); // проверка на отсортированность для monkeysort (bogosort)
void monkeySort(int* a, int len); // обезьянья (bogo/болотная)


int main(int argc, char* argv[])
{
	srand(time(0));
	int n = 10;
	int* a = initRandomArray(n);
	printArray(a, n);
	std::cout << std::endl;
	
	{
		std::cout << "bubble sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		bubbleSort(a, n);
		printArray(a, n);
		std::cout << std::endl;
	}
	{
		std::cout << "insertion sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		insertionSort(a, n);
		printArray(a, n);
		std::cout << std::endl;
	}
	{
		std::cout << "selection sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		selectionSort(a, n);
		printArray(a, n);
		std::cout << std::endl;
	}
	{
		std::cout << "count sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		countSort(a, n);
		printArray(a, n);
		std::cout << std::endl;
	}
	{
		std::cout << "gnome sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		gnomeSort(a, n);
		printArray(a, n);
		std::cout << std::endl;
	}
	{
		std::cout << "monkey sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		monkeySort(a, n);
		printArray(a, n);
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}

int* initRandomArray(int len, int mn, int mx)
{
	int* res = new int[len] { 0 };
	for (int i = 0; i < len; ++i)
	{
		res[i] = rand() % (mx - mn + 1) + mn;
	}
	return res;
}

void printArray(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}

void mixArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		swap(a[i], a[rand() % n]);
	}
}

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void bubbleSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

void insertionSort(int* a, int len)
{
	for (int i = 1; i < len; ++i)
	{
		int t = i;
		while (t > 0 && a[t] < a[t - 1])
		{
			swap(a[t], a[t - 1]);
			--t;
		}
	}
}

void selectionSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		int maxInd = i;
		for (int j = i + 1; j < len; ++j)
		{
			maxInd = (a[maxInd] <= a[j] ? maxInd : j);
		}
		swap(a[i], a[maxInd]);
	}
}

void countSort(int* a, int len)
{
	int* c = new int[len] { 0 };
	for (int i = 0; i < len; i++)
		c[a[i]]++;

	int k = 0;
	for (int i = 0; i < len; i++)
		while (c[i] != 0)
		{
			a[k] = i;
			k++;
			c[i]--;
		};
}

void gnomeSort(int* a, int len)
{
	int i = 0;
	while (i < len)
	{
		if (i == 0 || a[i - 1] <= a[i])
		{
			++i;
		}
		else
		{
			swap(a[i], a[i-1]);
			--i;
		}
	}
}

bool isSorted(int* a, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		if (a[i] > a[i + 1])
		{
			return false;
		}
	}
	return true;
}

void monkeySort(int* a, int len)
{
	while (!isSorted(a, len))
	{
		mixArray(a, len);
	}
}