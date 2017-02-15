#include "Funcionario.h"
#include "PessoaFisica.h"
#include <iostream>
using namespace std;
Funcionario::Funcionario(string nome,string cpf,string mat,double sb,int qtd):PessoaFisica(nome,cpf){
	this->mat=mat;
	s_base=sb;
	this->qtd=qtd;
}

Funcionario::~Funcionario(){
	
}

string Funcionario::getMat(){
	return mat;
}

double Funcionario::getSBase(){
	return s_base;
}

int Funcionario::getQtd(){
	return qtd;
}

double Funcionario::calcularBruto(){
	return s_base*qtd;
}

void Funcionario::setMat(string mat){
	this->mat=mat;
}

void Funcionario::setSBase(double s_base){
	this->s_base=s_base;
}

void Funcionario::setQtd(int qtd){
	this->qtd=qtd;
}

void Funcionario::print(){
	PessoaFisica::print();
	cout<<"Matricula: "<<mat<<"\nSalario Base: "<<s_base<<"\nQtd. Horas trabalhadas"<<qtd<<endl;
}
