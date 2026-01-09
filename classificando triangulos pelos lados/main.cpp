#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int lado1, lado2, lado3;
	
	cout << "Digite o primeiro lado do triangulo: ";
	cin >> lado1;
	
	cout << "Digite o segundo lado do triangulo: ";
	cin >> lado2;
	
	cout << "Digite o terceiro lado do triangulo: ";
	cin >> lado3;
	
	if( (lado1==lado2) && (lado2==lado3) ){
		cout << "Este e um triangulo equilatero\n";
	}else if( (lado1==lado2) && (lado2!=lado3) || (lado1!=lado2) && (lado2==lado3) ){
		cout << "Este e um triangulo isoceles\n";
	}else{
		cout << "Este e um triangulo Escaleno\n";
	}
	
	return 0;
}
