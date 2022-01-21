#include <iostream>
using namespace std;

long  dwusilnia( int n)
{
	long  ds = 1; //zmienna przechowująca kolejne mnożenia
	for (; n > 1; n -= 2)
		ds = ds* n;
	return ds;
}

int main()
{
	int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	cout << "Dwusilnia z liczby " << n << " wynosi " << dwusilnia(n) << endl;

	return 0;
}