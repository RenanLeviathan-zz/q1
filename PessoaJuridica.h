#ifndef JURIDICA_H
#define JURIDICA_H
#include "Pessoa.h"
#include <iostream>
using namespace std;
class PessoaJuridica:public Pessoa{
	private:
		string cnpj;
		string n_fantasia;
		string r_social;
	public:
		PessoaJuridica(string,string,string);
		virtual ~PessoaJuridica();
		string getCNPJ(void);
		string getNFantasia(void);
		string getRSocial(void);
		void setCNPJ(string);
		void setNFantasia(string);
		void setRSocial(string);
		void print(void);
};
#endif
