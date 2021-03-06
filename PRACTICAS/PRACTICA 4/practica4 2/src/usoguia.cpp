#include "guiatlf.h"
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "Dime el nombre del fichero con la guia" << endl;
		return 0;
	}
	ifstream f(argv[1]);
	if (!f)
	{
		cout << "No puedo abrir el fichero " << argv[1] << endl;
		return 0;
	}

	Guia_Tlf g;

	f >> g;
	cout << "La guia insertada " << g << endl;
	cin.clear();
	cout << "Dime un nombre sobre el que quieres obtener el telefono" << endl;
	string n;
	while (getline(cin, n))
	{
		cout << "Buscando " << n << "...." << endl;
		string tlf = g.gettelefono(n);
		if (tlf == "")
		{
			cout << "No existe ese nombre en la guia" << endl;
		}
		else
			cout << "El telefono es " << tlf << endl;
		cout << "[Pulse CTRL+D para finalizar] Dime un nombre sobre el que quieres obtener el telefono" << endl;
	}
	cin.clear();

	cout << "Dime el nombre que quieres borrar" << endl;

	while (getline(cin, n))
	{
		g.borrar(n);
		cout << "Ahora la guia es:" << endl;
		cout << g << endl;
		cout << "[Pulse CTRL+D para finalizar] Dime el nombre que quieres borrar" << endl;
	}

	cin.clear();
	Guia_Tlf otraguia;
	cout << "Introduce otra guia ([Pulse CTRL+D para finalizar])" << endl;
	cin >> otraguia;
	cin.clear();
	Guia_Tlf un = g + otraguia;
	Guia_Tlf dif = g - otraguia;
	Guia_Tlf interseccion = g * otraguia;
	cout << endl
		 << "La union de las dos guias: " << un << endl;

	cout << endl
		 << "La diferencia de las dos guias:" << dif << endl;
	cout << endl
		 << "La interseccion de las dos guias:" << interseccion << endl;

	cout << endl
		 << "Dime un nombre para establecer los previos" << endl;
	cin >> n;
	string tlf = g.gettelefono(n);
	Guia_Tlf p = g.previos(n, tlf);
	cout << endl
		 << "Los nombre previos: " << p << endl;

	cout << "Listando la guia con iteradores:" << endl;
	Guia_Tlf::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << *it << endl;

	it = g.begin();
	it = it+5;
	cout << endl << "Cinco posiciones mas alla: " << *it << endl;

	it = g.end();
	it = it - 5;
	cout << endl << "Tres posiciones menos alla: " << *it << endl;

	char letra = 'C';

	Guia_Tlf y = g.buscarPorLetraInicial(letra);
	cout << "\nNombres con la letra " << letra << " : " << endl;
	cout << y << endl;

	int numero = 2;

	Guia_Tlf z = g.buscarPorPrimerNumero(numero);
	cout << "\nNumeros empezando por " << numero << " : " << endl;
	cout << z << endl;

	string nombre1 = "Fernando Gonzalez Pro", nombre2 = "Luis Sanlucas Tris";
	Guia_Tlf h = g.IntervaloNombre(nombre1, nombre2);

	cout << "\nContactos entre " << nombre1 << " y " << nombre2 << endl;
	cout << h << endl;

}
