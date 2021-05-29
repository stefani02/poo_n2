#include "Triangulo.hpp"

void Triangulo::setAltura(float h)
{
	altura = h;
}

void Triangulo::setBase(float b)
{
	base = b;
}

void Triangulo::calculaArea()
{
	float a = ((base * altura)/2);
	cout << "\n\tA area do triangulo eh: " << a << endl;
}
