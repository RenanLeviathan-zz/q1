#include "Cliente.h"
#include "PessoaFisica.h"
#include <iostream>
using namespace std;
Cliente::Cliente(string nome, string cpf, string tel, string end):PessoaFisica(nome,cpf){
	this->tel=tel;
	this->end=end;
}

Cliente::~Cliente(){
	
}

string Cliente::getTel(){
	return tel;
}

string Cliente::getEnd(){
	return end;
}

void Cliente::setTel(string tel){
	this->tel=tel;
}

void Cliente::setEnd(string end){
	this->end=end;
}

void Cliente::print(){
	PessoaFisica::print();
	cout<<"Telefone: "<<tel<<"\nEndereco: "<<end<<endl;
}
