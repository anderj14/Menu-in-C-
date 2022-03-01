#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
#include<time.h>
#include<fstream>


using namespace std;

void menu_principal();
void unidad_uno();
void teoria_unidaDos();
void unidad_Tres();
void unidad_Cuatro();
void unidad_Cinco();
void unidad_Seis();
void unidad_Siete();
void Practica_Final();

/////////////// UNIDAD 1///////////////

//////////HELLO 1////////////

void datos_usuario(){
  char nombre[30];
  int edad;
  int respuesta,cont;
  char opcion;
  //system("cls");

  do {
    system("cls");
    cout<<"SOLICITUD DE DATOS"<<endl<<endl;
    cout<<"Nombre:"; cin.getline(nombre, 30 );
    cout<<"Edad:"; cin>>edad;

    cout<<"Hola "<<nombre<<" usted tiene "<<edad<<" años"<<endl<<endl;

    cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
        <<"Matricula: 100544259"<<endl<<endl;

    if(cont){
      cout<<"Que desea hacer([ENTER]seguir [SCAPE]retroceder)";

      respuesta=getch();
      cout<<endl;
    }
  } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    unidad_uno();
  }
}

//////////////HELLO 2//////////////////

void calculadora_Global(){
  int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0, residuo = 0 ;
  int respuesta,cont;
  char opcion;

  do {
    system("cls");

    cout<<"digite su numero:"; cin>>n1;
    cout<<"digite su numero:"; cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;
    residuo = n1 % n2;

    cout << "\nla suma es: "<<suma<<endl;
    cout << "la resta es: "<<resta<<endl;
    cout << "la multiplicacion es: "<<multiplicacion<<endl;
    cout << "la division es: "<<division<<endl;
    cout << "el residuo es:"<<residuo<<endl<<endl;

    cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
        <<"Matricula: 100544259"<<endl<<endl;

    if(cont){
      cout<<"Que desea realizar ([ENTER] para seguir [2 SCAPE]retroceder)";
      respuesta=getch();
      cout<<endl;
    }
  } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    unidad_uno();
  }
}

/////////////HELLO 3/////////////////

void promedio_Tres(){
  double n1, n2, n3, promedio = 0;
  int respuesta,cont;
  char opcion;
  system("cls");
  do {
    system("cls");
    cout<< "escriba el primer numero:"; cin>>n1;
    cout<< "escriba el segundo numero:"; cin>>n2;
    cout<< "escriba el tercer numero:"; cin>>n3;

    promedio = (n1 + n2 + n3) / 3;

    cout<<"\nEl promedio es:" <<promedio<<endl<<endl;

    cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
        <<"Matricula: 100544259"<<endl<<endl;

    if(cont){
      cout<<"Que desea realizar ([ENTER] para seguir [2 SCAPE]retroceder)";
      respuesta=getch();
      cout<<endl;
    }
  } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    unidad_uno();
  }
}
////////////////UNIDAD 1////////
void unidad_uno(){
  char opcion;
  system("cls");

  cout<<"\tMENU DE LA UNIDAD 1"<<endl
      <<"\t==================="<<endl<<endl;
  cout<<"1=> Datos de usuario"<<endl;
  cout<<"2=> Calculadora de numeros"<<endl;
  cout<<"3=> Promedio de 3 numeros"<<endl;
  cout<<"4=> Salir o Regresar a menu principal"<<endl<<endl;
  cout<<"Ingrese opcion: ";
  opcion=getch();
  switch (opcion) {
    case '1':
    datos_usuario();
    break;
    case '2':
    calculadora_Global();
    break;
    case '3':
    promedio_Tres();
    break;
    case '4':
    cout<<endl<<"Que desea realizar ([ENTER] para salir [SCAPE]retroceder)"<<endl<<endl;
    break;
    default:
    system("cls");
    unidad_uno();
    break;
  }
  opcion=getch();
  if(opcion==8){
    menu_principal();
  }
}

///////////TEORIA unidad 2////////////

////////////HELLO 1//////////////

void potencia(){
  double base=0, acum=1;
  int  exponente=0;
  int respuesta;
  char opcion;
  //system("cls");

do {
  system("cls");
  double base, resultado = 0;
  int exponente, recopilador, contador= 0;

  cout << "Digitar la base: "; cin >>  base;
  cout << "Digitar el exponente: "; cin >>  exponente;

  recopilador = base;

  if (exponente == 0){
      resultado = 1;
  }else{
      if (exponente < 0){
          exponente *= -1;
          while (contador < exponente){
              resultado = recopilador;
              recopilador *= base;
              contador++;
          }
      resultado = 1 / resultado;
      }
          else {
              while (contador < exponente){
              resultado = recopilador;
              recopilador *= base;
              contador++;
          }
      }
  }
  cout << "El resultado es: " << resultado << endl<<endl;

  cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
      <<"Matricula: 100544259"<<endl<<endl;

  if(opcion){
    cout<<"Que desea realizar [ENTER]seguir [SCAPE]retroceder";
    respuesta=getch();
    cout<<endl;
  }
} while(respuesta==13);
opcion=getch();
if (opcion==8) {
  teoria_unidaDos();
}
}

///////////////HELLO 2

void multiplos_siete(){
  int numDesde, numHasta,promedio, i, cont=0, acom=0;
  int respuesta;
  char opcion;
  //system("cls");

do {
  system("cls");
  cout<<"primer numero: ";cin>>numDesde;
  cout<<"segundo numero: ";cin>>numHasta;

  if(numDesde>numHasta){
    cout<<("error, el primer numero es mayor que el segundo");
    getch();
  }
  else{
  }

  i=numDesde;

  while(i<=numHasta){
        acom+=i;
        cont++;
    if(i%7==0){
        cout << i << endl;
    }
    i++;
  }

  promedio = acom / cont;

  cout<<("el promedio es: ") <<promedio<<endl<<endl;

  cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
      <<"Matricula: 100544259"<<endl<<endl;

  if(opcion){
    cout<<"Que desea realizar [ENTER]seguir [SCAPE]retroceder";
    respuesta=getch();
    cout<<endl;
  }

} while(respuesta==13);
opcion=getch();
if (opcion==8) {
  teoria_unidaDos();
}
}

///////////////HELLO 3////////////////

void numeros_Primos(){
  int i, j, cont;
  int respuesta;
  char opcion;
  system("cls");

do {
  cout<<("los numeros primos del 30 hasta al 300 son: ")<<endl<<endl;

  for(i=30; i<=300; i++){
      cont=0;
      for(j=1; j<=300; j++){
          if(i%j==0){
              cont++;
          }
      }
      if(cont==2){
          cout<< "El " << i << " es primo "<<endl<<endl;
      }
  }

  cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
      <<"Matricula: 100544259"<<endl<<endl;

  if(opcion){
    cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
    respuesta=getch();
    cout<<endl;
  }
} while(respuesta==13);
opcion=getch();
if (opcion==8) {
  teoria_unidaDos();
}
}

