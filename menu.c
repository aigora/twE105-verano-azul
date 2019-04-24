
#include <stdio.h>
void main()
{
char c,i,s,p ;
int opcion;
printf("Bienvenido a La Papeleria Nogales: ");
printf("Escoga una opcion (en minusculas) entre:\n Catalogo (c)\n Informacion (i)\n Sugerencias (s)\n Cuenta personal (p)\n");
do{
	
scanf(" %c", &opcion);
switch(opcion)
{
case 'c':
printf("catalogo\n");
break;
case 'i':
printf("Informacion:\n Direccion: Calle Alto del Arenal,8 Madrid \n Telefono: 912-854-493 \n Email: papelerianogales@gmail.com \n");
break;
case 's': 
printf("Sugerecias\n");
break;
case 'p':
printf("Cuenta personal\n");
break;
while (default);

}
}
}
