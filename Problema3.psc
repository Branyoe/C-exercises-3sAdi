Algoritmo Problema3
	//Construir un programa que recibe tres datos 
	//enteros positivos realice un ordenamiento 
	//mediante condicionales anidados o l?gicos 
	//colocando dichos valores de mayor a menor.
	definir n1, n2, n3 como entero;
	Escribir "Introduce un numero entero: ";
	leer n1;
	Escribir "Introduce un numero entero: ";
	leer n2;
	Escribir "Introduce un numero entero: ";
	leer n3;
	
	
	si n1 > n2 y n2 > n3 Entonces
		Escribir n1, " ", n2, " ", n3;
	FinSi
	si n1 > n3 y n3 > n2 Entonces
		Escribir n1, " ", n3, " ", n2;
	FinSi
	si n2 > n1 y n1 > n3 Entonces
		Escribir n2, " ", n1, " ", n3;
	FinSi
	si n2 > n3 y n3 > n1 Entonces
		Escribir n2, " ", n3, " ", n1;
	FinSi
	si n3 > n1 y n1 > n2 Entonces
		Escribir n3, " ", n1, " ", n2;
	FinSi
	si n3 > n2 y n2 > n1 Entonces
		Escribir n3, " ", n2, " ", n1;
	FinSi
FinAlgoritmo
