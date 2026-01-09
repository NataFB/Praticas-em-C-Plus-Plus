#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int angulo1, angulo2, angulo3;
	
	cout << "Digite o primeiro angulo do triangulo: ";
	cin >> angulo1;
	
	cout << "Digite o segundo angulo do triangulo: ";
	cin >> angulo2;
	
	cout << "Digite o terceiro angulo do triangulo: ";
	cin >> angulo3;
	
	if((angulo1 == 90) || (angulo2 == 90) || (angulo3 == 90)){
		cout << "Este triangulo e um retangulo";
	}else if((angulo1 > 90) || (angulo2 > 90) || (angulo3 > 90)){
		cout << "Este triangulo é um obtusangulo";
	}else{
		cout << "Este triangulo é um acutangulo";
	}
	
	
	return 0;
}
