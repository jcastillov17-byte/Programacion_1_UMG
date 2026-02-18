Algoritmo Calcular_Terreno
	//Definimos las variables y el tipo de dato a utilizar
	Definir ancho, largo, precio, total Como Real
	
	//Inicializamos la varible total 
	total <- 0
	
	//Se utilizar 3 ciclos Do while por si el usuario ingresa un dato no valido
	Repetir
		//Se le pedira al usuario que ingre el ancho
		Escribir "Ingrese el ancho: "
		Leer ancho
		//Se le mostra al usuario que se esta trabajando en metros
		Escribir ancho "m"
		//Se utilizara una condicion para que el usario solo pueda ingresar numeros mayor que 0
		Si ancho > 0 Entonces
			Escribir "El numero es valido"
		//Si no se cumpla la condicion se le mostrara un error
		SiNo
			Escribir "El dato que desea ingresar no es valido"
		FinSi
		//Si la condición del bucle se cumple pasara al siguiente dato
	Hasta Que ancho > 0
	
	Repetir
		//Se le pedira al usuario que ingre el largo
		Escribir "Ingrese el largo: "
		Leer largo
		//Se le mostra al usuario que se esta trabajando en metros
		Escribir largo "m"
		//Se utilizara una condicion para que el usario solo pueda ingresar numeros mayor que 0
		Si largo > 0 Entonces
			Escribir "El numero es valido"
		SiNo
			Escribir "El dato que desea ingresar no es valido"
		FinSi
		//Si la condición del bucle se cumple pasara al siguiente dato
	Hasta Que largo > 0
	
	Repetir
		//Se le pedira al usuario que ingre el precio
		Escribir "Ingrese el precio del metro cuadrado de tierra: "
		Leer precio
		//Se le mostra al usuario que el precio es en quetzales
		Escribir "Q", precio
		//Se utilizara una condicion para que el usario solo pueda ingresar numeros mayor que 0
		Si precio > 0 Entonces
			Escribir "El numero es valido"
		SiNo
			Escribir "El dato que desea ingresar no es valido"
		FinSi
		//Si la condición del bucle se cumple pasara a los calculos y le mostrara el total 
	Hasta Que precio > 0
	
	// Al terminar los bucles y el usuario ingrese los valores correctos se haran calculos para
	// Determinar el precio total del terreno y metros de alambre a utilzar 
	total <- (ancho * largo) * precio
	Escribir "Precio total seria de: Q", total
	total <- (ancho + largo) * 2
	total <- total * 3  
	Escribir "Total de metros de alambre a utilizar es de: ", total " metros de alambre"
FinAlgoritmo