////////////UNIDAD 2 MENU PRINCIPAL////////////////

void teoria_unidaDos(){
  char opcion;
  system("cls");

  cout<<"\tMENU DE LA UNIDAD 2"<<endl
      <<"\t==================="<<endl<<endl;
  cout<<"1=> Potenciacion"<<endl;
  cout<<"2=> Numeros multiplos de 7"<<endl;
  cout<<"3=> Numeros primos"<<endl;
  cout<<"4=> Salir o Regresar a menu principal"<<endl<<endl;
  cout<<"Ingrese opcion: ";
  opcion=getch();
  switch (opcion) {
    case '1':
    potencia();
    break;
    case '2':
    multiplos_siete();
    break;
    case '3':
    numeros_Primos();
    break;
    case '4':
    cout<<"Que desea realizar [ENTER]salir, [SCAPE]retroceder"<<endl<<endl;
    break;
    default:
    teoria_unidaDos();
    break;
  }
  opcion=getch();
  if(opcion==8){
    menu_principal();
  }
}

//////////////////UNIDAD 3///////////////////

/////////////////HELLO 1////////////////

void caracteres_Nombre(){
  int respuesta;
  char opcion;
  do {
    system("cls");
    string nombre = "Anderson Frias";

    cout<<"NOMBRE: "<<endl<<endl;;

    string::iterator ite = nombre.begin();

    while (ite != nombre.end()){

        cout<<*ite<<endl;
        ite++;
    }

    cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
        <<"Matricula: 100544259"<<endl<<endl;

    if(opcion){
      cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
      respuesta=getch();
      cout<<endl<<endl;
    }
  } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    unidad_Tres();
  }
}

/////////////HELLO 2/////////////////////

void contador_Caracteres(){
  int mayus=0, minus=0, num=0, sign=0, alfanum=0;
  string caracteres;
  int respuesta;
  char opcion;


  do {
    system("cls");
    cout<<"<<Introdusca frase o palabra>>: ";
    getline(cin, caracteres);

    cout<<"\nCantidad de caracteres: "<<caracteres.size()<<endl<<endl;

    for(int i = 0; i<caracteres.size(); i++){

        if(isupper(caracteres.at(i)))
            mayus++;
        if(islower(caracteres.at(i)))
            minus++;
        if(isdigit(caracteres.at(i)))
            num++;
        if(ispunct(caracteres.at(i)))
            sign++;
        if(isalnum(caracteres.at(i)))
            alfanum++;
    }
    cout<<"Cantidad de mayusculas: "<<mayus<<endl<<endl;
    cout<<"Cantidad de minusculas: "<<minus<<endl<<endl;
    cout<<"Cantidad de digitos: "<<num<<endl<<endl;
    cout<<"Cantidad de signos de puntuacion : "<<sign<<endl<<endl;
    cout<<"Cantidad de alfanumericos: "<<alfanum<<endl<<endl;

    cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
        <<"Matricula: 100544259"<<endl<<endl;

    if(opcion){
      cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
      respuesta=getch();
      cout<<endl<<endl;
    }
  } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    unidad_Tres();
  }
}

///////////////HELLO 3/////////////////////

void factura_Margen(){
  int respuesta;
  char opcion;

  do {
    system("cls");
    struct factura{
        long factNumero;
        string factCliente;
        string factFecha;
        double factMonto;
        double factDescuento;
        double factNeto;
    }factura1;

        cout<<"<<DATOS DEL CLIENTE>>"<<endl<<endl;

        cout<<"INGRESE NUMERO: "; cin>>factura1.factNumero,'\n';

        cout<<"INGRESE NOMBRE DEL CLIENTE: ";
        cin.ignore();
        getline(cin, (factura1.factCliente));

        cout<<"INGRESE FECHA: ";
        //cin.ignore();
        getline(cin,(factura1.factFecha));


        cout<<"\n<<MARGEN>>"<<endl<<endl;

        cout<<"INGRESE MONTO: "; cin>>factura1.factMonto,'\n';

        if(factura1.factMonto>=50000){
            factura1.factDescuento = factura1.factMonto * 0.14;
        }
        else if(factura1.factMonto>=20000 && factura1.factMonto<=30000){
            factura1.factDescuento = factura1.factMonto * 0.07;
        }
        else if(factura1.factMonto>=30000 && factura1.factMonto<50000){
            factura1.factDescuento = factura1.factMonto * 0.10;
        }
        else if(factura1.factMonto<20000) {
            factura1.factMonto = factura1.factMonto;
        }
        factura1.factNeto = factura1.factMonto - factura1.factDescuento;

        cout<<"\n<<IMPRIMIENTO FACTURA>>"<<endl<<endl;

        cout<<"Numero: "<<factura1.factNumero<<endl;
        cout<<"Cliente: "<<factura1.factCliente<<endl;
        cout<<"Fecha: "<<factura1.factFecha<<endl;
        cout<<"Monto: "<<factura1.factMonto<<endl;
        cout<<"Descuento: "<<factura1.factDescuento<<endl;
        cout<<"Monto Neto: "<<factura1.factNeto<<endl<<endl;

        cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
            <<"Matricula: 100544259"<<endl<<endl;

        if(opcion){
          cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
          respuesta=getch();
          cout<<endl<<endl;
        }
  } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    unidad_Tres();
  }

}

void unidad_Tres(){
  char opcion;
  system("cls");

  cout<<"\tMENU DE LA UNIDAD 3"<<endl
      <<"\t==================="<<endl<<endl;
  cout<<"1=> Caracteres"<<endl;
  cout<<"2=> Contador de caracteres"<<endl;
  cout<<"3=> Factura-Margen"<<endl;
  cout<<"4=> Salir o Regresar a menu principal"<<endl<<endl;
  cout<<"Ingrese opcion: ";
  opcion=getch();
  switch (opcion) {
    case '1':
    caracteres_Nombre();
    break;
    case '2':
    contador_Caracteres();
    break;
    case '3':
    factura_Margen();
    break;
    case '4':
    cout<<"Que desea realizar [ENTER]salir, [SCAPE]retroceder"<<endl<<endl;
    break;
    default:
    unidad_Tres();
    break;
  }
  opcion=getch();
  if(opcion==8){
    menu_principal();
  }
}

/////////////////////UNIDAD 4/////////////////

//////////////HELLO 1////////////////

