#include "Gato.h"
string colores[3] = {"Negro", "Blanco", "Gris"};
Gato::Gato(){
	vidas = 7;
	color = colores[rand()%3];
}
void Gato::maullar(){
	cout << "Miau :3" << endl;
}
string Gato::getColor(){
	return color;
}
int Gato::getVidas(){
	return vidas;
}
