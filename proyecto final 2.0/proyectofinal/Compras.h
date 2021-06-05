#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
#include "conexion.h"
using namespace std;
class Compras {
	//atributos
private:
	string No_orden_compra, fecha_orden, fecha_ingreso;

	//constructor
public:
	Compras() {
	}
	Compras(string _No_orden_compra, string _fecha_orden, string _fecha_ingreso) {
		No_orden_compra = _No_orden_compra;
			fecha_orden = _fecha_orden;
			fecha_ingreso = _fecha_ingreso;
	}
	// metodo
	void crearcompra() {
		int q_estado;
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			
			cout << "Ingrese No de orden de la compra : " << endl;
			cin>> No_orden_compra;
			cout << "Ingrese Fecha de la orden: " << endl;
			cin>>fecha_orden;
			string insert = "INSERT INTO compras(No_orden_compra,fecha_orden,fecha_ingreso) VALUES ('" + No_orden_compra + "','" + fecha_orden + "',current_time());";
			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Ingreso Exitoso...." << endl;
			}
			else {
				cout << "xxxx Error al Ingresar xxxxx" << endl;
			}
		}
		else {
			cout << "Error en la Conexion..." << endl;
		}
		cn.cerrar_conexion();
	}
	void leer() {
		int q_estado;
		conexion cn = conexion();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select idCompra, No_orden_compra,fecha_orden, fecha_ingreso from compras";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "-----------------------------compras----------------------------" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << " , " << fila[1] << " , " << fila[2] << " , " << fila[3] << " , " << fila[4] << endl;
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

	void actualizar() {
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			int q_estado;
			string id;
			cout << "Ingrese el Id de la compra que desea  Actualizar: " << endl;
			cin >> id;
			cin.ignore();

			cout << "Ingrese No orden : " << endl;
			getline(cin, No_orden_compra);

			cout << "Ingrese apellidos: " << endl;
			getline(cin,fecha_orden);


		

			string update = "UPDATE compras SET No_orden_compra ='" + No_orden_compra + "',fecha_orden='" +fecha_orden + "'  WHERE idCompra = '" + id + "'";
			const char* i = update.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << " Registro Actualizado Exitosamente... " << endl;
			}
			else {
				cout << "xxx Error al actualizar el Registro xxx " << endl;
			}

		}
		else {
			cout << "Error en la conexion... " << endl;
		}
		cn.cerrar_conexion();
	}
	void eliminar() {
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			int q_estado;
			string id;
			cout << "Ingrese Id de la compra que  desea eliminar" << endl;
			cin >> id;
			string eliminar = "Delete from compras where idCompra ='" + id + "'";
			const char* i = eliminar.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << " Registro Eliminado Exitosamente... " << endl;
			}
			else {
				cout << "xxx Error al eliminar el Registro xxx " << endl;
			}

		}
		else {
			cout << "Error en la conexion... " << endl;
		}
		cn.cerrar_conexion();
	}

};