void maquina_Bebida(){

  struct Bebida{
    string nombreBebida;
    double precioBebida;
    int cantidadEnMaquina;
  };

    Bebida Botellas[5]={{"1)--Botella de agua",20,20},{"2)--CocaCola\t",25,20},{"3)--Seven Up\t",25,20},{"4)--Mountain Dew",30,20},{"5)--Jugo V8\t",50,20}};
    int NumeroBebidas, cont=0;
    double monto=0,vuelto=0,generado=0;
    char continuar;
    int respuesta;
    char opcion;

     do {
          system("cls");
       cout<<"\t\t\t--------------------"<<endl;
       cout<<"\t\t\tMAQUINA DISPENSADORA"<<endl;
       cout<<"\t\t\t--------------------"<<endl;
       cout<<"==========================================================================";
       cout<<"\nNOMBRE DE LA BEBIDA" "\t\t" "COSTO" "\t\t" "CANTIDAD EN MAQUINA"<<endl;
       cout<<"==========================================================================";

       while(cont<5){
       cout << "\n" << Botellas[cont].nombreBebida << "\t\t" << Botellas[cont].precioBebida << "\t\t\t" << Botellas[cont].cantidadEnMaquina <<endl;
          	cont++;
     }
       //cout<<"==========================================================================";

     if(monto==0){
       cout<<"\nIngrese el dinero: "; cin>>monto;
     }
     if(monto<0||monto<20){
       cout<<"\nNo se aceptan valores negativos ni valores menores a 20, intente de nuevo: ";
       cin>>monto;
     }
     cout<<"\nSeleccione el numero de la bebida: "; cin>>NumeroBebidas;

     if(NumeroBebidas<1||NumeroBebidas>5){
       cout<<"Numero no valido, intente de nuevo: ";cin>>NumeroBebidas;
     }
     switch (NumeroBebidas) {
       case 1:
       vuelto=monto-Botellas[NumeroBebidas-1].precioBebida;
       Botellas[NumeroBebidas-1].cantidadEnMaquina-=1;
       cout<<"El vuelto es: "<<vuelto;
       if(monto<Botellas[NumeroBebidas-1].precioBebida)
             break;
             generado +=Botellas[NumeroBebidas-1].precioBebida;
             break;

       case 2:
          vuelto=monto-Botellas[NumeroBebidas-1].precioBebida;
          Botellas[NumeroBebidas-1].cantidadEnMaquina=-1;
          cout<<"El vuelto es: "<<vuelto;
          if(monto<Botellas[NumeroBebidas-1].precioBebida)
              break;
              generado+=Botellas[NumeroBebidas-1].precioBebida;
              break;
       case 3:
          vuelto=monto-Botellas[NumeroBebidas-1].precioBebida;
          Botellas[NumeroBebidas-1].cantidadEnMaquina=-1;
          cout<<"El vuelto es: "<<vuelto;
          if(monto<Botellas[NumeroBebidas-1].precioBebida)
              break;
              generado+=Botellas[NumeroBebidas-1].precioBebida;
              break;
       case 4:
          vuelto=monto-Botellas[NumeroBebidas-1].precioBebida;
          Botellas[NumeroBebidas-1].cantidadEnMaquina=-1;
          cout<<"El vuelto es: "<<vuelto;
          if(monto<Botellas[NumeroBebidas-1].precioBebida)
              break;
              generado+=Botellas[NumeroBebidas-1].precioBebida;
              break;
       case 5:
          vuelto=monto-Botellas[NumeroBebidas-1].precioBebida;
          Botellas[NumeroBebidas-1].cantidadEnMaquina=-1;
          cout<<"El vuelto es: "<<vuelto;
          if(monto<Botellas[NumeroBebidas-1].precioBebida)
              break;
              generado+=Botellas[NumeroBebidas-1].precioBebida;
              break;
              default:break;
     }
     monto=vuelto;
     cout<<"\nDesea comprar otra bebida?[s/n]: ";cin>>continuar;
     if(!(continuar=='s'||continuar=='n')){
      cout<<"\nEntrada no valida, intente de nuevo porfavor: ";cin>>continuar;
     }
     if(continuar=='n'){
      break;
     }

     }while(continuar=='s' && monto>20);
     cout<<"\nLa maquina ha generado: "<<generado<<endl<<endl;

     cout<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
         <<"Matricula: 100544259"<<endl<<endl;
     getch();
     unidad_Cuatro();
}

/////////////HELLO 2//////////////////////

