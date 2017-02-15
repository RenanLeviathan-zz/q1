#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "PessoaFisica.h"
#include <iostream>
using namespace std;
class Funcionario:public PessoaFisica{
	private:
		string mat;
		double s_base;
		int qtd;
	public:
		Funcionario(string,string,string,double,int);
		virtual ~Funcionario();
		string getMat(void);
		double getSBase(void);
		int getQtd(void);
		void setMat(string);
		void setSBase(double);
		void setQtd(int);
		double calcularBruto(void);
		void print(void);
};
#endif
