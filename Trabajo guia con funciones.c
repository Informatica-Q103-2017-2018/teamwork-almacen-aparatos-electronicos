#include<stdio.h>
#define N 11

void equipos();
void jugadores();
void pronostico();

typedef struct{
	char nombreb[50];
}paises;


 typedef struct{
    char nombre[50];
	char posicion[50];
	int dorsal;
	int edad;
	char club[50];
}jugador;

int main(){
	
	char grupo,a,b,c,d,e,f,g,h;
	int opc,i0,j0,i;
	
	FILE *pf;
  	jugador pers[400];
  	pf=fopen("futbol.txt","r");
  	while(fscanf(pf,"%[^;];%[^;];%i;%i;%[^\n]\n",
    pers[i].nombre,
    pers[i].posicion,
    &(pers[i].dorsal),
    &(pers[i].edad),
    pers[i].club) != EOF)
    i++;
    
    
    
	printf("              ****MUNDIAL 2018****\n");
	printf("\n\nImprima la letra de un grupo del mundial 2018: ");
	scanf("%c",&grupo);
	
	
	if(grupo=='a'){
		equipos(i0=0);
		jugadores(j0=0);
	}
	if(grupo=='b'){
		equipos(i0=4);
		jugadores(j0=N*4);
	}
	if(grupo=='c'){
		equipos(i0=8);
		jugadores(j0=N*8);	
	}
	if(grupo=='d'){
		equipos(i0=12);
		jugadores(j0=N*12);
	}
	if(grupo=='e'){	
		equipos(i0=16);
		jugadores(j0=N*16);
	}
	if(grupo=='f'){
		equipos(i0=20);
		jugadores(j0=N*20);
	}
	
	if(grupo=='g'){
		equipos(i0=24);
		jugadores(j0=N*24);
	}
	if(grupo=='h'){
		equipos(i0=28);
		jugadores(j0=N*28);
	}




	
	pronostico();


	return 0;
}


void equipos(int i0){
	
	FILE *pf;
	pf=fopen("equipos.txt","r");
	int i;
	paises pais[50];
	
	while(fscanf(pf,"%[^\n]\n",
    pais[i].nombreb) != EOF)
    i++;
    
	for (i=i0;i<i0+4;i++){
		printf("%i. %s\n",i-i0+1,pais[i].nombreb);
	}
	
		
	
}

void jugadores(int j0){
	
	
	FILE *pf;
  	jugador pers[400];
  	int j,num,h;
  	pf=fopen("futbol.txt","r");
  	
  	while(fscanf(pf,"%[^;];%[^;];%i;%i;%[^\n]\n",
    pers[j].nombre,
    pers[j].posicion,
    &(pers[j].dorsal),
    &(pers[j].edad),
    pers[j].club) != EOF)
    j++;

	printf("\n\n      Seleccione el numero de una seleccion: ");
	scanf("%i",&num);
	
switch (num){
	case 1:
		for (j=j0;j<j0+11;j++){
		printf("%i. %s\n",j-j0+1,pers[j].nombre);
	}
	printf("\n\n      Seleccione el numero de un jugador: ");
	scanf("%i",&h);
	
	break;
	case 2:
	for (j=j0+11;j<j0+22;j++){
		printf("%i. %s\n",j-j0-10,pers[j].nombre);
	}
	printf("\n\n      Seleccione el numero de un jugador: ");
	scanf("%i",&h);
	
	break;
	case 3:
	for (j=j0+22;j<j0+33;j++){
		printf("%i. %s\n",j-j0-21,pers[j].nombre);
	}
	printf("\n\n      Seleccione el numero de un jugador: ");
	scanf("%i",&h);
	
	break;
	case 4:
	for (j=j0+33;j<j0+44;j++){
		printf("%i. %s\n",j-j0-32,pers[j].nombre);
	}
	printf("\n\n      Seleccione el numero de un jugador: \n");
	scanf("%i",&h);
	
	break;
}

 switch(h){
    	
    	case 1:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-N].posicion,pers[j-N].dorsal,pers[j-N].edad,pers[j-N].club);
	
	break;
	case 2:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-10].posicion,pers[j-10].dorsal,pers[j-10].edad,pers[j-10].club);
	
	break;
	case 3:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-9].posicion,pers[j-9].dorsal,pers[j-9].edad,pers[j-9].club);
	
	break;
	case 4:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-8].posicion,pers[j-8].dorsal,pers[j-8].edad,pers[j-8].club);
	
	break;
	case 5:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-7].posicion,pers[j-7].dorsal,pers[j-7].edad,pers[j-7].club);

	break;
	case 6:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-6].posicion,pers[j-6].dorsal,pers[j-6].edad,pers[j-6].club);
	
	break;
	case 7:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-5].posicion,pers[j-5].dorsal,pers[j-5].edad,pers[j-5].club);
	
	break;
	case 8:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-4].posicion,pers[j-4].dorsal,pers[j-4].edad,pers[j-4].club);

	break;
	case 9:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-3].posicion,pers[j-3].dorsal,pers[j-3].edad,pers[j-3].club);
	
	break;
	case 10:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-2].posicion,pers[j-2].dorsal,pers[j-2].edad,pers[j-2].club);
	
	break;
	case 11:
		printf("\n\nPosicion: %s\nDorsal: %i\nEdad: %i\nClub: %s\n",pers[j-1].posicion,pers[j-1].dorsal,pers[j-1].edad,pers[j-1].club);
	
	break;
	}

}


