Algoritmo Problema6
	//Realizar un programa utilizando ciclos que al recibir
	//un limite N de n?meros enteros obtenga la suma de los
	//n?meros pares y el promedio de los n?meros impares 
	//mediante valores aleatorios entre 5 y 50 mostrando 
	//dichos n?meros en pantalla como la suma y el promedio 
	//respectivo. 
	Definir n, i, aleat, sPar, sImpar, cont como entero;
	n = 0;
	aleat = 0;
	sPar = 0;
	sImpar = 0;
	cont = 0;
	i=0;
	Escribir "limite: ";
	leer n;
	Para i <-1 Hasta n Con Paso 1 Hacer
		aleat = Aleatorio(5, 50);
		Escribir aleat;
		si aleat mod 2 == 0 Entonces
			sPar = sPar + aleat;
		SiNo
			sImpar = sImpar + aleat;
			cont = cont+1;
		FinSi
	Fin Para
	Escribir "";
	Escribir "suma pares = ", sPar;
	Escribir "promedio impares = ", sImpar/cont;
FinAlgoritmo
