#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include<windows.h>
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

void gotoxy(int x, int y);

void datoscliente();
void mostrar(productos);

void menulacteos();
void menucarnes();
void menugranos();
void menusnacks();
void menugolosinas();
int comprar();

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
			
			comprar();
			goto inicio;
			system("cls");
		
			
		case 4:
		
			
		
			
		case 5: default:;	
			
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
		
		fflush(stdin);
		
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
				
		case 6: default: fflush(stdin); system("cls"); int main();
		
		
			
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
		fflush(stdin);
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
		fflush(stdin);
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

		fflush(stdin);
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
	
		fflush(stdin);
		system("cls");
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
			getch();
			system("cls");
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

void menugolosinas(){
				
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

int comprar(){
	
	char prod[30];
	int cant=0,i=0;
	float prec=0,iva=0,subtotal,total=0,sub=0;
	char si[]="si";char resp[20];
	
	
	do{
	cout<<"===============SELECCIONE LOS PRODUCTOS QUE DESEA LLEVAR==================";
	
	gotoxy(3,2);cout<<"LACTEOS";
	
	gotoxy(3,4);cout<<producto.lacteo.leche<<endl;
	gotoxy(3,5);cout<<producto.lacteo.yogurt<<endl;
	gotoxy(3,6);cout<<producto.lacteo.queso<<endl;
	gotoxy(3,7);cout<<producto.lacteo.mantequilla<<endl;
	
	gotoxy(17,2);cout<<"CARNES";

	gotoxy(17,4);cout<<producto.carne.cerdo<<endl;
	gotoxy(17,5);cout<<producto.carne.pescado<<endl;
	gotoxy(17,6);cout<<producto.carne.pollo<<endl;
	gotoxy(17,7);cout<<producto.carne.res<<endl;
	
		gotoxy(31,2);cout<<"GRANOS";

	gotoxy(31,4);cout<<producto.granos.arroz<<endl;
	gotoxy(31,5);cout<<producto.granos.cebada<<endl;
	gotoxy(31,6);cout<<producto.granos.maiz<<endl;
	gotoxy(31,7);cout<<producto.granos.trigo<<endl;
	
		gotoxy(44,2);cout<<"SNACKS";

	gotoxy(44,4);cout<<producto.snacks.cheetos<<endl;
	gotoxy(44,5);cout<<producto.snacks.doritos<<endl;
	gotoxy(44,6);cout<<producto.snacks.nachos<<endl;
	gotoxy(44,7);cout<<producto.snacks.saritas<<endl;
	
	gotoxy(56,2);cout<<"GOLOSINAS";

	gotoxy(56,4);cout<<producto.golosinas.bombones<<endl;
	gotoxy(56,5);cout<<producto.golosinas.chocolates<<endl;
	gotoxy(56,6);cout<<producto.golosinas.galletas<<endl;
	
	
	
	gotoxy(4,10);cout<<"Seleccione el Producto que desea llevar: ";
	fflush(stdin);
	cin.getline(prod,30,'\n');

	if(strcmp(producto.lacteo.leche,prod)==0){prec=2.50;}
	if(strcmp(producto.lacteo.yogurt,prod)==0){prec=1.50;}
	if(strcmp(producto.lacteo.mantequilla,prod)==0){prec=2.20;}
	if(strcmp(producto.lacteo.queso,prod)==0){prec=0.50;}
	if(strcmp(producto.carne.cerdo,prod)==0){prec=3.50;}
	if(strcmp(producto.carne.pescado,prod)==0){prec=3.75;}
	if(strcmp(producto.carne.pollo,prod)==0){prec=3.25;}
	if(strcmp(producto.carne.res,prod)==0){prec=4.50;}
	if(strcmp(producto.granos.arroz,prod)==0){prec=0.45;}
	if(strcmp(producto.granos.cebada,prod)==0){prec=1.50;}
	if(strcmp(producto.granos.maiz,prod)==0){prec=0.25;}
	if(strcmp(producto.granos.trigo,prod)==0){prec=0.75;}
	if(strcmp(producto.snacks.cheetos,prod)==0){prec=0.35;}
	if(strcmp(producto.snacks.doritos,prod)==0){prec=0.50;}
	if(strcmp(producto.snacks.nachos,prod)==0){prec=0.65;}
	if(strcmp(producto.snacks.saritas,prod)==0){prec=0.45;}
	if(strcmp(producto.golosinas.bombones,prod)==0){prec=2.35;}
	if(strcmp(producto.golosinas.chocolates,prod)==0){prec=3.50;}
	if(strcmp(producto.golosinas.galletas,prod)==0){prec=0.65;}
	
	cout<<endl<<"Este Producto Tiene un Costo de: "<<prec;

	cout<<endl<<"Cuantos desea llevar?..";cin>>cant;
	
		
	
	subtotal=prec*cant;
	sub=sub+subtotal;
	

	
	cout<<"COSTO : "<<subtotal;
	cout<<"\nHasta El Momento su Pago es de: "<<sub;
	
	fflush(stdin);	
	cout<<"\n\nDesea Otro producto? (si/no) :";
	cin.getline(resp,20,'\n');
	system("cls");
	}while(strcmp(resp,si)==0);
	
	datoscliente();
	
	iva=(sub*0.12);
	total=sub+iva;
	
	
	gotoxy(3,1);cout<<"================FACTURA===========";
	
	
	gotoxy(6,4);cout<<"NOMBRE:    "<<cliente.nombre;
	gotoxy(6,5);cout<<"CEDULA:    "<<cliente.cedula;
	gotoxy(6,6);cout<<"DIRECCION: "<<cliente.direccion;
	
	
	gotoxy(6,9);cout<<"SUB TOTAL: "<<sub;
	gotoxy(6,10);cout<<"IVA 12%: "<<iva;
	
	gotoxy(6,12);cout<<"EL TOTAL FINAL A PAGAR ES: "<<total;
	
		
			
	getch();
	system("cls");
}

void gotoxy(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }   


