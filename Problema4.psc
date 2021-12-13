Algoritmo Problema4
	//En una tienda departamental ofrecen
	//descuentos a los clientes en la 
	//Navidad, de acuerdo con el momento
	//de su compra.
	definir c, res Como Real;
	Escribir "monto de compra: ";
	leer c;
	si c < 800 Entonces
		res = c;
	FinSi
	si c >= 800 y c <= 1500 Entonces
		res = c - c*.10;
	FinSi
	si c > 1500 y c <= 5000 Entonces
		res = c - c*.15;
	FinSi
	si c > 5000 Entonces
		res = c - c*.20;
	FinSi
	Escribir "precio final: ", res;
FinAlgoritmo
