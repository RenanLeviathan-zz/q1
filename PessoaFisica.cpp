#include "PessoaFisica.h"
#include "Pessoa.h"
#include <iostream>
using namespace std;
PessoaFisica::PessoaFisica(string nome,string cpf):Pessoa(nome){
	this->nome=nome;
	this->cpf=cpf;
}

PessoaFisica::~PessoaFisica(){
	
}

string PessoaFisica::getCPF(){
	return cpf;
}

string PessoaFisica::getNome(){
	return nome;
}

void PessoaFisica::setNome(string nome){
	this->nome=nome;
}

void PessoaFisica::setCPF(string cpf){
	this->cpf=cpf;
}

void PessoaFisica::print(){
	cout<<"Nome: "<<nome<<"\nCPF: "<<cpf<<endl;
}


