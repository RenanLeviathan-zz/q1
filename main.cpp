#include <iostream>
#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"
#include "Empresa.h"
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	PessoaFisica pf("Ronaldo","00011122233");
	PessoaJuridica pj("00000000001","Belem Alimentos SA","Belemzao");
	Funcionario f("Antonio","123","333",700.00,5);
	Funcionario g("Alda","122","345",600.30,8);
	Cliente c("Antonia","343","91980805143","R. dos Mundurucus, 70, Jurunas");
	Cliente d("Bernardo","222","9180656565","R. dos Caripunas, 60, Guamá");
	vector<Funcionario> fns;
	vector<Cliente> cli;
	Empresa em("Belem Alimentos SA","Belemzao","00000000001",fns,cli);
	em.addFuncionario(f);
	em.addFuncionario(g);
	em.addCliente(c);
	em.addCliente(d);
	pf.print();
	pj.print();
	f.print();
	c.print();
	em.showFuncionarios();
	em.showClientes();
	cout<<"Folha de pagamento:"<<endl;
	em.folhaPagamento();
	return 0;
}
