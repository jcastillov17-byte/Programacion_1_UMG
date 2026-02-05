Algoritmo Denominacion
	//Definimos el tipo de dato que se utilizara en la variable
	Definir monto Como Real
	Definir cantidad, residuo Como Entero
	
	//Se le pide al usuario que ingrese el monto
	Escribir 'Ingrese el monto: '
	Leer monto
	
	//Se usara un condicional donde el monto sea > 0 
	Si monto > 0 Entonces
		//Se multiplicara el monto por 100 para poder sacar los centavos y lo redondeamos 
		residuo <- redon(monto * 100)
		
		//Se calcula el billete de a 200
		cantidad <- trunc(residuo / 20000)
		residuo <- residuo MOD 20000
		Escribir "Billete de a 200: ", cantidad
		
		//Se calcula el billete de a 100
		cantidad <- trunc(residuo / 10000)
		residuo <- residuo MOD 10000
		Escribir "Billete de a 100: ", cantidad
		
		//Se calcula el billete de a 50
		cantidad <- trunc(residuo / 5000)
		residuo <- residuo MOD 5000
		Escribir  "Billete de a 50: ", cantidad
		
		//Se calula el billete de a 20
		cantidad <- trunc(residuo / 2000)
		residuo <- residuo MOD 2000
		Escribir  "Billete de a 20: ", cantidad
		
		//Se calcula el billete de a 10
		cantidad <- trunc(residuo / 1000)
		residuo <- residuo MOD 1000
		Escribir  "Billete de a 10: ", cantidad
		
		//Se calcula el billete de a 5
		cantidad <- trunc(residuo / 500)
		residuo <- residuo MOD 500
		Escribir  "Billete de a 5: ", cantidad
		
		//Se calcula el billete de a 1
		cantidad <- trunc(residuo / 100)
		residuo <- residuo MOD 100
		Escribir  "Billete de a 1: ", cantidad
		
		//Se calcula la moneda de 50 centavos
		cantidad <- trunc(residuo / 50)
		residuo <- residuo MOD 50
		Escribir  "Moneda de a 50 centavos: ", cantidad
		
		//Se calcula la moneda de 10 centavos
		cantidad <- trunc(residuo / 10)
		residuo <- residuo MOD 10
		Escribir  "Moneda de a 10 centavos: ", cantidad
		
		//Se calcula la moneda de 5 centavos
		cantidad <- trunc(residuo / 5)
		residuo <- residuo MOD 5
		Escribir  "Moneda de a 5 centavos: ", cantidad
		
		//Se calcula la moneda de 1 centavos
		cantidad <- trunc(residuo / 1)
		residuo <- residuo MOD 1
		Escribir  "Moneda de a 1 centavos: ", cantidad
	SiNo
		Escribir "Monto no valido"
	Fin Si
	
FinAlgoritmo
