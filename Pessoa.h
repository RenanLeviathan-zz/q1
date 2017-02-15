#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;
class Pessoa{
	protected:
		string nome;
	public:
		Pessoa(string);
		virtual ~Pessoa();
};
#endif
