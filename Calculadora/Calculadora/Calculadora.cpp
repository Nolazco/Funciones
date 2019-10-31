#include <iostream>
#include <string>
using namespace std;
void menu();
void suma();
void resta();
void multi();
void div();
void pausa();
float a, b, c;
int main()
{
	menu();
	return 0;
}
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("color 46"); //system("color 46") bandera de la union sovietica
		system("cls");
		cin.clear();
		cout << "Calculadora" << endl;
		cout << "-----------" << endl << endl;
		cout << "\t1 .- Sumar" << endl;
		cout << "\t2 .- Restar" << endl;
		cout << "\t3 .- Multiplicar" << endl;
		cout << "\t4 .- Dividir" << endl;
		cout << "\t5 .- Salir" << endl << endl;
		cout << "Elije una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
			pausa();
			break;
		case '2':
			system("cls");
			resta();
			pausa();
			break;
		case '3':
			system("cls");
			multi();
			pausa();
			break;
		case '4':
			system("cls");
			div();
			pausa();
			break;
		case '5':
			bandera = true;
			cout << endl;
			cout << "Hasta la proxima" << endl;
			break;
		default:
			system("cls");
			cout << "Opcion no valida." << endl;
			pausa();
			break;
		}
	} while (bandera != true);
}
void suma()
{
	cout << "Has elegido sumar." << endl;
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	c = a + b;
	cout << "El resultado es: " << c << endl;
}
void resta()
{
	cout << "Has elegido restar." << endl;
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	c = a - b;
	cout << "El resultado es: " << c << endl;
}
void multi()
{
	cout << "Has elegido multiplicar." << endl;
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	c = a * b;
	cout << "El resultado es: " << c << endl;
}
void div()
{
	cout << "Has elegido dividir." << endl;
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	c = a / b;
	cout << "El resultado es: " << c << endl;
}
void pausa()
{
	cout << "Pulsa una tecla para continuar...";
	getwchar();
	getwchar();
}