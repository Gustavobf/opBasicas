#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	float soma, sub, mult, divi, numx, numy;

	cout << "Informe o primeiro valor: " << endl;
	cin >> numx;
	cout << "Informe o segundo valor: " << endl;
	cin >> numy;

	soma = numx + numy;
	sub = numx - numy;
	mult = numx * numy;
	divi = numx / numy;

	cout.precision(2);
	cout << "Soma: " << soma << endl;
	cout << "Subtracao: " << sub << endl;
	cout << "Multiplicacao: " << mult << endl;
	cout << fixed << "Divisao: " << divi << endl;
	system("pause");
	return 0;
}