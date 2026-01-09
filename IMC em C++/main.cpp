#include <iostream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//declarando variavel: double para poder fazer a precisão para pegar tanto int quanto float, se não poderia usar float
	double peso, altura, imc;
	
	//mensagens de entrada das variaveis e calculo
	std::cout << "Digite seu peso em KG: ";
	std::cin >> peso;
	
	std::cout << "Digite sua altura em metros: ";
	std::cin >> altura;
	
	imc = peso / (altura * altura);
	
	//Exibindo o numero calculado com precisão e formatado com duas casas decimais
	std::cout << "Seu IMC e: " << std::fixed << std::setprecision(2) << imc << std::endl;
	
	//classificando IMC
	if(imc <= 18.5){
		std::cout << "Abaixo do peso" << std::endl;
		
	}else if(imc >= 18.6 && imc <= 24.9){
		std::cout << "Peso normal" << std::endl;
		
	}else if(imc >= 25 && imc <= 29.9){
		std::cout << "Sobrepeso" << std::endl;
		
	}else if(imc >= 30 && imc <= 34.9){
		std::cout << "Obesidade Grau 1" << std::endl;
		
	}else if(imc >= 35 && imc <= 39.9){
		std::cout << "Obesidade Grau 2" << std::endl;
		
	}else {
		std::cout << "Obesidade Grau 3" << std::endl;
	}
	
	return 0;
}
