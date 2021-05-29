#include "FormaGeometrica.hpp"

#ifndef Retangulo_hpp
#define Retangulo_hpp

class Retangulo : public FormaGeometrica
{
	public:

		void setBase(float b);
		void setAltura(float h);
		void calculaArea();

	private:

		float base;
		float altura;
};

#endif /* Retangulo_hpp */
