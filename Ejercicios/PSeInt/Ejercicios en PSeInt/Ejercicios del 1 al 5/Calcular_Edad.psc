Algoritmo Calcular_Edad
	//Se difinara el tipo de variable a utilizar
	Definir num, edad Como Entero
	
	//Se le pide al usuario el año en el que nacio 
	Escribir "-- Programa Para Calcular Su Edad --"
	Escribir "Ingrese en que año nacio: "
	Leer num
	
	//Se usara una condicional para que el año que ingrese el usuario sea menor o igual a 2026
	si num <= 2026 
		//El año que ingrese el usuario se lo restamos del año 2026 
		edad <- 2026 - num
		Escribir "Tienes ", edad " años"
	SiNo
		Escribir "El año que desea ingresar es invalido"
	Fin Si
	
FinAlgoritmo
