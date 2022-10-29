#include <iostream>

using namespace std;

struct aluno {
		int ra, falta;
		float P, E;
	} alunos [10];

void organiza () {

	int ra = 0, falta, P, E;
	
	for (int j=0; j<10; j++)
	
		for (int i=0; i<10; i++)
		
			if (alunos[i].ra > alunos[j].ra){
				
				ra = alunos[j].ra;
				falta = alunos[j].falta;
				P = alunos[j].P;
				E = alunos[j].E;
				
				alunos[j].ra = alunos[i].ra;
				alunos[j].falta = alunos[i].falta;
				alunos[j].P = alunos[i].P;
				alunos[j].E = alunos[i].E;
				
				alunos[i].ra = ra;
				alunos[i].falta = falta;
				alunos[i].P = P;
				alunos[i].E = E;		
			}
	
}



int main () {
	
	for (int i=0; i<10; i++) {
		
		cout << "ALUNO " << i + 1 << endl;
		cout << "Digite o RA: ";
		cin >> alunos[i].ra;
		cout << "Digite o numero de faltas: ";
		cin >> alunos[i].falta;
		cout << "Nota parcial: ";
		cin >> alunos[i].P;
		cout << "Nota do exame: ";
		cin >> alunos[i].E;
		cout << endl;
		
	}
	
	cout << " RA " << "\tFaltas " << "\tParcial" << "\tExame" << endl;
	
	for (int i=0; i<10; i++) {
		cout << alunos[i].ra << "\t" << alunos[i].falta << "\t" << alunos[i].P << "\t" << alunos[i].E << endl;
	}
	
	organiza ();
	
	cout << "\n\n RA " << "\tFaltas " << "\tParcial" << "\tExame" << endl;
	
	for (int i=0; i<10; i++) {
		cout << alunos[i].ra << "\t" << alunos[i].falta << "\t" << alunos[i].P << "\t" << alunos[i].E << endl;
	}	
	
	int ra;
	
	cout << "Digite o RA do aluno a ser buscado: ";
	cin >> ra;
	
	for (int i=0; i<10; i++){
		if (ra == alunos[i].ra)
			ra = i+1;	
	}
	
	cout << "O aluno esta na posição " << ra;
	
	cout << endl << endl;
	
	system ("pause");
	
	return 0;
	
}




