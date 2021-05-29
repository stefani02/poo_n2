#include "FormaGeometrica.hpp"

#ifndef Circulo_hpp
#define Circulo_hpp

class Circulo : public FormaGeometrica
{
	public:

		void calculaArea();
		void setRaio(float r);

	private:
		float raio;
};

#endif /* Circulo_hpp */
