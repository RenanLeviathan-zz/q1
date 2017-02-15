#ifndef EMPRESA_H
#define EMPRESA_H
#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"
#include <iostream>
#include <vector>
using namespace std;
class Empresa:public PessoaJuridica{
	private:
		vector<Funcionario> func;
		vector<Cliente> cli;
	public:
		Empresa(string,string,string,vector<Funcionario>,vector<Cliente>);
		virtual ~Empresa();
		void addFuncionario(Funcionario);
		void addCliente(Cliente);
		void showFuncionarios(void);
		void showClientes(void);
		void folhaPagamento(void);	
};
#endif
