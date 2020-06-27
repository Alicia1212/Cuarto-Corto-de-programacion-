#include <iostream>
using namespace std;
void IngresoNotas(float Notas[]);
float CalculoNotas(float Notas[],float Ponderacion,int Tamano);
int main(){
	int Tamano;
	float Notas[5];
	float Ponderacion=0;
	cout<<"Ingrese cantidad de alumnos:";
	cin>>Tamano;
	float Estudiantes[Tamano];
	for(int i=0;i<Tamano;i++){
		IngresoNotas(Notas);
		Estudiantes[i] = CalculoNotas(Notas,Ponderacion,Tamano);
	}
	for(int x=0;x<Tamano;x++){
		if(Estudiantes[x]>=7.0){
			cout << "El estudiante esta aprobado" << endl;
		}else{
			cout << "El estudiante esta reprobado" << endl;
		}
	}


}

void IngresoNotas(float Notas[]){
	float Entrada;
	for(int i=0;i<5;i++){
		cout<<"Ingrese la nota" << i+1 << endl;
		cin >>Entrada;
        Notas[i] = Entrada;
	}
}

float CalculoNotas(float Notas[], float Ponderacion,int Tamano){
	float Calculo;
	for(int i=0;i<5;i++){
		Calculo=Notas[i]*0.20;
		Ponderacion += Calculo;
	}
	return Ponderacion;
}