Algoritmo Formula_Masa
	Definir c1 Como Real
	Definir  c2 Como Real
	Definir presion Como Real
	Definir volumen como Real
	Definir temperatura Como Real
	Definir masa Como Real
	
	//Constantes
	c1<-0.37
	c2<-460
	
	// Entrada de datos por parte del usuario
	Escribir 'Ingrese la presion: '
	Leer presion
	Escribir  'Ingrese el volumen: '
	Leer volumen
	Escribir 'Ingrese la temperatura: '
	Leer temperatura
	
	//Proceso 
	masa<-(presion*volumen) / (c1 * temperatura + c2)
	
	// Salida de datos al usuario
	Escribir  'La masa resultante es: ', masa
	
FinAlgoritmo
