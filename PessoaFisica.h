#ifndef FISICA_H
#define FISICA_H
#include "Pessoa.h"
#include <iostream>
using namespace std;
class PessoaFisica:public Pessoa{
	private:
		string cpf;
	public:
		PessoaFisica(string,string);
		virtual ~PessoaFisica();
		string getCPF(void);
		void setCPF(string);
		string getNome(void);
		void setNome(string);
		void print(void);
};
#endif
