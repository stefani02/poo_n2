#include "Retangulo.hpp"

void Retangulo::setAltura(float h)
{
	altura = h;
}

void Retangulo::setBase(float b)
{
	base = b;
}

void Retangulo::calculaArea()
{
	float a = (base * altura);
	cout << "\n\tA area do retangulo eh: " << a << endl;
}
