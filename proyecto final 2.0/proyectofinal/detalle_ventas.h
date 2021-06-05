#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
#include "conexion.h"
using namespace std;
class detalle_venta {
	//atributos
private:
	string id_venta, id_producto,id_detalle, precio_uni, cantidad;
	string no_fact, serie, fecha_fact, id_cliente, id_emple, fecha_factu;
	
	//constructor
public:
	detalle_venta() {
	}
	detalle_venta(string _id_venta, string _id_producto, string _cantidad, string _precio_uni,string _id_detalle, string _no_fact, string _serie, string _fecha_fact, string _id_cliente, string _id_emple, string _fecha_factu) {
		id_venta = _id_venta;
		id_producto = _id_producto;
		cantidad = _cantidad;
		precio_uni = _precio_uni;
		id_detalle = _id_detalle;
		no_fact = _no_fact;
		serie = _serie;
		fecha_fact = _fecha_fact;
		id_cliente = _id_cliente;
		id_emple = _id_emple;
		fecha_factu = _fecha_factu;
	}
	// metodo
	void crearventadetalle() {
		int q_estado;
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			
			
			cout << "Ingrese cantidad que llevara : " << endl;
			cin >> cantidad;
			cout << "Ingrese el precio unitario : " << endl;
			cin >> precio_uni;
			
			string insert = "INSERT INTO ventas_detalle(cantidad,precio_unitario)VALUES('" +cantidad + "','" +precio_uni + "')";

			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "-------------------------------------------------" << endl;
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
	void leerventadetalle() {
		int q_estado;
		conexion cn = conexion();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select id_venta_detalle,cantidad, precio_unitario from ventas_detalle";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "-----------------------------VENTAS----------------------------" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << "Id_venta_detalle" << "---"<< "cantidad" <<"---"<< "Precio unitario"<<endl;
					cout << "|"; cout << fila[0] << "|"<< "-------" << fila[1] << "--------" << fila[2] << endl;
					
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

	void actualizarventadetalle() {
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			int q_estado;
			string id;
			cout << "Ingrese el Id del detalle de venta que desea Actualizar: " << endl;
			cin >> id;
		
			
			cout << "Ingrese la cantidad de productos que a cambiar " << endl;
			cin>>cantidad;
			cout << "Ingrese el precio unitario: " << endl;
			cin >> precio_uni;
			
			string update = "UPDATE ventas_detalle SET cantidad ='" + cantidad + "',precio_unitario = '" + precio_uni + "' WHERE Id_venta_detalle = '" + id + "'";
			const char* i = update.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << " ... " << endl;
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
	void eliminarventadetalle() {
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			int q_estado;
			string id;
			cout << "Ingrese el Id venta_detalle que desea eliminar" << endl;
			cin >> id;
			string eliminar = "Delete from ventas_detalle where Id_venta_detalle ='" + id + "'";
			const char* i = eliminar.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << " ... " << endl;
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
	//los metodos anteriores son de la tabla ventas_detalle
	void crearventa() {
		int q_estado;
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			cout << "Ingrese la serie : " << endl;
			cin >> serie;
			cout << "Ingrese la fecha de ingreso" << endl;
			cin >> fecha_factu;
			cin.ignore();
			//INSERT INTO ventas(serie, fecha_factura, fecha_ingreso)VALUES('r', '2020/02/01', current_timestamp());
			string insert = "INSERT INTO ventas(serie, fecha_factura, fecha_ingreso)VALUES('" + serie + "','"+fecha_factu+"',current_timestamp())";

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
	void leerventa() {
		int q_estado;
		conexion cn = conexion();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select serie,fecha_ingreso,fecha_factura from ventas";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "-----------------------------VENTAS DETALLE----------------------------" << endl;

				while (fila = mysql_fetch_row(resultado)) {
					cout << "SERIE" << "---------------------" << "FECHA INGRESO" << "-------------------" << "FECHA FACTURA" << endl;
					cout << fila[0] << " , " << fila[1] << " , " << fila[2] << " , " << fila[3]  << endl;
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
	void actualizarventa() {
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			int q_estado;
			string id;
			cout << "Ingrese el Id de la venta que desea Actualizar: " << endl;
			cin >> id;
			cin.ignore();
			cout << "Ingrese la serie : " << endl;
			getline(cin, serie);
			//serie,fecha_ingreso,fecha_factura
			cin.ignore();
			string update = "UPDATE ventas SET serie ='" + serie + "' WHERE Id_venta = '" + id + "'";

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
	void eliminarventa() {
		conexion cn = conexion();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			int q_estado;
			string id;
			cout << "Ingrese el Id venta  que desea eliminar" << endl;
			cin >> id;
			string eliminar = "Delete from ventas where Id_venta ='" + id + "'";
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
