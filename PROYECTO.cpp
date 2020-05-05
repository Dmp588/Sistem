#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;

struct Clientes{
	
	char nombre[30];
	char direccion[30];
	char cedula[10];
	
}cliente;

struct Lacteo{
		
	char leche[10] = "leche";
	char yogurt[100]="yogurt";
	char queso[6]="queso";
	char mantequilla[12]="mantequilla";
	
};

struct 	Carne{
	
	char cerdo[10]="cerdo";
	char res[10]="res";
	char pollo[10]="pollo";
	char pescado[10]="pescado";
	
};

struct Grano{
	
	char arroz[10]="arroz";
	char maiz[10]="maiz";
	char trigo[10]="trigo";
	char cebada[10]="cebada";

	
};

struct Snack{
	
 char cheetos[10]="cheetos";
 char doritos[10]="doritos";
 char saritas[10]="saritas";
 char nachos[10]="nachos";

};

struct Golosina{
 
 char galletas[10]="galletas";
 char bombones[10]="bombones";
 char chocolates[15]="chocolates";

};

struct productos{
	
	struct Lacteo lacteo;
	struct Carne carne;
	struct Grano granos;
	struct Snack snacks;
	struct Golosina golosinas;
	
}producto;

int opc=0;

void datoscliente();
void mostrar(productos);

void menulacteos();
void menucarnes();
void menugranos();
void menusnacks();
void menugolosinas();

int main ()
{
	int menu;
	
	inicio:
	

		fflush(stdin);
		cout<<("================ MI COMISARIATITO=========================\n");
		cout<<("\t\tMENU PRINCIPAL\n\n");	
		cout<<("1.- Registro de Clientes\n");
		cout<<("2.- Productos\n");
		cout<<("3.- Comprar\n");
		cout<<("4.- Ingresar Nuevos Productos\n");
		cout<<("5.- Salir\n\n");
		cout<<("Ingrese al apartado del menu usando el numero indice\n");
		cout<<("===========================================================\n");
		cin>>menu;
		system("cls");
	
	switch(menu)
	{
		case 1:
			
			datoscliente();
			goto inicio;
			system("cls");
			
		case 2:
					
			mostrar(producto);
			goto inicio;
			system("cls");
		
			
			
		case 3:
			
			
		
		
			
		case 4:
		
			
		
			
		case 5: break;	
			
	}
	
	getch();
	return 0;
}


void datoscliente(){
	
	fflush(stdin);
	cout<<"Ingrese El Nombre del Cliente: ";
	cin.getline(cliente.nombre,30,'\n');
	
	cout<<"Ingrese la Direccion del Cliente: ";
	cin.getline(cliente.direccion,30,'\n');
	
	cout<<"Ingrese la Cedula del Cliente: ";
	cin.getline(cliente.cedula,30,'\n');
	
	system("cls");
}

void mostrar(productos){
	
	menumostrar:
		
	cout<<"=====================Productos en venta========================";
	cout<<"\n\n\n1.LACTEOS ";
	cout<<"\n2.CARNES ";
	cout<<"\n3.GRANOS ";
	cout<<"\n4.SNACKS ";
	cout<<"\n5.GOLOSINAS ";
	cout<<"\n6.REGRESAR\n\n";
	cout<<("Ingrese al apartado del menu usando el numero indice\n");
	cout<<("===========================================================\n");
	cin>>opc;
	system("cls");
	
	switch(opc){
		
		case 1: 
				menulacteos();
				system("cls");
		case 2: 
				menucarnes();
				system("cls");
		case 3: 
				menugranos();
				system("cls");
		case 4: 
				menusnacks();
				system("cls");
		case 5: 
		
				menugolosinas();
				system("cls");
				
		case 6: break;
		
				
	}

}


void menulacteos(){
	
	menulacteos:
	
	cout<<"\n\n\n====LACTEOS====== ";
	cout<<"\n1. "<<producto.lacteo.leche;
	cout<<"\n2. "<<producto.lacteo.yogurt;
	cout<<"\n3. "<<producto.lacteo.queso;
	cout<<"\n4. "<<producto.lacteo.mantequilla;
	cout<<"\n5. REGRESAR.";
	cout<<("\n\nIngrese al apartado del menu usando el numero indice\n");
	cout<<("===========================================================\n");
	cin>>opc;
	system("cls");
	
		
	switch(opc){
	
	case 1: 
			
			cout<<"=====LECHE=====";
			cout<<"\n\n Valor: 2.50";
			cout<<"\nCodigo: 01022341";
			getch();
			system("cls");
			goto menulacteos;
	
	case 2: 
			cout<<"=====YOGURT=====";
			cout<<"\n\n Valor: 1.50";
			cout<<"\nCodigo: 02041245";
			getch();
			system("cls");
			goto menulacteos;
	case 3: 
			cout<<"=====QUESO=====";
			cout<<"\n\n Valor: 0.50";
			cout<<"\nCodigo: 03214578";
			getch();
			system("cls");
			goto menulacteos;
	case 4: 
			cout<<"=====MANTEQUILLA=====";
			cout<<"\n\n Valor: 2.20";
			cout<<"\nCodigo: 14502101";
			getch();
			system("cls");
			goto menulacteos;
			
	case 5: mostrar(producto);
	}
	
}

