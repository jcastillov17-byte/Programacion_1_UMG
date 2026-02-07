Algoritmo Calcular_Descuento
	//Definimos las varibles y el tipo de dato a utilizar
	Definir edad, sueldo, descuento, adicional, total Como Real
	
	//Inicializamos estas dos varibles para el calculo
	descuento <- 0
	adicional <- 0
	
	//Se utilizo un bucle Do while para que el usuario pueda agregar una edad valido
	Repetir
		Escribir "Ingrese su edad: "
		Leer edad
		Si edad > 0 Entonces
			Escribir "Su edad es valido"
		SiNo
			Escribir "La edad que desea ingresar no es valido"
		FinSi
	Hasta Que edad > 0	
	
	//Se utilizo un bucle Do while para que el usuario pueda agregar un sueldo valido
	Repetir
		Escribir "Ingrese su sueldo anual: "
		Leer sueldo
		Si sueldo > 0 Entonces
			Escribir "Su sueldo es valido"
		SiNo
			Escribir "El sueldo que desea ingresar no es valido"
		FinSi
	Hasta Que sueldo > 0
	
	//Aqui la condicion es si el usuario tiene 30 años o menos se le agregarara un descuento extra del 20%
	Si edad <= 30 Entonces
		//Se calculara el sueldo menor a 10000 y se le descontara el 0.5%
		Si sueldo < 10000 Entonces
			descuento <- sueldo * 0.005
			adicional <- descuento * 0.2
			total <- sueldo - descuento - adicional
			adicional <- adicional + descuento
			Escribir "Su sueldo actual es de: ", sueldo
			Escribir "Se le descontara el 0.5% y un extra del el 20%: ", adicional
			Escribir "Total: ", total
		SiNo
			//Se calculara el sueldo de un rango entre 10000 y 19999 y se le descontara el 1%
			Si sueldo >= 10000 y sueldo <= 19999 Entonces
				descuento <- sueldo * 0.01
				adicional <- descuento * 0.2
				total <- sueldo - descuento - adicional
				adicional <- adicional + descuento
				Escribir "Su sueldo actual es de: ", sueldo
				Escribir "Se le descontara el 1% y un extra el 20%: ", adicional
				Escribir "Total: ", total
			SiNo
				//Se calculara el sueldo de un rango entre 20000 y 29999 y se le descontara el 2%
				Si sueldo >= 20000 y sueldo <= 29999 Entonces
					descuento <- sueldo * 0.02
					adicional <- descuento * 0.2
					total <- sueldo - descuento - adicional
					adicional <- adicional + descuento
					Escribir "Su sueldo actual es de: ", sueldo
					Escribir "Se le descontara el 2% y un extra el 20%: ", adicional
					Escribir "Total: ", total
				SiNo
					//Se calculara el sueldo mayor a 30000 y se le descontara el 2.5%
					Si sueldo > 30000 Entonces
						descuento <- sueldo * 0.025
						adicional <- descuento * 0.2
						total <- sueldo - descuento - adicional
						adicional <- adicional + descuento
						Escribir "Su sueldo actual es de: ", sueldo
						Escribir "Se le descontara el 2.5% y un extra del 20%: ", adicional
						Escribir "Total: ", total
					FinSi
				FinSi
			FinSi
		FinSi
	//Si la condicion no se cumple no se le descontara el 20% 
	SiNo
		Si sueldo < 10000 Entonces
			//Se calculara el sueldo menor a 10000 y se le descontara el 0.5%
			descuento <- sueldo * 0.005
			total <- sueldo - descuento
			Escribir "Su sueldo actual es de: ", sueldo
			Escribir "Se le descontara el 0.5%: ", descuento
			Escribir "Total: ", total
		SiNo
			//Se calculara el sueldo de un rango entre 10000 y 19999 y se le descontara el 1%
			Si sueldo >= 10000 y sueldo <= 19999 Entonces
				descuento <- sueldo * 0.01
				total <- sueldo - descuento
				Escribir "Su sueldo actual es de: ", sueldo
				Escribir "Se le descontara el 1%: ", descuento
				Escribir "Total: ", total
			SiNo
				//Se calculara el sueldo de un rango entre 20000 y 29999 y se le descontara el 2%
				Si sueldo >= 20000 y sueldo <= 29999 Entonces
					descuento <- sueldo * 0.02
					total <- sueldo - descuento
					Escribir "Su sueldo actual es de: ", sueldo
					Escribir "Se le descontara el 2%: ", descuento
					Escribir "Total: ", total
				SiNo
					//Se calculara el sueldo mayor a 30000 y se le descontara el 2.5%
					Si sueldo > 30000 Entonces
						descuento <- sueldo * 0.025
						total <- sueldo - descuento
						Escribir "Su sueldo actual es de: ", sueldo
						Escribir "Se le descontara el 2.5%: ", descuento
						Escribir "Total: ", total
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
