#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char nombre[20];
	char app[20];
	char apm[20];
	int dian, mesn, anon;
	char rfc[30];
	char sanon[5];

	printf("Nombre:");
	scanf_s("%s", nombre, 20);
	printf("Apellido paterno:");
	scanf_s("%s", app, 20);
	printf("Apellido materno:");
	scanf_s("%s", apm, 20);

	printf("Día de nacimiento:");
	scanf_s("%i", &dian);
	printf("Mes de nacimiento:");
	scanf_s("%i", &mesn);
	printf("Año de nacimiento:");
	scanf_s("%i", &anon);

	sprintf_s(sanon, "%4i", anon);

	rfc[0] = toupper(app[0]);
	rfc[1] = toupper(app[1]);
	rfc[2] = toupper(apm[0]);
	rfc[3] = toupper(nombre[0]);
	rfc[4] = sanon[2];
	rfc[5] = sanon[3];
	rfc[6] = '\0';
	printf("%s%02i%02i", rfc, mesn, dian);


}