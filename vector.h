#pragma once
class vector
{
protected:
	double *mvector;

public:
	vector();
	vector(int );
	~vector();
	vector operator+(vector &);
	double& operator[](int);
	vector operator-(vector &);
	double operator*(vector &);
	double normav();
	double cosinus(vector &);
	void print();
};

