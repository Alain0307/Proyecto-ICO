#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	//Inicio las variables que voy a utilizar
	char nombre[20];
	char app[20];
	char apm[20];
	int dian, mesn, anon;
	char rfc[30];
	char sanon[5];

	//Le pregunto al usuario su nombre, apellido paterno, apellido materno y fecha de nacimiento

	printf("Nombre:");
	scanf_s("%s", nombre, 20);
	
	printf("Apellido paterno:");
	scanf_s("%s", app, 20);
	
	printf("Apellido materno:");
	scanf_s("%s", apm, 20);

	printf("Dia de nacimiento:");
	scanf_s("%i", &dian);
	
	printf("Mes de nacimiento:");
	scanf_s("%i", &mesn);
	
	printf("Anio de nacimiento:");
	scanf_s("%i", &anon);

	// los valores de la variable anon los paso a la variable sanon convirtiendolos en una cadena

	sprintf_s(sanon, "%4i", anon);

	//En la cadena rfc acomodo los valores de app, apm y nombre junto con el año de nacimiento

	rfc[0] = toupper(app[0]);
	rfc[1] = toupper(app[1]);
	rfc[2] = toupper(apm[0]);
	rfc[3] = toupper(nombre[0]);
	rfc[4] = sanon[2];
	rfc[5] = sanon[3];
	rfc[6] = '\0';
	
	//Imprimo el resultado de la variable rfc junto con el mes y día de nacimiento para obtener el rfc sin homoclave

	printf("%s%02i%02i", rfc, mesn, dian);


}