void menucarnes(){
	
	menucarnes:
	
	cout<<"\n\n\n====CARNES====== ";
	cout<<"\n1. "<<producto.carne.cerdo;
	cout<<"\n2. "<<producto.carne.res;
	cout<<"\n3. "<<producto.carne.pollo;
	cout<<"\n4. "<<producto.carne.pescado;
	cout<<"\n5. REGRESAR.";
	cout<<("\n\nIngrese al apartado del menu usando el numero indice\n");
	cout<<("===========================================================\n");
	cin>>opc;
	system("cls");
	
	switch(opc){

	
	case 1: 
			
			cout<<"=====CERDO=====";
			cout<<"\n\n Valor: 3.50";
			cout<<"\nCodigo: 01054101";
			getch();
			system("cls");
			goto menucarnes;
	
	case 2: 
			cout<<"=====RES=====";
			cout<<"\n\n Valor: 4.50";
			cout<<"\nCodigo: 04210245";
			getch();
			system("cls");
			goto menucarnes;
			
	case 3: 
			cout<<"=====POLLO=====";
			cout<<"\n\n Valor: 3.25";
			cout<<"\nCodigo: 04517148";
			getch();
			system("cls");
			goto menucarnes;
			
	case 4: 
			cout<<"=====PESCADO=====";
			cout<<"\n\n Valor: 3.75";
			cout<<"\nCodigo: 01245484";
			getch();
			system("cls");
			goto menucarnes;
			
	case 5: mostrar(producto);
	}
	
}

void menugranos(){
	
	menugranos:
	
	cout<<"\n\n\n====GRANOS====== ";
	cout<<"\n1. "<<producto.granos.arroz;
	cout<<"\n2. "<<producto.granos.cebada;
	cout<<"\n3. "<<producto.granos.maiz;
	cout<<"\n4. "<<producto.granos.trigo;
	cout<<"\n5. REGRESAR.";
	cout<<("\n\nIngrese al apartado del menu usando el numero indice\n");
	cout<<("===========================================================\n");
	cin>>opc;
	system("cls");
	
	switch(opc){
	
		case 1: 
			
			cout<<"=====ARROZ=====";
			cout<<"\n\n Valor: 0.45";
			cout<<"\nCodigo: 01245121";
			getch();
			system("cls");
			goto menugranos;
	
	case 2: 
			cout<<"=====CEBADA=====";
			cout<<"\n\n Valor: 1.50";
			cout<<"\nCodigo: 01242154";
			getch();
			system("cls");
			goto menugranos;
			
	case 3: 
			cout<<"=====MAIZ=====";
			cout<<"\n\n Valor: 0.25";
			cout<<"\nCodigo: 02457512";
			getch();
			system("cls");
			goto menugranos;
			
	case 4: 
			cout<<"=====TRIGO=====";
			cout<<"\n\n Valor: 0.75";
			cout<<"\nCodigo: 02322154";
			getch();
			system("cls");
			goto menugranos;
			
	case 5: mostrar(producto);
	}
	
}

void menusnacks(){
	
	menusnacks:
	
	cout<<"\n\n\n====SNACKS====== ";
	cout<<"\n1. "<<producto.snacks.cheetos;
	cout<<"\n2. "<<producto.snacks.doritos;
	cout<<"\n3. "<<producto.snacks.nachos;
	cout<<"\n4. "<<producto.snacks.saritas;
	cout<<"\n5. REGRESAR.";
	cout<<("\n\nIngrese al apartado del menu usando el numero indice\n");
	cout<<("===========================================================\n");
	cin>>opc;
	system("cls");
	
	switch(opc){
	
		case 1: 
			
			cout<<"=====CHEETOS=====";
			cout<<"\n\n Valor: 0.35";
			cout<<"\nCodigo: 23115445";
			getch();
			system("cls");
			goto menusnacks;
	
	case 2: 
			cout<<"=====DORITOS=====";
			cout<<"\n\n Valor: 0.50";
			cout<<"\nCodigo: 03215488";
			goto menusnacks;
			
	case 3: 
			cout<<"=====NACHOS=====";
			cout<<"\n\n Valor: 0.65";
			cout<<"\nCodigo: 09783154";
			getch();
			system("cls");
			goto menusnacks;
			
	case 4: 
			cout<<"=====SARITAS=====";
			cout<<"\n\n Valor: 0.45";
			cout<<"\nCodigo: 09875154";
			getch();
			system("cls");
			goto menusnacks;
			
	case 5: mostrar(producto);
	}
		
}

void menulgolosinas(){
				
			menugolosinas:
	
	cout<<"\n\n\n====GOLOSINAS====== ";
	cout<<"\n1. "<<producto.golosinas.bombones;
	cout<<"\n2. "<<producto.golosinas.chocolates;
	cout<<"\n3. "<<producto.golosinas.galletas;
	cout<<"\n4. REGRESAR.";
	cout<<("\n\nIngrese al apartado del menu usando el numero indice\n");
	cout<<("===========================================================\n");
	cin>>opc;
	system("cls");
	
	switch(opc){
	
		case 1: 
			
			cout<<"=====BOMBONES=====";
			cout<<"\n\n Valor: 2.35";
			cout<<"\nCodigo: 02354874";
			getch();
			system("cls");
			goto menugolosinas;
	
	case 2: 
			cout<<"=====CHOCOLATES=====";
			cout<<"\n\n Valor: 3.50";
			cout<<"\nCodigo: 45217881";
			getch();
			system("cls");
			goto menugolosinas;
			
	case 3: 
			cout<<"=====GALLETAS=====";
			cout<<"\n\n Valor: 0.65";
			cout<<"\nCodigo: 35578445";
			getch();
			system("cls");
			goto menugolosinas;

			
	case 4: mostrar(producto);
	}
	
	
}

