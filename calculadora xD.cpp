#include<iostream>
#include<math.h>

using namespace std;


int main()
{
	char  salir = 'n'; 
	  
	float numero1, numero2, resultado;

	int operacion;

	while (salir == 'n')
	{
        cout<<"menu de operaciones\n";

		cout<<"1.suma\n";
		cout<<"2.resta\n";
		cout<<"3.multiplicacion\n";
		cout<<"4.division\n";
		cout<<"5.raiz\n";
		cout<<"6.exponente\n";
		
		cin>>operacion;

		cout<<"ingresa el primer numero\n";
		cin>>numero1;
        cout<<"ingresa el segundo numero\n";
		cin>>numero2;
		 
		switch (operacion)
		{
		case 1:
			cout<<"el resultado de la suma es:\n " << numero1<< " + "  << numero2 << "es:\n" << numero1 + numero2 << "\n";
		    break;
        case 2:
			cout<<"el resultado de la resta es:\n"<<numero1 << " - " <<numero2 << "es\n" << numero1 - numero2 <<"\n";
		    break;
		case 3:
			cout<<"el resultado de la multipliccion es:\n" << numero1 << " * " << numero2 << "es\n" << numero1 * numero2 << "\n";
			break;
		case 4:
			cout<<"el resultado  de la division es:\n" << numero1 << "/" << numero2  << "es:\n" << numero1 / numero2 << "\n";
			break;

		case 5:
			cout<<" el resultado de la raiz es:\n"<<numero1 <<"raiz" <<numero2 << "es\n" <<  pow(numero1, 1/numero2) << "\n";
			break;

		case 6:
			cout<<"el resultado del exponente es:\n" << numero1 <<" ^" << numero2 << "es/n"<<pow(numero1, numero2) <<"\n";
			break;

		default:
			break;

		}
		cout<<"\n¿quieres salir del programa ' (y/n)";
		cin>>salir;
		system("cls");

	}





}