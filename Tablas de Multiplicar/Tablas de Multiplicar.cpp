// Tablas de Multiplicar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

	int x = 0, m;
	cout << "Escoger un numero entero para visualizar su tabla de multiplicacion del 1 al 10\n" << endl;
	cin >> x;
	cout << "La tabla del " << x << " es:\n" << endl;
	for (int i = 1; i <= 10; i++)
	{
		m = x * i;
		cout << x << "*" << i << "=" << m << endl;
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}

