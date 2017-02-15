#include "PessoaJuridica.h"
#include "Pessoa.h"
#include <iostream>
using namespace std;
PessoaJuridica::PessoaJuridica(string cnpj, string r_social, string n_fant):Pessoa(r_social){
	this->cnpj=cnpj;
	this->r_social=r_social;
	n_fantasia=n_fant;
}

PessoaJuridica::~PessoaJuridica(){
	
}

string PessoaJuridica::getCNPJ(){
	return cnpj;
}

string PessoaJuridica::getNFantasia(){
	return n_fantasia;
}

string PessoaJuridica::getRSocial(){
	return r_social;
}

void PessoaJuridica::setCNPJ(string cnpj){
	this->cnpj=cnpj;
}

void PessoaJuridica::setNFantasia(string n_fant){
	n_fantasia=n_fant;
}

void PessoaJuridica::setRSocial(string r_social){
	this->r_social=r_social;
}

void PessoaJuridica::print(){
	cout<<"Razao Social: "<<r_social<<"\nNome Fantasia: "<<n_fantasia<<"\nCNPJ: "<<cnpj<<endl;
}
