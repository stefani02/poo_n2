#include "FormaGeometrica.hpp"

#ifndef Triangulo_hpp
#define Triangulo_hpp

class Triangulo : public FormaGeometrica
{
	public:
		
		void calculaArea();
		void setBase(float b);
		void setAltura(float h);
	
	private:
		
		float base;
		float altura;
		
};

#endif /* Triangulo_hpp */
© 2021 GitHub, Inc.
