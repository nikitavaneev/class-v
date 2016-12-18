// class_vector.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include<conio.h>
#include"vector.h"
#include <stdlib.h>
#include < ctime >
using namespace std;
int main()
{
	vector a;
	cout << "vector a \n";
	a.print();
	vector b(3);
	cout << "\nvector b\n";
	b.print();
	vector summa = a + b;
	cout << "\nsumma= ";
	summa.print();
	vector raznost=a-b;
	cout << "\nraznost= ";
	raznost.print();
	double sk = a*b;
	cout << "\nskol proizv= " << sk << endl;
	double norma=a.normav();
	cout << "\nnorma vectora a= " << norma << endl;
	double cos=a.cosinus(b);
	cout << "\ncosinus= " << cos << endl;
	_getch();
    return 0;
}

