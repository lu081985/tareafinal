#include <stdio.h>
#include <string.h>

int main(void){
	int op;
	int folios;
	int i=0;

	printf("¿Cuantos registros?");
	scanf("%d", &folios);
	
	puts("¿Que deseas capturar?");
	puts("1.-Profesores");
	puts("2.-Alumnos");

	
struct info{
	char Nombre[25];
	char Paterno[25];
	char Materno[25];
	char Direccion[25];
};

struct profesores{
	char numerodeprofesor[13];
	struct info datos_profesor;
}profesores;

struct alumnos{
	char NumeroCuenta[13];
	char Promedio[5];
	struct info datos_alumno; //datos
}alumnos;


	scanf("%i", &op);

	for(i=1;i<=folios;i++){
	if(op == 1){
		printf("Dame numero de profesor:");
		fflush(stdin);
		fgets(profesores.numerodeprofesor,13,stdin);
		printf("Dame nombre: ");
		fflush(stdin);
		fgets(profesores.datos_profesor.Nombre,15,stdin);
		printf("Dame apellido paterno: ");
		fflush(stdin);
		fgets(profesores.datos_profesor.Paterno, 25, stdin);
		printf("Dame apellido materno: ");
		fflush(stdin);
		fgets(profesores.datos_profesor.Materno, 25, stdin);
		printf("\n\tID: %s \n\tNombre:%s %s %s", profesores.numerodeprofesor, profesores.datos_profesor.Nombre, profesores.datos_profesor.Paterno, profesores.datos_profesor.Materno);   
	}else if(op == 2){
		printf("Dame nÃºmero empleado: ");
		fflush(stdin);
		fgets(alumnos.NumeroCuenta,13,stdin);
		printf("Dame nombre: ");
		fflush(stdin);
		fgets(alumnos.datos_alumno.Nombre, 25, stdin);
		printf("Dame apellido paterno: ");
		fflush(stdin);
		fgets(alumnos.datos_alumno.Paterno, 25, stdin);
		printf("Dame apellido materno: ");
		fflush(stdin);
		fgets(alumnos.datos_alumno.Materno, 25, stdin);
		printf("\n\tID: %s \n\tNombre:%s %s %s", alumnos.NumeroCuenta, alumnos.datos_alumno.Nombre, alumnos.datos_alumno.Paterno, alumnos.datos_alumno.Materno);   

	}else{
		printf("OPCIÓN INVÁLIDA, PULSE PARA SALIR");
	}
	}
	return 0;
}
