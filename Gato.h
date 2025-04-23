#ifndef __GATO_H__
#define __GATO_H__
#include <iostream>
#include <cstdlib>
using namespace std;

class Gato{
	private:
		int vidas;
		string color;
	public:
		void maullar();
		Gato();
		int getVidas();
		string getColor();
};
#endif
