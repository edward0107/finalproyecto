#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Cliente.h"
#include "Puestos.h"
#include "marcas.h"
#include "preveedores.h"
#include "productos.h"
#include "empleados.h"
#include "Compras.h"

#include "detalle_ventas.h"
#include "fact.h"

using namespace std;
void  menuPrincipal(Cliente c) {
	int menuS;

	do {
		cout << "\t\t\t*******" << endl;
		cout << "\t\t\t\t     .: CRUD MENU CLIENTES :.    " << endl << endl;
		cout << "\t\t\t 1.  CREAR NUEVO CLIENTE" << endl;
		cout << "\t\t\t 2.  LEER CLIENTE" << endl;
		cout << "\t\t\t 3.  ACTUALIZAR CLIENTE" << endl;
		cout << "\t\t\t 4.  ELIMINAR CLIENTE" << endl;
		cout << "\t\t\t 5.  SALIR" << endl << endl;
		cout << "\t\t\t*******" << endl;

		cout << "\nINGRESE UNA OPCION: " << endl;
		cin >> menuS;
		switch (menuS) {
		case 1:
			system("cls");
			c.crear();
			system("pause");
			break;
		case 2:
			system("cls");
			c.leer();
			system("pause");
			break;
		case 3:
			c.actualizar();
			system("pause");
			break;
		case 4:
			system("cls");
			c.eliminar();
			system("pause");
			break;
		case 5:
			cout <<"Ha salido Exitosamente..." << endl;
			
			break;
		}
		system("cls");
	} while (menuS != 5);

}
void Menu_puestos(Puestos p){
	int opc2;
	do {

		cout << "\t\t\t\t     .: CRUD MENU PUESTOS :.    " << endl << endl;
		cout << "\t\t\t 1.  CREAR NUEVO PUESTO" << endl;
		cout << "\t\t\t 2.  LEER PUESTO" << endl;
		cout << "\t\t\t 3.  ACTUALIZAR PUESTO" << endl;
		cout << "\t\t\t 4.  ELIMINAR PUESTO" << endl;
		cout << "\t\t\t 5.  SALIR" << endl << endl;
		cout << "\t\t\t*******" << endl;

		cout << "\nINGRESE UNA OPCION: " << endl;
		cin >> opc2;
		switch (opc2) {
		case 1:
			system("cls");
			p.crear();
			system("pause");
			break;
		case 2:
			p.leer();
			system("pause");
			break;
		case 3:
			p.actualizar();
			system("pause");
			break;
		case 4:
			p.eliminar();
			system("pause");
			break;
		case 5:
			cout << "Ha salido Exitosamente..." << endl;
			system("pause");
			break;
		}
		system("cls");
	} while (opc2 != 5);

}
void menu_marcas(Marcas m) {
	int opc3;
	do {
		
		cout << "\t\t\t\t     .: CRUD MENU MARCAS :.    " << endl << endl;
		cout << "\t\t\t 1.  CREAR NUEVA MARCA" << endl;
		cout << "\t\t\t 2.  LEER MARCA" << endl;
		cout << "\t\t\t 3.  ACTUALIZAR MARCA" << endl;
		cout << "\t\t\t 4.  ELIMINAR MARCA" << endl;
		cout << "\t\t\t 5.  SALIR" << endl << endl;
		

		cout << "\nINGRESE UNA OPCION: " << endl;
		cin >> opc3;
		switch (opc3) {
		case 1:
			system("cls");
			m.crear();
			system("pause");
			break;
		case 2:
			m.leer();
			system("pause");
			break;
		case 3:
			m.actualizar();
			system("pause");
			break;
		case 4:
			m.eliminar();
			system("pause");
			break;
		case 5:
			cout << "Ha salido Exitosamente..." << endl;
			system("pause");
			
			break;
		}
		system("cls");
	} while (opc3 != 5);


}
void menu_proveedores(Proveedores pr) {
	int opc4;
	do {
		
		cout << "\t\t\t\t     .: CRUD MENU PROVEEDORES :.    " << endl << endl;
		cout << "\t\t\t 1.  CREAR NUEVO PROVEEDOR" << endl;
		cout << "\t\t\t 2.  LEER PROVEEDOR" << endl;
		cout << "\t\t\t 3.  ACTUALIZAR PROVEEDOR" << endl;
		cout << "\t\t\t 4.  ELIMINAR PROVEEDOR" << endl;
		cout << "\t\t\t 5.  SALIR" << endl << endl;
		

		cout << "\nINGRESE UNA OPCION: " << endl;
		cin >> opc4;
		switch (opc4) {
		case 1:
			system("cls");
			pr.crear();
			system("pause");
			break;
		case 2:
			pr.leer();
			system("pause");
			break;
		case 3:
			pr.actualizar();
			system("pause");
			break;
		case 4:
			pr.eliminar();
			system("pause");
			break;
		case 5:
			cout << "Ha salido Exitosamente..." << endl;
			system("pause");
			break;
		}
		system("cls");
	} while (opc4 != 5);
}
void menu_productos(producto pd) {
	int opc5;
	do {
		
		cout << "\t\t\t\t     .: CRUD MENU PRODUCTOS :.    " << endl << endl;
		cout << "\t\t\t 1.  CREAR NUEVO PRODUCTO" << endl;
		cout << "\t\t\t 2.  LEER PRODUCTO" << endl;
		cout << "\t\t\t 3.  ACTUALIZAR PRODUCTO" << endl;
		cout << "\t\t\t 4.  ELIMINAR PRODUCTO" << endl;
		cout << "\t\t\t 5.  SALIR" << endl << endl;

		cout << "\nINGRESE UNA OPCION: " << endl;
		cin >> opc5;
		switch (opc5) {
		case 1:
			system("cls");
			pd.crear();
			system("pause");
			break;
		case 2:
			pd.leer();
			system("pause");
			break;
		case 3:
			pd.actualizar();
			system("pause");
			break;
		case 4:
			pd.eliminar();
			system("pause");
			break;
		case 5:
			cout << "Ha salido Exitosamente..." << endl;
			system("pause");
			
			break;
		}
		system("cls");
	} while (opc5 != 5);
}

