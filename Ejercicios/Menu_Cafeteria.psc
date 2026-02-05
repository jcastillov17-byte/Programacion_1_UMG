Algoritmo Menu_Cafeteria
	Definir iniciar, monto Como Entero
	Definir finalizar Como Caracter
	
	Escribir "--- Menú de Cafetaria ---"
	Escribir "1. Café Q15.00"
	Escribir "2. Pastel de zanahoria Q25.00"
	Escribir "3. Tartaleta Q5.00"
	Escribir "4. Chocolate Q10.00"
	Escribir "5. Agua pura Q3.00"
	
	monto <- 0
	
	Repetir
		Escribir "¿Que opción desea escoger?: "
		Leer iniciar
		si iniciar == 1
			monto <- monto + 15
		FinSi
		
		Si iniciar == 2
			monto <- monto + 25
		FinSi
		
		Si iniciar == 3
			monto <- monto + 5
		FinSi
		
		Si iniciar == 4
			monto <- monto + 10
		FinSi
		
		Si iniciar == 5
			monto <- monto + 3
		FinSi
		
		Escribir "¿Desea escoger algo más s/n: "
		Leer finalizar
		
	Hasta Que finalizar <> 's'
	
	Escribir "El total de su compra fue de: ", monto
	
	
FinAlgoritmo