void salario_Empleado(){

  vector <long> empld = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
  vector <int> horas;
  vector <double> tarifaPorHora;
  vector <double> salarioBruto;
  int entrada,respuesta;
  char opcion;

 do {
   system("cls");
   cout<<"---------------------------------------------"<<endl;
   cout<<"\t\tEMPLEADOS"<<endl;
   cout<<"---------------------------------------------"<<endl<<endl;
   for(int i = 0; i < 7;i++){

       cout << "empleado: " << empld[i] <<endl;
       cout << "Horas trabajadas: ";cin >> entrada;

   if(entrada< 0){
     cout<<"Entrada no valida, intente de nuevo: ";cin >> entrada;
   }

       horas.push_back(entrada);
       cout << "Tarifa por horas: ";
   cin >> entrada;

   if(entrada < 50){
     cout<<"Entrada no valida, intente de nuevo: ";cin >>entrada;
   }

       tarifaPorHora.push_back(entrada);
       salarioBruto.push_back((tarifaPorHora[i] * horas[i]));
       cout << "\n";
   }
   cout<<"\t\t\tHONORARIO DE TRABAJO"<<endl;
   cout << "------------------------------------------------------------------------------------" <<endl;
   cout << "empleado: " << "\t" << "Horas trabajadas: " << "\t" <<  "Tafifa por horas: " << "\t" << "Salario bruto: " <<endl;
   cout << "------------------------------------------------------------------------------------" <<endl;

   for(int i = 0; i < 7;i++){
       cout << empld[i] << left << "\t\t\t" << horas[i] << left << "\t\t\t" <<  tarifaPorHora[i] << "\t\t\t" <<  salarioBruto[i] <<endl;
   }
   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;
   if(opcion){
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
 opcion=getch();
 if(opcion==8){
   unidad_Cuatro();
 }
}

///////////HELLO 3/////////////

void zoologico_Mono(){
  int mayor = 0, menor = 0, aux = 0;
	double monoComida[3][7];
  int respuesta;
  char opcion;

 do {
   system("cls");
   for (int m = 0; m < 3; m++){
 		cout<<"Mono "<< m + 1 <<endl;
 		for (int d = 0; d < 7; d++){
 			cout<<"digite la libras del dia de hoy "<< d + 1 <<": "; cin>> monoComida[m][d];
 		}
 	}
 	cout<<endl;
 	double promedio[7] = {};
 	for (int d = 0; d < 7; d++){
 		for (int m = 0; m < 3; m++){
 			promedio[d] += monoComida[m][d];
 		}
 	}
 	cout<<endl;
 	for (int d = 0; d < 7; d++)
 	{
 		promedio[d] /= 3;
 		cout<<"\nPromedio del dia " << d + 1 << ": " << promedio[d]<<endl;
 	}
 	for (int d = 0; d < 7; d++){
 		for (int m = 0; m < 3; m++){
 			aux++;
 			if ( mayor < monoComida[m][d]){
 				mayor = monoComida[m][d];
 			}

 			if ( menor > monoComida[m][d] || aux == 1){
 				menor = monoComida[m][d];
 			}
 		}
 	}
 	cout<<"==============================================";
  cout<<"\nLa mayor cantidad de comida que comieron es: "<<mayor<<endl;
 	cout<<"La menor cantidad de comida que comieron es: "<<menor<<endl;
 	cout<<"=============================================="<<endl;

  cout<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
      <<"Matricula: 100544259"<<endl<<endl;

   if(opcion){
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    unidad_Cuatro();
  }
}

void unidad_Cuatro(){
  char opcion;
  system("cls");

  cout<<"\tMENU DE LA UNIDAD 3"<<endl
      <<"\t==================="<<endl<<endl;
  cout<<"1=> Maquina de bebidas"<<endl;
  cout<<"2=> Salario"<<endl;
  cout<<"3=> Zoologico"<<endl;
  cout<<"4=> Salir o Regresar a menu principal"<<endl<<endl;
  cout<<"Ingrese opcion: ";
  opcion=getch();
  switch (opcion) {
    case '1':
    maquina_Bebida();
    break;
    case '2':
    salario_Empleado();
    break;
    case '3':
    zoologico_Mono();
    break;
    case '4':
    cout<<"Que desea realizar [ENTER]salir, [SCAPE]retroceder"<<endl<<endl;
    break;
    default:
    unidad_Cuatro();
    break;
  }
  opcion=getch();
  if(opcion==8){
    menu_principal();
  }
}

///////////////////UNIDAD 5//////////////////////////

////////////HELLO 1///////////////

void encabezado_Program(){
  system("cls");
  cout<<"==================="<<endl;
  cout<<"INGRESE OPERACION"<<endl;
  cout<<"==================="<<endl;
}

class Math_Functions{
private:
    double result;

public:
    double suma(double, double);
    double resta(double, double);
    double multiplicacion(double, double);
    double division(double, double);
    double residuo(int,int);
    double potenciacion(double, double);

} math;

double Math_Functions::suma(double a, double b){
    result = a + b;
    return result;
}

double Math_Functions::resta(double a, double b){
    result = a - b;
    return result;
}

double Math_Functions::multiplicacion(double a, double b){
    result = a * b;
    return result;
}

double Math_Functions::division(double a, double b){
    result = a / b;
    return result;
}

double Math_Functions::residuo(int a, int b){
  result = a % b;
  return result;

}

double Math_Functions::potenciacion(double a, double b){
    result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}

void calc_Numerica(){

  encabezado_Program();
    double a, b;
    string function;
    bool loop = 1;
    int respuesta;
    char opcion;
  do {
    if(loop)
    {
        // TODO  system("CLS");
        cin >> a;
        function = getchar();
        cin >> b;

        switch(function[0])
        {
            case '+':
            cout <<"La suma es: "<<math.suma(a, b)<<endl;
             break;
            case '-':
             cout <<"La resta es: "<<math.resta(a, b)<<endl;
             break;
            case 'x':
            cout <<"La multiplicacion es: "<<math.multiplicacion(a, b)<<endl;
             break;
            case 'X':
            cout <<"La multiplicacion es: "<<math.multiplicacion(a, b)<<endl;
             break;
            case '/':
            cout <<"La division es: "<<math.division(a, b)<<endl;
             break;
            case '%':
             cout <<"El residuo es: "<< math.residuo(a, b)<<endl;
              break;
            case '^':
            cout <<"La potencia es: "<<math.potenciacion(a, b)<<endl;
             break;
             //system("cls");
        }
      cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
          <<"Matricula: 100544259"<<endl<<endl;

        system("PAUSE");
        system("cls");
        encabezado_Program();
    }
    if (opcion) {
      cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
      respuesta=getch();
      cout<<endl;
    }
  } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    unidad_Cinco();
  }
}

///////////////HELLO 2///////////////

long fibonacci(long);

void serie_Fibonacci(){

  int terminoBuscado;
  long cantidad;
  int respuesta;
  int opcion;

do {
  system("cls");
  cout<<"SERIE FIBONACCI"<<endl;
  cout<<"==============="<<endl;
  cout<<"==============="<<endl;

  cout<<"\nIntroduzca el termino: ";cin>>terminoBuscado;

  cout<<"\n";

  cantidad=fibonacci(terminoBuscado);
  cout<<"Cantidad: "<<cantidad<<endl;

  cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
      <<"Matricula: 100544259"<<endl<<endl;

  if (opcion) {
    cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
    respuesta=getch();
    cout<<endl<<endl;
  }
 } while(respuesta==13);
 opcion=getch();
 if(opcion==8){
   unidad_Cinco();
 }
}
long fibonacci(long terminoBuscado){
  long a=0, b=1, c=0;
  int cont=1;
  while(cont < terminoBuscado){
    a=c;
    c=a+b;
    b=a;
    cont++;
  }
  return c;
  system("PAUSE");
  cout<<"DOBLE ENTER PARA SALIR";
}

///////////HELLO 3/////////////////

void displayMenu ();
char getComputerOption();
string checkOptions (char optionUser, char optionComputer);
bool inputOK (char);

void Piedra_Papel_Tijera(){
  char optionUser;
  char computer;
  string move;
  char opcion;
  int respuesta;

 do {
   system("cls");
   displayMenu();
   cin>>optionUser;
   if (inputOK(optionUser) == true)
   {
     computer = getComputerOption();
     move = checkOptions(optionUser, computer);
     cout<<move<<"\n";
     system("pause");
     system("cls");
   }
   else
   {
     std::cout<<"Opcion no permitida";
   }
   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if (opcion) {
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
 opcion=getch();
 if (opcion==8) {
   unidad_Cinco();
 }
}

bool inputOK (char optionUser)
{
	bool status;

	if (optionUser == 'P' || optionUser == 'p')
	{
		status = true;
	}
	else if (optionUser == 'A' || optionUser == 'a')
	{
		status = true;
	}
	else if (optionUser == 'T' || optionUser == 't')
	{
		status = true;
	}
	else if (optionUser == 'S' || optionUser == 's')
	{
		exit (-1);
	}
	else
	{
		status = false;
	}

	return status;
}
void displayMenu ()
{
  cout<<"====================="<<endl;
	cout<<"Pieda, Papel o Tijera"<<endl;
	cout<<"====================="<<endl<<endl;

	cout<<"============"<<endl;
	cout<<"Piedra  =  P"<<endl;
	cout<<"Papel  =  A"<<endl;
	cout<<"Tijera =  T"<<endl;
	cout<<"Salir  =  S"<<endl;
	cout<<"============"<<endl;

	cout<<"\nOpcion: "<<endl;

}
char getComputerOption()
{
	char ComputerOption;
	srand (time(0));
	int optionComputer = 1 + rand()%(3);
	if (optionComputer == 1)
	{
		optionComputer = 'T';
	}
	else if (optionComputer == 2)
	{
			optionComputer = 'A';
	}
		else if (optionComputer == 3)
	{
			optionComputer = 'P';
	}
	return optionComputer;
}
string checkOptions (char optionUser, char optionComputer)
{
	string Outcome;
	if (optionUser == 'p' || optionUser == 'P' && optionComputer == 'T')
	{
		Outcome = "Gano!";
	}
	else if (optionUser == 'T' || optionUser == 't' && optionComputer == 'A')
	{
		Outcome = "Gano!";
	}
	else if (optionUser == 'A' || optionUser == 'a' && optionComputer == 'P')
	{
		Outcome = "Gano!";
	}
	else if (optionUser == optionComputer)
	{
		Outcome = "Empate";
	}
	else
	{
		Outcome = "Perdio";
	}
	return Outcome;
}


void unidad_Cinco(){
  system("cls");
  char opcion;

  cout<<"\n\t MENU UNIDAD 5"<<endl
      <<"\t================"<<endl<<endl;
  cout<<"1=> Calculadora aritmetica"<<endl
      <<"2=> Serie fibonacci"<<endl
      <<"3=> Piedra, papel, tijera"<<endl
      <<"4=> Salir"<<endl<<endl;

  cout<<"Ingrese opcion: ";
  opcion=getch();
  switch (opcion) {
    case '1':
    calc_Numerica();
    break;
    case '2':
    serie_Fibonacci();
    break;
    case '3':
    Piedra_Papel_Tijera();
    break;
    case '4':
    cout<<"Que desea realizar [ENTER]salir, [SCAPE]retroceder"<<endl<<endl;
    break;
    default:
    unidad_Cinco();
    break;
  }
  opcion=getch();
  if (opcion==8) {
    menu_principal();
  }

}

//////////////UNIDAD 6////////////////

////////HELLO 1////

int *Crear_Arreglo(int);
void Leer_Arreglo(int *, int);
int *Nuevo_Arreglo(int *, int);

void Arreglo_Copia(){
  int size;
  int respuesta;
  char opcion;

 do {
   system("cls");
  cout<<"CANTIDAD DE ELEMENTOS DEL ARREGLO: ";cin>>size;
 	cout<<"\n";

 	int *arreglo;
 	arreglo=Crear_Arreglo(size);
 	Leer_Arreglo(arreglo, size);

 	int *nuevoarreglo;
 	nuevoarreglo=Nuevo_Arreglo(arreglo,size);

 	cout<<"\n=================================="<<endl
 	    <<"COPIA DE LOS ELEMENTOS DEL ARREGLO"<<endl
 	    <<"=================================="<<endl<<endl;

 	for (int indice=0; indice<size; indice++){
 		cout<<indice+1<<": "<<*(nuevoarreglo + indice)<<"\n";
 	}
  /*cout<<endl<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
  respuesta=getch();*/

 	delete [] nuevoarreglo;
 	delete [] arreglo;

  cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
      <<"Matricula: 100544259"<<endl<<endl;

   if(size){
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
 opcion==getch();
 if(opcion==8){
   unidad_Seis();
 }
}

int *Crear_Arreglo(int size){
	int *arreglo=new int[size];
	return arreglo;
}

void Leer_Arreglo (int *arreglo, int size){
	for (int indice=0; indice<size; indice++){
		cout<<indice+1<<": ";cin>>arreglo[indice];
	}
}

int *Nuevo_Arreglo (int *arreglo, int size){
	int *nuevoarreglo=new int[size];

	for (int indice=0; indice<size; indice++){
		*(nuevoarreglo+indice)=arreglo[(size-1)-indice];
	}
	return nuevoarreglo;
}

///////////////HELLO 2///////////////

int * Crear_Arreglo_A (int);
void Leer_Arreglo_A (int *, int);
int moda (int *, int);

void Arreglo_Moda(){

  int size,Moda;
  int respuesta;
  char opcion;

 do {
   system("cls");
   cout<<"======="<<endl
 	    <<"LA MODA"<<endl
 	    <<"======="<<endl<<endl;

 	cout<<"CANTIDAD DE ELEMENTOS: ";cin>>size;

 	int * arreglo = Crear_Arreglo_A(size);
 	Leer_Arreglo_A(arreglo, size);
 	Moda = moda(arreglo, size);

 	cout<<endl<<endl;

 	cout<<"LA MODA ES: "<<Moda<<endl<<endl;

  cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
      <<"Matricula: 100544259"<<endl<<endl;

   if (Moda) {
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
 opcion=getch();
 if (opcion==8) {
   unidad_Seis();
 }
}

int * Crear_Arreglo_A(int size){
	int * arreglo = new int[size];
	return arreglo;
}
void Leer_Arreglo_A (int * arreglo, int size){
	for (int indice=0; indice<size; indice++){
		cout<<indice+1<<": ";cin>>arreglo[indice];
	}
}

int moda (int * arreglo, int size){
	int moda, calcmoda[size] = {};
    for(int indice=0; indice<size; indice++){
        for(int index=0; index<size; index++){
            if(*(arreglo+indice)== *(arreglo+index)){
                calcmoda[indice]++;
            }
        }
    }
    for (int indice=0; indice<size; indice++){
        for (int index=0; index<size; index++){
			if ((calcmoda[indice]>1)){
				if (calcmoda[indice]>calcmoda[index]){
                	moda = *(arreglo+indice);
            	}
			}
        }
    }
	return moda;
}

//////////////HELLO 3///////////////

double *crearArreglo(int);
void leePuntuaciones (double *, int);
void ordena(double *, int);
double calculaPromedio(double *, int);

void Arreglos_Grandes(){
  int size;
	double promedio;
  int respuesta;
  char opcion;

 do {
   system("cls");
   //cout<<"=========================="<<endl;
 	cout<<"Cantidad de puntuaciones: ";cin>>size;
 	cout<<"=========================="<<endl;
 	cout<<"=========================="<<endl<<endl;

 	double *arreglo;

 	arreglo = crearArreglo(size);
 	leePuntuaciones(arreglo, size);
 	ordena(arreglo, size);
 	promedio = calculaPromedio(arreglo, size);

 	cout<<"\n\n========="<<endl;
 	cout<<"Promedio: "<<promedio<<endl;
     cout<<"========="<<endl;

 	delete [] arreglo;
   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if (promedio) {
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
 opcion=getch();
 if(opcion==8){
   unidad_Seis();
 }
}

double * crearArreglo(int size){
	double *arreglo;
	arreglo = new double[size];

	return arreglo;
}

void leePuntuaciones (double * arreglo, int size){
	for (int indice=0; indice < size; indice++){

		cout<<"Puntuaciones: ";cin>>arreglo[indice];
	}
}

void ordena(double * arreglo, int size){
	bool swap;
	int temp;
 	do{
 		swap = false;
 		for (int indice=0; indice<(size-1); indice++){

 			if (arreglo[indice] > arreglo[indice + 1]){

		 	temp=arreglo[indice];
 			arreglo[indice]=arreglo[indice + 1];
 			arreglo[indice+1]=temp;

 			swap=true;
 			}
 		}
 	} while (swap);

 	cout<<"\n=========================="<<endl;
	cout<<"Arreglo de forma ascedente"<<endl;
    cout<<"=========================="<<endl;

	for(int indice=0; indice<size; indice++){

		cout<<"\nPuntuaciones: "<<arreglo[indice];
	}
}

double calculaPromedio(double *arreglo, int size){
	double promedio = 0;

	for(int indice=0; indice<size; indice++){

		promedio = promedio + arreglo[indice];
	}
	return promedio / size;
}

/////////////HELLO 4/////////////////

int * Crear_arreglo(int);
void Lee_Arreglo (int *, int);
int * Nuevo_Arreglo(int *, int, int);

void Redimencionar_Arreglo(){

  int size,sizeArr;
  int respuesta;
  char opcion;

 do {
   system("cls");
  cout<<"CANTIDAD DE ELEMENTOS: ";cin>>size;
 	cout<<"\n";

 	int *arreglo=Crear_arreglo(size);
 	Lee_Arreglo(arreglo,size);

 	cout<<"\nCANTIDAD DEL NUEVO ARREGLO: ";cin>>sizeArr;

 	int * nuevoarreglo;
 	nuevoarreglo=Nuevo_Arreglo(arreglo,size,sizeArr);

 	cout<<"\n";

 	cout<<"============="<<endl;
 	cout<<"NUEVO ARREGLO"<<endl;
 	cout<<"============="<<endl<<endl;

 	for (int indice=0; indice<sizeArr; indice++){
 		cout<<indice+1<<": "<<nuevoarreglo[indice]<<"\n";
 	}

 	delete [] arreglo;
 	delete [] nuevoarreglo;

   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if (nuevoarreglo) {
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    unidad_Seis();
  }
}

int * Crear_arreglo (int size){

	int *arreglo;
	arreglo=new int[size];
	return arreglo;
}

void Lee_Arreglo (int * arreglo, int size){

	for (int indice=0; indice<size; indice++)
	{
		cout<<indice+1<<": ";cin>>arreglo[indice];
	}
}

int * Nuevo_Arreglo (int * arreglo, int size, int sizeArr){

	int * nuevoarreglo;
	nuevoarreglo=new int[sizeArr];

	for (int indice=0; indice<sizeArr; indice++){
		if (indice<size){
			nuevoarreglo[indice]=arreglo[indice];

		}else{
			nuevoarreglo[indice]=0;
		}
	}
	return nuevoarreglo;
}

void unidad_Seis(){
  system("cls");
  char opcion;

  cout<<"\n\tMENU UNIDAD 6"<<endl
      <<"\t=============="<<endl<<endl
      <<"1=> Arreglo_copia inverso"<<endl
      <<"2=> Arreglo_moda"<<endl
      <<"3=> Arreglos inverso y promediador"<<endl
      <<"4=> Redimencionar arreglos"<<endl
      <<"5=> Salir"<<endl<<endl;

  cout<<"Ingrese opcion: ";
  opcion=getch();
  switch (opcion) {
    case '1':
    Arreglo_Copia();
    break;
    case '2':
    Arreglo_Moda();
    break;
    case '3':
    Arreglos_Grandes();
    break;
    case '4':
    Redimencionar_Arreglo();
    break;
    case '5':
    cout<<"Que desea realizar [ENTER]salir, [SCAPE]retroceder"<<endl<<endl;
    break;
    default:
    unidad_Seis();
    break;
  }
  opcion=getch();
  if(opcion==8){
    menu_principal();
  }
}

////////////////////////UNIDAD 7//////////////////////

void Ficheros_arch(){

  fstream archivo;
  string contenidoLinea,nombre;
  int linea=1, respuesta;
  char opcion;

  system("cls");

  cout<<"RECUERDE PONER .txt AL FINAL DE CADA ARCHIVO"<<endl<<endl;
  cout<<"Ingrese nombre del archivo y tambien incluir(.txt): ";
  getline(cin,nombre);

  archivo.open(nombre,ios::in);

  for(int i=1; !archivo.eof();i++){
    getline(archivo, contenidoLinea);
    cout<<linea<<":"<<contenidoLinea<<endl;
    linea++;
    if(i==24){
      if(i=0);
      //getch();
      system("pause");
      system("cls");
    }
  }
  cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
      <<"Matricula: 100544259"<<endl<<endl;
  if(linea){
    cout<<" [SCAPE]retroceder o cualquier tecla para salir";
    respuesta=getch();
    cout<<endl<<endl;
  }
  opcion==getch();
  if (opcion==8) {
    unidad_Siete();
  }
}

void unidad_Siete(){
  system("cls");
  char opcion;

  cout<<"\n\tUNIDAD 7"<<endl
      <<"\t==============="<<endl<<endl
      <<"1=> Ficheros"<<endl
      <<"2=> Salir"<<endl<<endl;

  cout<<"Ingrese opcion: ";
  opcion=getch();
  switch (opcion) {
    case '1':
    Ficheros_arch();
    break;
    case '2':
    cout<<"Que desea realizar [ENTER]salir, [SCAPE]retroceder"<<endl<<endl;
    break;
    default:
    unidad_Siete();
    break;
  }
  opcion=getch();
  if(opcion==8){
    menu_principal();
  }
}

//////////PRACTICA FINAL//////////////////

///////HELLO 1////////////

void numeros_Multiplos(){
  int multiplo,respuesta;
  char opcion;

 do {
   system("cls");
   cout<<"================="<<endl;
   cout<<"NUMEROS MULTIPLOS"<<endl;
   cout<<"================="<<endl<<endl;

   cout<<"Escriba un numero del 2 al 10: ";cin>>multiplo;
   cout<<"\n";

   if(multiplo<2||multiplo>10){
     cout<<"El numero no es valido, tiene que ser del 2 al 10\n";
     cout<<"Intente de nuevo: ";cin>>multiplo;
   }
   for(int i=1;i<=500;i++){
     if(i%multiplo==0){
       cout<<"["<<i<<"]"<<endl;
     }
   }
   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if(multiplo){
     cout<<"Que desea realizar [ENTER]salir, [SCAPE]retroceder"<<endl<<endl;
     respuesta==getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    Practica_Final();
  }
}

//////////////HELLO 2/////////////

void Ascendente_Descendente(){
  int numCant;
  char ordenar;
  int respuesta;
  char opcion;

 do {
   system("cls");
   cout<<"Ingrese cantidad de numeros: ";cin>>numCant;

   double contNumeros[numCant];

   for(int i=0;i<numCant;i++){
     cout<<"Numero "<<i+1<<": ";cin>>contNumeros[i];
   }
   cout<<"ASCENDENTE(A) O DESCENDENTE(D): ";cin>>ordenar;

   while(!(toupper(ordenar)=='A'|| toupper(ordenar)=='D')){
     cout<<"Entrada no valida, intente de nuevo: ";cin>>ordenar;
   }
   int aux =0;
   if(toupper(ordenar)=='A'){
     for(int i=0;i<numCant;i++){
       for(int j=i;j<numCant;j++){
         if(contNumeros[i]>contNumeros[j]){
           aux=contNumeros[i];
           contNumeros[i]=contNumeros[j];
           contNumeros[j]=aux;
         }
       }
     }
   }
   if(toupper(ordenar)=='D'){
     for(int i=0;i<numCant;i++){
       for(int j=i;j<numCant;j++){
         if(contNumeros[i]<contNumeros[j]){
           aux=contNumeros[i];
           contNumeros[i]=contNumeros[j];
           contNumeros[j]=aux;
         }
       }
     }
   }
   for(int i=0;i<numCant;i++){
     cout<<contNumeros[i]<<" "<<"\n";
   }
   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if(ordenar){
     cout<<"Que desea realizar [ENTER]salir, [SCAPE]retroceder"<<endl<<endl;
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta);
   opcion=getch();
   if(opcion==8){
     Practica_Final();
   }
}

/////////////HELLO 3/////////////////

void tabla_Multiplicacion(){
  int numero,resultado,n,respuesta;
  char opcion;

 do {
   system("cls");
   cout<<"======================="<<endl;
   cout<<"tabla de multiplicacion"<<endl;
   cout<<"======================="<<endl<<endl;

   cout<<"Digite un numero: ";
   cin>>numero;
   cout<<"\n\n";

   cout<<"La tabla de multiplicacion del "<<numero<<" es: ";

   cout<<"\n\n";

   for (n=1;n<=12;n++){
     resultado = n*numero;
     cout<<n<<"x"<<numero<<"="<<resultado<<"\n";
   }

   cout<<"\n";

   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if(resultado){
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
  opcion=getch();
  if(opcion==8){
    Practica_Final();
  }
}

////////////////HELLO 4//////////////

void Calc_sueldos(){
  double sueldos, suma=0, promedio,cont=0;
  int respuesta;
  char opcion;

 do {
   system("cls");
   cout<<"======================="<<endl;
   cout<<"Ingrese los 10 sueldos:"<<endl;
   cout<<"======================="<<endl<<endl;

   for(int i=1;i<=10;i++){
     cout<<"sueldo: ";cin>>sueldos;
      suma=suma+sueldos;
      if(sueldos>7000){
        cont++;
      }
   }
   cout<<"\n";
   promedio=suma/10;
   cout<<"La suma es: "<<suma<<endl;
   cout<<"El promedio es: "<<promedio<<endl;
   cout<<"Cantidad de sueldos superiores a 7000 pesos: "<<cont;

   cout<<"\n";

   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if(cont){
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
  opcion=getch();
  if(opcion==8){
    Practica_Final();
  }
}

///////////////////HELLO 5///////////////////

void tipo_Triangulo(){
  double lad1,lad2,lad3;
  char opcion;
  int respuesta;

 do {
   system("cls");
   cout<<"============================"<<endl;
   cout<<"DEFINIR EL TIPO DE TRIANGULO"<<endl;
   cout<<"============================"<<endl<<endl;

   cout<<"Escriba primer lado: ";cin>>lad1;
   cout<<"Escriba segundo lado: ";cin>>lad2;
   cout<<"Escriba tercer lado: ";cin>>lad3;

   cout<<"\n\n";

   if(lad1>lad2+lad3||lad2>lad1+lad3||lad3>lad1+lad2){

      if (lad1==lad2&&lad2==lad3){
       cout<<"El triangulo es equilatero"<<endl;
     }

     if(lad1==lad2||lad2==lad3||lad1==lad3){
       cout<<"El triangulo es isoceles"<<endl;
     }
     if(lad1!=lad2 && lad2!=lad3 && lad1!=lad3){
       cout<<"El triangulo es escaleno"<<endl;
     }
   }else{
     cout<<"LOS LADOS NO PERTENECEN A UN TRIANGULOS"<<endl;
   }

   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if(lad1){
     cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
     respuesta=getch();
     cout<<endl<<endl;
   }
 } while(respuesta==13);
  opcion=getch();
  if(opcion==8){
    Practica_Final();
  }
}

/////////////////////HELLO 6///////////////

void honorario_Trabajo(){
  int hora,extra,salario,rep;
  int respuesta;
  char opcion;

	do{
    system("cls");
    cout<<"======================="<<endl;
    cout<<"HORAS TRABAJADAS Y PAGO"<<endl;
    cout<<"======================="<<endl<<endl;

		hora=0;
		extra=0;
		salario=0;

		cout<<"Horas del trabajador: ";cin>>hora;

		for(int i=1;i<=hora;i++)
		{
			if(i<=35)
			{
				salario+=(1*15);
			}
			else if(i>35)
			{
				salario+=(1*25);
			}
		}

    cout<<"\nSu salario es: "<<salario<<endl;

    cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
        <<"Matricula: 100544259"<<endl<<endl;

    if (salario) {
      cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
      respuesta=getch();
      cout<<endl<<endl;
    }

	}while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    Practica_Final();
  }
}

/////////////HELLO 7/////////////////

void det_Mayor(){
  int Num, Nunmayor=0,cont = 0;
  int respuesta;
  char opcion;

   system("cls");
   cout<<"====================================================="<<endl;
   cout<<"INTRODUZCA 3 NUMEROS PARA DETERMINAR CUAL ES EL MAYOR"<<endl;
   cout<<"====================================================="<<endl;

   while(cont<3)
   {
     cin>>Num;
     if(Num>Nunmayor)
     {
       Nunmayor=Num;
     }
     cont++;
   }
   cout<<"\nNumero mayor: "<<Nunmayor;

   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if (Nunmayor) {
     cout<<"[SCAPE]retroceder o cualquier tecla para salir";
     respuesta=getch();
     cout<<endl<<endl;
   }
  opcion=getch();
  if (opcion==8) {
    Practica_Final();
  }
}

////////////HELLO 8////////////////

void Serie_fibonacci(){
  int n,x=0,y=1,z=0;
  int respuesta;
  char opcion;

   system("cls");
   cout<<"==============="<<endl;
   cout<<"SERIE FIBONACCI"<<endl;
   cout<<"==============="<<endl<<endl;

   cout<<"digite el numero de elementos: ";cin>>n;

   cout<<"1 ";
   for(int i=0;i<n;i++){
     z=x+y;
     cout<<z<<" ";
     x=y;
     y=z;
   }
   cout<<"\n";

   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

   if(n){
     cout<<"[SCAPE]retroceder o cualquier tecla para salir";
     respuesta=getch();
     cout<<endl<<endl;
   }
  opcion=getch();
  if (opcion==8) {
    Practica_Final();
  }
}

////////////////////HELLO 9//////////////////////

void num_Propiedad(){
  int num, cont, rep;
  double result,fact=1,cuadrado;
  int respuesta;
  char opcion;

 do {
   system("cls");
   fact =1;
   cout<<"\nDigite un numero: ";cin>>num;
   cout<<"\n\n";
   cuadrado=num*num;

   for(int i=1;i<=num;i++){
     if(num%i==0){
       cont++;
     }
   }

   for(int i=1;i<=num;i++){
     fact*=i;
   }

   cout<<"Cuadrado: "<<cuadrado<<endl;

   if(num%2==0){
     cout<<"Es par"<<endl;
   }else{
     cout<<"Es impar"<<endl;
   }

   if(num>0){
     cout<<"Es positivo"<<endl;
   }else{
     cout<<"Es negativo"<<endl;
   }

   if(num%2==0){
     cout<<"No es primo"<<endl;
   }else{
     cout<<"Es primo"<<endl;
   }

   cout<<"Factorial: "<<fact;

   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

    if(num){
      cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
      respuesta=getch();
      cout<<endl<<endl;
    }
 } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    Practica_Final();
  }
}

/////////////////////HELLO 10////////////////////////

void inverso_Num(){
  int num,respuesta;
  char opcion;

 do {
   system("cls");
   cout<<"Cantidad de numeros: ";cin>>num;
   cout<<"\n";

   double arreglo[num];
   for(int i=0;i<num;i++){
     cout<<"Inserte numero: ";cin>>arreglo[i];
   }

   cout<<"\n==============="<<endl;
   cout<<"ARREGLO INVERSO"<<endl;
   cout<<"==============="<<endl<<endl;

   for(int j=num-1;j>=0;j--){
     cout<<"\t"<<arreglo[j]<<"\n";
   }

   cout<<endl<<endl<<"Nombre: Anderson De Jesus Frias Rodriguez"<<endl
       <<"Matricula: 100544259"<<endl<<endl;

    if(arreglo){
      cout<<"Que desea realizar [ENTER]seguir, [SCAPE]retroceder";
      respuesta=getch();
      cout<<endl<<endl;
    }
 } while(respuesta==13);
  opcion=getch();
  if (opcion==8) {
    Practica_Final();
  }
}

void Practica_Final(){
  system("cls");
  char opcion;

  cout<<"\n\tMENU PRACTICA FINAL"<<endl
      <<"\t=============="<<endl<<endl
      <<"a)=> Numeros multiplos del 2 al 10"<<endl
      <<"b)=> Numeros ascendente y descendente"<<endl
      <<"c)=> Tabla de multiplicaion del 1 al 12"<<endl
      <<"d)=> Calculadora de sueldos"<<endl
      <<"e)=> Definir tipo de triangulo"<<endl
      <<"f)=> Honorario de trabajo"<<endl
      <<"g)=> Determindar numero mayor"<<endl
      <<"h)=> Serie fibonacci"<<endl
      <<"i)=> Propiedades de un numero"<<endl
      <<"j)=> Inverso de varios numeros"<<endl
      <<"k)=> Salir"<<endl<<endl;

  cout<<"Ingrese opcion: ";
  opcion=getch();

  switch (opcion) {
    case 'a':
    numeros_Multiplos();
    break;
    case 'b':
    Ascendente_Descendente();
    break;
    case 'c':
    tabla_Multiplicacion();
    break;
    case 'd':
    Calc_sueldos();
    break;
    case 'e':
    tipo_Triangulo();
    break;
    case 'f':
    honorario_Trabajo();
    break;
    case 'g':
    det_Mayor();
    break;
    case 'h':
    Serie_fibonacci();
    break;
    case 'i':
    num_Propiedad();
    break;
    case 'j':
    inverso_Num();
    break;
    case 'k':
    cout<<"Que desea realizar [ENTER]salir, [SCAPE]retroceder"<<endl<<endl;
    break;
    default:
    Practica_Final();
    break;
  }
  opcion=getch();
  if (opcion==8) {
    menu_principal();
  }
}

////////////////MENU PRINCIPAL//////////////////////////
void menu_principal(){
  system("cls");
  char opcion;

  cout<<"\n\tMENU PRINCIPAL"<<endl
      <<"\t=============="<<endl<<endl
      <<"1=> MENU UNIDAD 1"<<endl
      <<"2=> MENU UNIDAD 2"<<endl
      <<"3=> MENU UNIDAD 3"<<endl
      <<"4=> MENU UNIDAD 4"<<endl
      <<"5=> MENU UNIDAD 5"<<endl
      <<"6=> MENU UNIDAD 6"<<endl
      <<"7=> MENU UNIDAD 7"<<endl
      <<"8=> MENU PRACTICA FINAL"<<endl
      <<"9=> Salir"<<endl<<endl;

  cout<<"Ingrese opcion: ";
  opcion=getch();
  switch (opcion) {
    case '1':
    unidad_uno();
    break;
    case '2':
    teoria_unidaDos();
    break;
    case '3':
    unidad_Tres();
    break;
    case '4':
    unidad_Cuatro();
    break;
    case '5':
    unidad_Cinco();
    break;
    case '6':
    unidad_Seis();
    break;
    case '7':
    unidad_Siete();
    break;
    case '8':
    Practica_Final();
    break;
    case '9':
    cout<<endl<<"Ha decidido finalizar el programa,(OJO), precione simultaneamente [ENTER]"<<endl
        <<"Esto cuando entre a todos los programas-- :)"<<endl<<endl;
    break;
    default:
    system("cls");
    menu_principal();
    break;
  }
}

int main(){

  menu_principal();

  getch();
  return 0;
}