void menu_empleados(empleados emp) {
	int opc5;
	do {
		
		cout << "\t\t\t\t     .: CRUD MENU EMPLEADOS :.    " << endl << endl;
		cout << "\t\t\t 1.  CREAR NUEVO EMPLEADO" << endl;
		cout << "\t\t\t 2.  LEER EMPLEADOS" << endl;
		cout << "\t\t\t 3.  ACTUALIZAR EMPLEADOS" << endl;
		cout << "\t\t\t 4.  ELIMINAR EMPLEADO" << endl;
		cout << "\t\t\t 5.  SALIR" << endl << endl;
		

		cout << "\nINGRESE UNA OPCION: " << endl;
		cin >> opc5;
		switch (opc5) {
		case 1:
			system("cls");
			emp.crear();
			system("pause");
			break;
		case 2:
			emp.leer();
			system("pause");
			break;
		case 3:
			emp.actualizar();
			system("pause");
			break;
		case 4:
			emp.eliminar();
			system("pause");
			break;
		case 5:
			cout << "Ha salido Exitosamente..." << endl;
			system("pause");

			break;
		}
		system("cls");
	} while (opc5 != 5);
}
void menu_ventas(detalle_venta dt ) {
	int opc5;
	do {
		
		cout << "\t\t\t\t     .: CRUD VENTAS DETALLE :.    " << endl << endl;
		cout << "\t\t\t 1.  CREAR NUEVA VENTA" << endl;
		cout << "\t\t\t 2.  LEER VENTAS" << endl;
		cout << "\t\t\t 3.  ACTUALIZAR VENTA" << endl;
		cout << "\t\t\t 4.  ELIMINAR VENTA" << endl;
		cout << "\t\t\t 6.  SALIR" << endl << endl;
		

		cout << "\nINGRESE UNA OPCION: " << endl;
		cin >> opc5;
		switch (opc5) {
		case 1:
			system("cls");
			dt.crearventadetalle();
			dt.crearventa();
			system("pause");
			break;
		case 2:
			dt.leerventadetalle();
			cout << "----------------------------------------------------------------" << endl;
			dt.leerventa();
			system("pause");
			break;
		case 3:
			dt.actualizarventadetalle();
			cout << "----------------------" << endl;
			dt.actualizarventa();
			system("pause");
			break;
		case 4:
			dt.eliminarventadetalle();
			cout << "-----------------------" << endl;
			dt.eliminarventa();
			system("pause");
			break;
			
			
		case 6: 
			cout << "Ha salido Exitosamente..." << endl;
			system("pause");
			break;
	
		}
		system("cls");
	} while (opc5 != 6);
}
void compras(Compras cmp) {
	int opc6;
	do {
		
		cout << "\t\t\t\t     .: CRUD MENU COMPRAS :.    " << endl << endl;
		cout << "\t\t\t 1.  CREAR NUEVA COMPRA" << endl;
		cout << "\t\t\t 2.  LEER COMPRA" << endl;
		cout << "\t\t\t 3.  ACTUALIZAR COMPRA" << endl;
		cout << "\t\t\t 4.  ELIMINAR COMPRA" << endl;
		cout << "\t\t\t 5.  SALIR" << endl << endl;
		

		cout << "\nINGRESE UNA OPCION: " << endl;
		cin >> opc6;
		switch (opc6) {
		case 1:
			system("cls");
			cmp.crearcompra();
			system("pause");
			break;
		case 2:
			cmp.leer();
			system("pause");
			break;
		case 3:
			cmp.actualizar();
			system("pause");
			break;
		case 4:
			cmp.eliminar();
			system("pause");
			break;
		case 5:
			cout << "Ha salido Exitosamente..." << endl;
			

			break;
		}
		system("cls");
	} while (opc6 != 5);
}

