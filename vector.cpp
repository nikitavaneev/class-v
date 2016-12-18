
#include "vector.h"
#include <stdlib.h>
#include < ctime >
#include <Math.h>
#include <iostream>
using namespace std;
vector::vector()
{
	srand(time(NULL));
	 int dl = 3;
	 mvector = new double[dl];
	for (int i = 0; i < dl; i++)
		mvector[i] = rand() %10;
}
vector::vector(int dl)
{
	dl = 3;
	srand(1);
	mvector = new double[dl];
	for (int i = 0; i < dl; i++)
		mvector[i] = rand() % 10;
}


vector vector::operator+(vector &b) {
	vector res;
	for (int i = 0; i < 3; i++) 
		res[i] = mvector[i] + b[i];
	return res;
}

double & vector::operator[](int i)
{
	if ((i < 3) && (i >= 0))
		return mvector[i];
}

vector vector::operator-(vector &b)
{
	vector res;
	for (int i = 0; i < 3; i++)
		res[i] = mvector[i] - b[i];
	return res;
}

double vector::operator*(vector &b)
{
	double res=0;
	for (int i = 0; i < 3; i++)
		res += mvector[i] * b[i];
	return res;
}

double vector::normav()
{
	double res, sum = 0;;
	for (int i = 0; i < 3; i++) 
		sum += mvector[i] * mvector[i];
	res = sqrt(sum);
	return res;
}

double vector::cosinus(vector &b)
{
	double res;
	
	double s(operator*(b));
	if ((normav() == 0) || (b.normav() == 0)) {
		cout << "nulevoy vector";
		return 0;
	}
	else
		res = s / (normav()*b.normav());
	return res;
}

void vector::print()
{
	for (int i = 0; i < 3; i++)
		cout << mvector[i] << ' ';
}



vector::~vector()
{
}
