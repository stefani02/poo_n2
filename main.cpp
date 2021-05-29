#include "Circulo.hpp"
#include "Triangulo.hpp"
#include "Retangulo.hpp"

int main()
{
	
	Circulo a;
	float raio;
	
	Triangulo b;
	float base1;
	float altura1;
	
	Retangulo c;
	float base2;
	float altura2;
	
	cout << "\n |*|  Inicio da Execucao  |*| \n" << endl;
	
	cout << "\n Circulo 1: " << endl;
	cout << "\n\tDigite o valor do raio do circulo 1: ";
	cin >> raio;
	
	a.setRaio(raio);
	a.calculaArea();
	
	cout << "\n Triangulo 1: " << endl;
	cout << "\n\tDigite o valor da altura do triangulo 1: ";
	cin >> altura1;
	
	cout << "\n\tDigite o valor da base do triangulo 1: ";
	cin >> base1;
	
	b.setAltura(altura1);
	b.setBase(base1);
	b.calculaArea();
	
	cout << "\n Retangulo 1: " << endl;
	cout << "\n\tDigite o valor da altura do retangulo 1: ";
	cin >> altura2;
	
	cout << "\n\tDigite o valor da base do retangulo 1: ";
	cin >> base2;
	
	c.setAltura(altura2);
	c.setBase(base2);
	c.calculaArea();
	
	cout << "\n |*|  Fim da Execucao  |*| \n" << endl;
	
	return 0;
	
}
