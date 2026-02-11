Algoritmo Calcular_Hora
	//Se define la varible y el tipo de dato a utilizar
	Definir hora Como Entero
	
	//Se usara un ciclo Do while hasta que el usuario ingrese el rango correcto de la hora que se le esta pidiendo
	Repetir
		//Se le pedira al usuario que ingrese una hora del dia entre 0 y 23
		Escribir "Ingrese un hora del dia (entre 0 y 23):"
		Leer hora
		//Se utilizaran condicionales para verificar el dia
		Si hora >= 0 y hora <= 23 Entonces
			//Si el numero que ingreso el usuario esta entre el 0 y 5 se le dira que el dia es de "Madrugada"
			Si hora >= 0 y hora <= 5 Entonces
				Escribir "Madrugada"
			SiNo
				//Si el numero que ingreso el usuario esta entre el 6 y 11 se le dira que el dia es de "Mañana"
				Si hora >= 6 y hora <= 11 Entonces
					Escribir "Mañana"
				SiNo
					//Si el numero que ingreso el usuario esta entre el 12 y 13se le dira que el dia es "Mediodia"
					Si hora >= 12 y hora <= 13 Entonces
						Escribir "Mediodia"
					SiNo
						//Si el numero que ingreso el usuario esta entre el 14 y 19 se le dira que el dia es de "Tarde"
						Si hora >= 14 y hora <= 19 Entonces
							Escribir "Tarde"
						SiNo
							//Si el numero que ingreso el usuario esta entre el 20 y 23 se le dira que el dia es de "Noche"
							Si hora >= 20 y hora <= 23 Entonces
								Escribir  "Noche"
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		Sino
			//Si no se cumple la condicion le mostraremos un mensaje dando error
			Escribir "La hora que desea ingresar no es valido"
		FinSi
		//Si el ciclo se cumple se cierra el programa
	Hasta Que hora >= 0 y hora <= 23
FinAlgoritmo
