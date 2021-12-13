Algoritmo Problema5
	//Desarrollar un programa que realice la 
	//siguiente serie utilizando ciclos 2, 7, 10,
	//15, 18, 23 ?, hasta el 2500
	//mostrando en pantalla de manera horizontal.
	definir cont Como Entero;
	cont = 2;
	Escribir  cont, " -> " Sin Saltar;
	Mientras cont < 2498 Hacer
		si cont mod 2 == 0 Entonces
			cont = cont + 5;
			Escribir  cont, " -> " Sin Saltar;
		SiNo
			cont = cont + 3;
			Escribir  cont, " -> " Sin Saltar;
		FinSi
	Fin Mientras
	
FinAlgoritmo
