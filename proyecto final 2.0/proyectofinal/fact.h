#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
#include "conexion.h"
#include "Cliente.h"
#include "empleados.h"
#include "detalle_ventas.h"
#include "productos.h"
using namespace std;
class fact {
	//atributos
private:
	string puesto;

	//constructor
public:
	fact() {
	}
	fact(string _puesto) {
		puesto = _puesto;
	}



	// metodo



	void datosfact() {
		int num;
		int val1 = 0;
		cout << "Desea ingresar nit 1 = Si/ 0 = No" << endl;
		cin >> num;
		if (num == 1) {
			
			int q_estado;
			conexion cn = conexion();
			MYSQL_ROW fila;
			MYSQL_RES* resultado;
			cn.abrir_conexion();
			if (cn.getConectar() ) {
				string consulta = " select nombres, NIT from clientes order by  idCliente desc limit 1  ";
				const char* c = consulta.c_str();
				q_estado = mysql_query(cn.getConectar(),c);
				if (!q_estado) {
					resultado = mysql_store_result(cn.getConectar());
					
					while (fila = mysql_fetch_row(resultado)) {
						
							cout << "NOMBRE" << "----" << "Nit" << endl;
							cout << fila[0] << " , " << fila[1] << endl;
						
						
					}
				}
				else {
					cout << "xxxx Error al Consultar xxxxx" << endl;
				}
			}
			else {
				cout << "Error en la Conexion..." << endl;
			}
			cn.cerrar_conexion();
		}
		else if (num == 0) {
			int q_estado;
			conexion cn = conexion();
			MYSQL_ROW fila;
			MYSQL_RES* resultado;
			cn.abrir_conexion();
			if (cn.getConectar()) {
				string consulta = " select nombres from clientes order by  idCliente desc limit 1  ";
				const char* c = consulta.c_str();
				q_estado = mysql_query(cn.getConectar(), c);
				if (!q_estado) {
					resultado = mysql_store_result(cn.getConectar());

					while (fila = mysql_fetch_row(resultado)) {

						cout << "NOMBRE"  << endl;
						cout <<fila[0]  << endl;


					}
				}
				else {
					cout << "xxxx Error al Consultar xxxxx" << endl;
				}
			}
			else {
				cout << "Error en la Conexion..." << endl;
			}
			cn.cerrar_conexion();

		}
			

}

	void leer2() {
		int q_estado;
		conexion cn = conexion();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select * from datosfac order by  No_fact desc limit 1;";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado ) {
				resultado = mysql_store_result(cn.getConectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << "No fact" << endl;
					cout << fila[0]<<  endl;
				}
			}
			else {
				cout << "xxxx Error al Consultar xxxxx" << endl;
			}
		}
		else {
			cout << "Error en la Conexion..." << endl;
		}
		cn.cerrar_conexion();
	}
	void datosfactura() {
		int q_estado;
		conexion cn = conexion();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select * from datosfac order by  No_fact desc limit 1;";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << endl;
				}
			}
			else {
				cout << "xxxx Error al Consultar xxxxx" << endl;
			}
		}
		else {
			cout << "Error en la Conexion..." << endl;
		}
		cn.cerrar_conexion();

	}
	void ingresarfech() {
		int q_estado;
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "INSERT INTO datosfac(fecha)VALUES(current_timestamp());";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				
			}
			else {
				cout << "xxxx Error al Consultar xxxxx" << endl;
			}
		}
		else {
			cout << "Error en la Conexion..." << endl;
		}
		cn.cerrar_conexion();
	}
	void direccion() {
		int q_estado;
		conexion cn = conexion();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select direccion from empleados order by idEmpleado desc limit 1;";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << "Direccion " << endl;
					cout<< fila[0] << endl;
				}
			}
			else {
				cout << "xxxx Error al Consultar xxxxx" << endl;
			}
		}
		else {
			cout << "Error en la Conexion..." << endl;
		}
		cn.cerrar_conexion();
	}
	void serie() {
		int q_estado;
		conexion cn = conexion();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select serie from ventas order by idVentas desc limit 1; ";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << endl;
				}
			}
			else {
				cout << "xxxx Error al Consultar xxxxx" << endl;
			}
		}
		else {
			cout << "Error en la Conexion..." << endl;
		}
		cn.cerrar_conexion();

	}
	void productos() {
		int q_estado;
		conexion cn = conexion();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select idProducto,producto,precio_venta from productos order by idProducto desc limit 1; ";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << "Idproducto " << endl;
					cout << fila[0] << endl;
					cout<< "Nombre producto" << endl;
					cout << fila[1] << endl;
					cout << "Precio" << endl;
					cout << fila[2] << endl;
				}
			}
			else {
				cout << "xxxx Error al Consultar xxxxx" << endl;
			}
		}
		else {
			cout << "Error en la Conexion..." << endl;
		}
		cn.cerrar_conexion();

	}
	void cantidad() {
		int q_estado;
		conexion cn = conexion();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select cantidad from ventas_detalle order by id_venta_detalle desc limit 1; ";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << "cantidad de productos"<<endl;
					cout << fila[0] << endl;
				}
			}
			else {
				cout << "xxxx Error al Consultar xxxxx" << endl;
			}
		}
		else {
			cout << "Error en la Conexion..." << endl;
		}
		cn.cerrar_conexion();

	}
};


