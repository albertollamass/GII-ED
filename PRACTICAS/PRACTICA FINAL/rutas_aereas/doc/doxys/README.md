# RUTAS AÉREAS

Estos T.D.As se corresponden con la Práctica Final de la asignatura **Estructura de Datos del Grado en Ingeniería Informática** de la Universidad de Granada, curso 2020/21.

## Alumnos:

* Elena Ortega Contreras
* Alberto Llamas González


## Método de uso:

Para compilar el proyecto:

		* make -> compila todo y genera en bin/ el ejecutable rutasaereas, además de crear la documentación.
		* make documentacion -> realiza únicamente la documentación del proyecto. (se recomenda leer documentación antes de ejecutar)

Ejecutaremos *rutasaereas*de la siguiente manera:

		* bin/rutasaereas datos/paises.txt datos/imagenes/banderas/ datos/almacen_rutas.txt

>Nota: Cuando ejecutemos, seguiremos los pasos del main para el correcto funcionamiento del programa

Podemos hacer una limpieza de los archivos tras la ejecución con:

	make mrproper

## INFORMACIÓN ADICIONAL:

Tal y como se pedía en el guión de prácticas, para ver correctamente el desarrollo de la práctica, hemos realizado un diario con lo que avanzabamos en el proyecto cada día que trabajabamos en él y los problemas que nos surgieron hasta completarlo.

**24-12-2020**
Empezamos el proyecto RutasAereas. Hemos creado los TDA Punto, Pais, Paises, Ruta, etc con
sus respectivos ficheros .h y .cpp. Se han rellenado con la informacion proporcionada en aux.txt y, además, se han implementado los métodos de los TDA Pais y Punto.

Hemos entendido el objetivo del proyecto y hemos listado lo que hay que hacer:

  Documentacion con doxygen
  Implementar los TDAs restantes + main
  Probar que funcionan los metodos rotar, pegar, pintar
  Makefile

**25-12-2020**
Repasamos los TDA implementados
Terminamos de implementar el TDA Paises
Comenzamos la implementación de los TDAs Ruta y Almacen_Rutas

**27-12-2020**

Continuamos con la implementacion de Ruta y Almacen_Rutas
Comenzamos a documentar el proyecto. Falta acabar algunas funciones y procederemos a probar los metodos rotar, pegar y pintar

**30-12-2020**
Acabamos las funciones que nos quedaban y comprobamos que funcionan los metodos para rotar y pegar.
Tambien acabamos de implementar y documentar los TDA que nos faltaban y comenzamos el diseño del programa principal del proyecto

**31-12-2020**
Realizamos el makefile.

**1-1-2021**
Cuando ejecutamos parte del programa principal encontramos algunos fallos en la lectura del fichero almacen_rutas.txt. Había fallos de implementación en la sobrecarga de operadores de entrada. Corregimos dichos errores.
Seguimos probando el programa principal.

**2-1-2021**
Hemos terminado el programa y vemos que funciona correctamente. Solo tenemos un fallo que estamos intentando corregir. Al pintar los aviones en el mapa, mantiene la mascara el avion de una forma extraña.
Queda, por ultimo, documentar el main.

Descubrimos que el fallo se produce cuando rotamos los aviones y los pintamos, por lo que deducimos que debemos modificar algo en la función Rota (en rutasaereas.cpp). En "Rota" antes de modificar los datos de la imagen rotada limpiamos la transparencia utilizando la función previamente implementada en el TDA Imagen.

**3-1-2021**
Una vez comprobado que nuestro programa funciona correctamente, modificamos el main para hacerlo interactivo de forma que el usuario pueda elegir durante la ejecución del programa el modelo de avión y la ruta deseados.

**4-1-2021**

Repasamos el proyecto, por si hay algunos errores inesperados.

Una vez finalizado el repaso, subimos el proyecto.