void pronostico(){
	
	char p1[30],p2[30],p3[30],p4[30],p5[30],p6[30],p7[30],p8[30],p9[30],p10[30],p11[30],p12[30],p13[30],p14[30],p15[30],p16[30],p17[30],p18[30];
	int i,d,c;

	FILE *pf;
		pf=fopen("PRONOSTICO.txt","a");
		
		printf("\n\nFASE DE GRUPOS\n\n");
			
		for(i=65;i<=72;i++){
			
			
			printf("Primer clasificado grupo %c (%c1): \n\n",i,i);
			scanf("%s", p1);
			fprintf(pf, "Primer clasificado grupo %c (%c1): %s\n\n",i,i,p1);
			printf("Segundo clasificado grupo %c (%c2): \n\n",i,i);
			scanf("%s",p2);
			fprintf(pf,"Segundo clasificado grupo %c (%c2): %s\n\n",i,i,p2);
		}
		
		printf("OCTAVOS\n\n");
		
		printf("Primer partido octavos (A1 vs B2).El ganador sera O1: \n\n");
		scanf("%s",p3);
		fprintf(pf,"Primer clasificado de octavos (O1): %s\n\n",p3);
		printf("Segundo partido octavos (B1 vs A2).El ganador sera O2: \n\n");
		scanf("%s",p4);
		fprintf(pf,"Segundo clasificado de octavos (O2): %s\n\n",p4);
		printf("Tercer partido octavos (C1 vs D2).El ganador sera O3: \n\n");
		scanf("%s",p5);
		fprintf(pf,"Tercer clasificado de octavos (O3): %s\n\n",p5);
		printf("Cuarto partido octavos (D1 vs C2).El ganador sera O4: \n\n");
		scanf("%s",p6);
		fprintf(pf,"Cuarto clasificado de octavos (O4): %s\n\n",p6);
		printf("Quinto partido octavos (E1 vs F2).El ganador sera O5: \n\n");
		scanf("%s",p7);
		fprintf(pf,"Quinto clasificado de octavos (O5): %s\n\n",p7);
		printf("Sexto partido octavos (F1 vs E2).El ganador sera O6: \n\n");
		scanf("%s",p8);
		fprintf(pf,"Sexto clasificado de octavos (O6): %s\n\n",p8);
		printf("Septimo partido octavos (G1 vs H2).El ganador sera O7: \n\n");
		scanf("%s",p9);
		fprintf(pf,"Septimo clasificado de octavos (O7):  %s\n\n",p9);
		printf("Octavo partido octavos (H1 vs G2).El ganador sera O8: \n\n");
		scanf("%s",p10);
		fprintf(pf,"Octavo clasificado de octavos (O8): %s \n\n",p10);
		
		printf("CUARTOS\n\n");
		
			
		printf("Primer partido de cuartos (O1 vs O3).El ganador sera (C1): \n\n");
		scanf("%s",p11);
		fprintf(pf,"Clasificado de cuartos (C1): %s\n\n",p11);
		printf("Segundo partido de cuartos (O2 vs O4).El ganador sera (C2): \n\n");
		scanf("%s",p12);
		fprintf(pf,"Clasificado de cuartos (C2):  %s\n\n",p12);
		printf("Primer partido de cuartos (O5 vs O7).El ganador sera (C3): \n\n");
		scanf("%s",p13);
		fprintf(pf,"Clasificado de cuartos (C3): %s\n\n",p13);
		printf("Primer partido de cuartos (O6 vs O8).El ganador sera (C4): \n\n");
		scanf("%s",p14);
		fprintf(pf,"Clasificado de cuartos (C4): %s\n\n",p14);
	
		printf("SEMIFINALES\n\n");
	
		for(c=1;c<=2;c++){
		printf("Partido semifinales %i (C%i vs C%i).El ganador sera (S%i): \n\n",c,c,c+2,c);
		scanf("%s",p15);
		fprintf(pf,"Clasificado de semifinales (S%i): %s\n\n",c,p15);
			
		}
		
		printf("TERCER Y CUARTO PUESTO\n\n");	
		
		printf("Tercer y cuarto puesto Mundial de Rusia 2018 (C2 vs C4): \n\n");
		scanf("%s",p16);
		fprintf(pf,"Tercer puesto del Mundial de Rusia 2018: %s",p16);
		
		printf("CAMPEON Y SUBCAMPEON\n\n");	
		
		printf("Final Mundial de Rusia 2018 (S1 vs S2): \n\n");
		scanf("%s",p17);
		
		printf("Subcampeon: \n\n");
		scanf("%s",p18);
	
		
		fprintf(pf,"Ganador del Mundial de Rusia 2018: %s  \nSegundo puesto: %s \n",p17,p18);
		
		fprintf(pf,"Podio final\n1. %s\n2. %s\n3. %s\n",p17,p18,p16);
		
		
		fclose(pf);
		
		printf("Visite el fichero PRONOSTICO y consulte sus predicciones");
	
}	
	
	
	
	
	
	
	
	
	
	


