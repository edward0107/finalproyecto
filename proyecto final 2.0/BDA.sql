
create database super_mercado;
use super_mercado;
show tables;
 select nombres, NIT from clientes order by  idCliente desc limit 1  ;

insert into clientes values(14,'pepa','gomes',2131,1,123131,'edwardafe@',current_timestamp());



select *from empleados;
select direccion from empleados order by idEmpleado desc limit 1;
 INSERT INTO empleados(nombres,apellidos,direccion,telefono,DPI,genero,fecha_nacimiento,fecha_inicio_labores,fecha_ingreso)values('fatifma','gonzalsses','ml35',34567798,345678901,1,'2020-02-10','2024-05-3',current_timestamp());
select *from ventas;
drop table ventas_detalle;
create table ventas(
Id_venta int primary key auto_increment not null,
no_factura int,
serie varchar (10),
fecha_factura date,
id_cliente int,
id_empleado int,
fecha_ingreso datetime
);
select *from ventas;
INSERT INTO ventas(serie,fecha_factura,fecha_ingreso)VALUES('r','2020/02/01',current_timestamp());
create table ventas_detalle(
id_venta_detalle int primary key auto_increment not null,
id_venta int ,
id_producto int,
cantidad varchar(50) not null,
precio_unitario decimal(8,2)
);
select *from ventas_detalle;

insert into ventas_detalle (id_venta,id_producto,cantidad,precio_unitario) values(3,4,4,4.9);
create table datosfac(
No_fact int auto_increment primary key not null,
fecha datetime
);
select * from datosfac order by  No_fact desc limit 1;


INSERT INTO datosfac(fecha)VALUES(current_timestamp());
select serie from ventas order by Id_venta desc limit 1;

insert into puestos(puesto) value ('gerente');
alter table puestos drop column idpuesto;
drop table puestos ;
select * from productos;
insert into productos (idproducto,producto,idMarca,comestible,imagen,precio_costo,precio_venta,existencia,fecha_ingreso)values(2,'chetos',3,'vvv','lll',4,40,23,current_timestamp());
insert into productos(producto,idMarca,descripcion,imagen,precio_costo,precio_venta,existencia,fecha_ingreso) values('tortrixs',5,'comestible','imagen1',34,40,10,current_timestamp());
select *from empleados;
insert into empleados(nombres,apellidos,direccion,telefono,DPI,genero,fecha_nacimiento,idPuesto,fecha_inicio_labores,fecha_ingreso) values('perla','gonzalsses','ml85',34567798,345678901,1,'2020-02-10',1,'2024-05-3',current_timestamp());
select *from compras;
insert into compras (No_orden_compra,fecha_orden,fecha_ingreso) values(6,'2020-02-13',current_timestamp());
select *from compras_detalle ;
select nombres, NIT from clientes order by  idCliente desc limit 1  ;

insert into clientes values(14,'pepa','gomes',2131,1,123131,'edwardafe@',current_timestamp());




select *from empleados;
select direccion from empleados order by idEmpleado desc limit 1;
insert into empleados values(3,'fatifma','gonzalsses','ml85',34567798,345678901,1,'2020-02-10',1,'2024-05-3',current_timestamp());
select *from ventas;

create table ventas(
Id_venta int primary key auto_increment not null,
no_factura int,
serie varchar (10),
fecha_factura date,
id_cliente int,
id_empleado int,
fecha_ingreso datetime
);
select *from ventas;
INSERT INTO ventas(serie,fecha_factura,fecha_ingreso)VALUES('r','2020/02/01',current_timestamp());
create table ventas_detalle(
id_venta_detalle int primary key auto_increment not null,
id_venta int ,
id_producto int,
cantidad varchar(50) not null,
precio_unitario decimal(8,2)
);
select *from ventas_detalle;
insert into ventas_detalle (id_venta,id_producto,cantidad,precio_unitario) values(3,4,4,4.9);
create table datosfac(
No_fact int auto_increment primary key not null,
fecha datetime
);
select * from datosfac order by  No_fact desc limit 1;
select *from datosfac;
drop table datosfac;
INSERT INTO datosfac(fecha)VALUES(current_timestamp());
select serie from ventas order by Id_venta desc limit 1;
select*from ventas_detalle;
select *from puestos;
insert into puestos(puesto) value ('gerente');
alter table puestos drop column idpuesto;
drop table puestos ;
select * from productos;
insert into productos (idproducto,producto,idMarca,comestible,imagen,precio_costo,precio_venta,existencia,fecha_ingreso)values(2,'chetos',3,'vvv','lll',4,40,23,current_timestamp());
insert into productos(producto,idMarca,descripcion,imagen,precio_costo,precio_venta,existencia,fecha_ingreso) values('tortrixs',5,'comestible','imagen1',34,40,10,current_timestamp());
select *from empleados;
insert into empleados(nombres,apellidos,direccion,telefono,DPI,genero,fecha_nacimiento,fecha_inicio_labores,fecha_ingreso) values('marta','gonzalsses','ml85',34567798,345678901,0,'2020-02-10','2024-05-3',current_timestamp());
select *from compras;
insert into compras (No_orden_compra,fecha_orden,fecha_ingreso) values(6,'2020-02-13',current_timestamp());
select *from compras_detalle;
insert into compras_detalle(cantidad,precio_costo_unitario) values(19,20);
select serie from ventas order by idVentas desc limit 1;
insert into productos (idproducto,producto,idMarca,comestible,imagen,precio_costo,precio_venta,existencia,fecha_ingreso)values(2,'chetos',3,'vvv','lll',4,40,23,current_timestamp());
insert into productos(producto,descripcion,imagen,precio_costo,precio_venta,existencia,fecha_ingreso) values('tortrixs','comestible','imagen1',34,40,10,current_timestamp());
select * from productos;
select *from puestos;
drop table puestos;
insert into puestos(puesto) values('nombre');
select *from proveedores;
select *from productos;
select *from ventas_detalle;
select *from marcas;