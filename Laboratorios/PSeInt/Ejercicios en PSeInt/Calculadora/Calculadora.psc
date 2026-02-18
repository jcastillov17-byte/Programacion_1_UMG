Algoritmo Calculadora
	Definir numeroUno, numeroDos, resultadoOperaciones, numeroExtra Como Real
	Definir opcionOperaciones Como Entero
	Definir opcionLetra, finalizarCalculadora Como Caracter
	
	resultadoOperaciones <- 0
	
	Escribir "----- Calculadora ------"
	Escribir "************************"
	Escribir "Opciones de Operaciones"
	Escribir "************************"
	Escribir "1. Suma"
	Escribir "2. División"
	Escribir "3. Resta"
	Escribir "4. Multipicación"
	Escribir "5. Modulo"
	
	Repetir
		Escribir "¿Qué opción desea escoger?: "
		Leer opcionOperaciones
		Si opcionOperaciones >= 1 y opcionOperaciones <= 5 Entonces
			Segun opcionOperaciones Hacer
				1:
					Escribir "Ingrese el primer numero: "
					Leer numeroUno
					Escribir "Ingrese el segundo numero: "
					Leer numeroDos
					resultadoOperaciones <- numeroUno + numeroDos
				2:
					Repetir
						Escribir "Ingrese el primer numero: "
						Leer numeroUno
						Escribir "Ingrese el sugundo numero: "
						Leer numeroDos
						Si numeroDos == 0 Entonces
							Escribir "Error no se puede divir dentro 0"
						FinSi
					Hasta Que numeroDos <> 0
					resultadoOperaciones <- numeroUno / numeroDos
				3:
					Escribir "Ingrese el primer numero: "
					Leer numeroUno
					Escribir "Ingrese el sugundo numero: "
					Leer numeroDos
					resultadoOperaciones <- numeroUno - numeroDos
				4:
					Escribir "Ingrese el primer numero: "
					Leer numeroUno
					Escribir "Ingrese el sugundo numero: "
					Leer numeroDos
					resultadoOperaciones <- numeroUno * numeroDos
				5:
					Escribir "Ingrese el primer numero: "
					Leer numeroUno
					Escribir "Ingrese el sugundo numero: "
					Leer numeroDos
					resultadoOperaciones <- numeroUno MOD numeroDos
			FinSegun
		SiNo
			Escribir "La opción que desea escoger no se encuentra, Intente de nuevo"
		FinSi
	Hasta Que opcionOperaciones >= 1 y opcionOperaciones <= 5
	
	Escribir "¿Desea agregar otra operación S/N?"
	Leer opcionLetra
	Segun opcionLetra Hacer
		'S':
			Repetir
				Escribir "Ingrese un numero:"
				Leer numeroExtra
				Escribir "Que tipo de operaciones desea hacer: "
				Escribir "1. Suma"
				Escribir "2. Division"
				Escribir "3. Resta"
				Escribir "4. Multipicación"
				Leer opcionOperaciones
				Segun opcionOperaciones Hacer
					1:
						resultadoOperaciones <- resultadoOperaciones + numeroExtra
					2:
						resultadoOperaciones <- resultadoOperaciones / numeroExtra
					3:
						resultadoOperaciones <- resultadoOperaciones - numeroExtra
					4:
						resultadoOperaciones <- resultadoOperaciones * numeroExtra
				FinSegun
				
				Escribir "¿Desea finalizar la calculadora S/N?"
				Leer finalizarCalculadora
			Hasta Que finalizarCalculadora <> 'N'
			Escribir "Resultado: ", resultadoOperaciones
		'N':
			Escribir "Resultado: ", resultadoOperaciones
	FinSegun	
FinAlgoritmo