void factu(fact f) {
	f.ingresarfech();
	f.leer2();
	cout << "\t\t\t\t";  f.datosfact();
	  f.direccion();
	cout << "serie "; f.serie();
	cout << "         ------------------------PRODUCTO----------------------------------------    " << endl;
	f.productos(); f.cantidad();
	cout << "Gracias por su vista" << endl;
}
int main()
{
	system("color 8f");
	Cliente c = Cliente();
	Puestos p = Puestos();
	Marcas m = Marcas();
	Proveedores pr = Proveedores();
	producto pd = producto();
	empleados emp = empleados();
	detalle_venta dt = detalle_venta();
	fact f = fact();
	Compras cmp = Compras();
	
	int opc;
	cout << "\n\n\n\n\n"  ;
	cout << "\t\t\t\t\t\tMENU PRINCIPAL" << endl;
	cout << "                                                 ----------------\n\n" << endl;
	cout << "\t\t\t\t 1.......... Ver Crud Clientes.........." << endl;
	cout << "\t\t\t\t 2.......... Ver Crud Puestos..........." << endl;
	cout << "\t\t\t\t 3.......... Ver Crud Marcas............" << endl;
	cout << "\t\t\t\t 4.......... Ver Crud Proveedores......." << endl;
	cout << "\t\t\t\t 5.......... Ver Crud Productos........." << endl;
	cout << "\t\t\t\t 6.......... Ver Crud empleados........." << endl;
	cout << "\t\t\t\t 7.......... Ver Crud ventas maestro...." << endl;
	cout << "\t\t\t\t 8.......... Ver Crud compras maestro...." << endl;
	cout << "\t\t\t\t 9.......... Imprimir factura...." << endl;
	cin >> opc;
	switch (opc)
	{
	case 1:
		system("cls");
		menuPrincipal(c);
		system("Pause");
		break;
	case 2:
		system("cls");
		Menu_puestos(p);
		system("pause");
		break;
	case 3:
		system("cls");
		menu_marcas(m);
		system("pause");
		break;
	case 4:
		system("color 9f");
		system("cls");
		menu_proveedores(pr);
		system("pause");
		break;
	case 5:
		system("cls");
		menu_productos(pd);
		system("pause");
		break;
	case 6:
		system("cls");
		menu_empleados(emp);
		system("Pause");
		break;
	case 7: 
		system("cls");
		menu_ventas(dt);
		system("pause");
		break;

	case 8: 
		system("cls");
		compras(cmp);
		break;

	case 9:
		system("cls");
		system("color 06");
		factu(f);
		
		break;
	}

	system("pause");
	return 0;
}