#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include "PessoaFisica.h"
using namespace std;
class Cliente:public PessoaFisica{
	private:
		string tel;
		string end;
	public:
		Cliente(string,string,string,string);
		virtual ~Cliente();
		string getTel(void);
		string getEnd(void);
		void setTel(string);
		void setEnd(string);
		void print(void);
};
#endif
