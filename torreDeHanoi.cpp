//Torres de hanoi 

/*Reglas de la torre de hanoi:
	Solo se puede mover un disco cada vez y para mover otro los dem�s tienen que estar en postes.
	Un disco de mayor tama�o no puede estar sobre uno m�s peque�o que �l mismo.
	Solo se puede desplazar el disco que se encuentre arriba en cada poste. 
*/

#include<bits/stdc++.h>

using namespace std;

void torreDeHanoi(int nDiscos, char origen, char destino, char aux){
	if (nDiscos == 0){
		return;
	}
	
	torreDeHanoi(nDiscos -1 , origen, aux, destino );
	cout<<"Mueve el disco " << nDiscos <<" de la columna " << origen
		<<" Hacia: " << destino <<endl;
		
	torreDeHanoi(nDiscos-1, aux, destino, origen);
}

int main(){
	int n = 5;
	torreDeHanoi(n, 'A', 'C', 'B');
	return 0;
}
