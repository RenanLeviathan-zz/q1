#include "Empresa.h"
#include "PessoaJuridica.h"
#include <iostream>
#include <vector>
using namespace std;
Empresa::Empresa(string r_s,string n_f, string cnpj, vector<Funcionario> fn, vector<Cliente> cli):PessoaJuridica(cnpj,r_s,n_f){
	func=fn;
	this->cli=cli;
}

Empresa::~Empresa(){
	
}

void Empresa::addFuncionario(Funcionario f){
	func.push_back(f);
}

void Empresa::addCliente(Cliente c){
	cli.push_back(c);
}

void Empresa::showFuncionarios(){
	int i;
	for(i=0;i<func.size();i++){
		cout<<"Nome: "<<func[i].getNome()<<"\nMatricula: "<<func[i].getMat()<<"\nSalario Base: "<<func[i].getSBase()<<"---------------------------"<<endl;
	}
}

void Empresa::showClientes(){
	int i;
	for(i=0;i<cli.size();i++){
		cout<<"Nome: "<<cli[i].getNome()<<"\nTelefone: "<<cli[i].getTel()<<"\nEndereco: "<<cli[i].getEnd()<<"---------------------------"<<endl;
	}
}

void Empresa::folhaPagamento(){
	int i;
	for(i=0;i<func.size();i++){
		double sal = func[i].calcularBruto();
		cout<<"Nome: "<<func[i].getNome()<<"\nSalario: "<<sal<<endl;
	}
}
