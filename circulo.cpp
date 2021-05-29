#include "Circulo.hpp"

void Circulo::setRaio(float r)
{
	raio = r;
}

void Circulo::calculaArea()
{
	float a = 3.14 * (raio * raio);
	cout << "\n\tA area do circulo eh: " << a << endl;
}
