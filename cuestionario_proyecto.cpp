#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
class cuestionario
{
public:
	int puntaje, banco, respuesta, nivel, ver_resp, respuestac, acierto;
	cuestionario();
	//-------------------------iniciar variables-------------------------

	void lvl()
	{
		if (nivel > 11)
		{
			nivel = 0;
			banco += 25000;
		}
	}
	void inicio_variables()
	{
		nivel = 1;
		puntaje = 0;
		banco = 0;
		acierto = 0;
	}
	//-------------------------BANCO--------------------------------------
	void select_banco()
	{
		if (acierto == 1)
		{
			cout << "-> ";
			cin >> respuesta;
			if (respuesta == 9)
			{
				cout << "Tu dinero fue insertado en el banco";
				banco += puntaje;
				puntaje = 0;
				nivel = 1;
			}
			else
			{
				cout << "Sin cambios\n";
			}
		}
	}
	//-------------------------PUNTAJE Y PUNTOS---------------------------
	void puntos()
	{

		system("cls");
		cout << "\t\t\t\t\t\t\t\t\tPuntaje: " << puntaje << "\n";
		cout << "\t\t\t\t\t\t\t\t\tBanco: " << banco << "\n\n";
		if (nivel == 1)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          25000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          15000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          10000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           5000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           2000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            200           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-----------> 100 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
		if (nivel == 2)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          25000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          15000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          10000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           5000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           2000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-----------> 200 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            100           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
		if (nivel == 3)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          25000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          15000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          10000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           5000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           2000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-----------> 500 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            200           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            100           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
		if (nivel == 4)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          25000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          15000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          10000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           5000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           2000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------> 1000 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            200           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            100           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
		if (nivel == 5)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          25000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          15000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          10000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           5000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           2000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------> 1500 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            200           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            100           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
		if (nivel == 6)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          25000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          15000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          10000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           5000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------> 2000 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            200           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            100           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
		if (nivel == 7)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          25000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          15000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          10000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------> 5000 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           2000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            200           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            100           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
		if (nivel == 8)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          25000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          15000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t---------> 10000 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           5000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           2000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            200           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            100           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
		if (nivel == 9)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          25000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t---------> 15000 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          10000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           5000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           2000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            200           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            100           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
		if (nivel == 10)
		{
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t---------> 25000 <----------"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          15000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-          10000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           5000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           2000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-           1000           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            500           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            200           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t-            100           -"
				<< "\n";
			cout << "\t\t\t\t\t\t\t\t----------------------------"
				<< "\n\n\n";
		}
	}

	// PREGUNTAS---------------------------------------------------------------
	void Pg_i()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 1:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Quien fue el primer presidente electo en mexico?  -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Benito Juarez                            "
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Guadalupe Vitoria               "
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Jose Miguel Ramon"
			<< "\n";
		cout << "\t\t\t\t\t\t\t ---->";
		cin >> respuesta;
		respuestac = 2;
	}
	void Pg_ii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 2:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cuantos estados tiene Estados Unidos?             -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 45"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> 48"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> 52"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	// PREGUNTA 3--------------------------------------------------------------------
	void Pg_iii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 3:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual es el rio mas largo del mundo?               -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Nilo"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Amazonas"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Misisispi"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	// PREGUNTA 4-------------------------------------------------------------------
	void Pg_iv()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 4:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- En que a?os ocurrio la Primera guerra mundial?    -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 1914-1918"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> 1924-1928"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> 1915-1921"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}
	// PRGUNTA 5------------------------------------------------------------------
	void Pg_v()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 5:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- En que a?os ocurrio la segunda guerra mundiaL?    -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 1935-1940"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> 1939-1945"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> 1940-1945"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	// pregunta 6-----------------------------------------------------------------
	void Pg_vi()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 6:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual es el oceano mas grande del mundo?           -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Indico "
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Antartico "
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Pacifico"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	// PREGUNTA 7---------------------------------------------------------------------
	void Pg_vii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 7:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cuanto mide la torre eiffel-"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 312m"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> 300m"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> 350m"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	// pregunta 8---------------------------------------------------------------------
	void Pg_viii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 8:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual es la luna mas grande de saturno?            -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Prometeo"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Titan"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Hiperion"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	// Pregunta 9---------------------------------------------------------------------
	void Pg_ix()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 9:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cuando se creo la primera computadora             -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 1833"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> 1845"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> 1826"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}
	// pregunta 10--------------------------------------------------------------
	void Pg_x()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 10:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cuando nacio Charles babbage                      -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 1810"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> 1791"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> 1756"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	// pregunta 11--------------------------------------------------------------
	void Pg_xi()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 11:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- El sistema operativo es:                          -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> El software almacenado en el hardware."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> La unidad elemental de información."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Un conjunto de programas que se encargan de controlar la computadora."
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	// pregunta 12--------------------------------------------------------------
	void Pg_xii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 12:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- ¿Se puede recuperar un archivo borrado?           -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> No."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Si, mediante una utilidad del sistema operativo."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Si, utilizado la papelera de reciclaje."
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	// pregunta 13--------------------------------------------------------------
	void Pg_xiii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 13:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cuales son los pasos que se debe seguir para      -"
			<< "\t\t\t\t\t\t\t - solucionar problemas de programacion por medio    -"
			<< "\t\t\t\t\t\t\t - de una cumputadora?                               -"			
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Definir el algoritmo, diseniar el algoritmo"
			<< "\t\t\t\t\t\t\t  comparar si se adapta al problema e implementar."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Definición del Problema, Análisis del Problema, Diseño del Algoritmo, Codificación, Prueba y Depuración, Documentación y Mantenimiento"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Implementar el algoritmo y luego analizar el problema"
			<< "\n";	
		cin >> respuesta;
		respuestac = 2;
	}
	// pregunta 14--------------------------------------------------------------
	void Pg_xiv()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 14:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Dentro del lenguaje de control de datos           -" 
			<< "\t\t\t\t\t\t\t - la sentencia GRANT de SQL hace:                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Concede los derechos de acceso a un objeto."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Revoca los derechos de acceso a un objeto."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Concede los derechos de conexión al host."
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}	
	// pregunta 15--------------------------------------------------------------
	void Pg_xv()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 15:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- La Web 2.0 es un elemento que permite:            -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Concepto de las tecnologías de la información y comunicación que se      fundamenta en crear y compartir recursos de diferente naturaleza."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Herramienta para solo enviar correos electrónicos"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Plataforma de alta tecnología de computo para compartir recursos en las redes basadas en Cisco"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}	
	// pregunta 16--------------------------------------------------------------
	void Pg_xvi()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 16:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual de esstos no es un navegador?                -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Mozila"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Opera"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Turbonet"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}	
	// pregunta 17--------------------------------------------------------------
	void Pg_xvii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 17:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Que es un buscador Web?                           -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Posee herramientas para agregar sitios a una intranet"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Es la forma mas económica de navegar"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Es un sitio que me permite buscar contenido en base a palabra claves"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}	
	// pregunta 18--------------------------------------------------------------
	void Pg_xviii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 18:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Acto de transferir un archivo de un servidor al PC-"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Upload"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Download"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Ambas respuestas son correctas"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}	
	// pregunta 19--------------------------------------------------------------
	void Pg_xix()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 19:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Dominios de internet mas comunes:                 -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> .gov.co .com  .edu .org .co .jobs"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> .exe, . bmp, .sys"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> .rar, .tar, . Targz"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}	
	// pregunta 20--------------------------------------------------------------
	void Pg_xx()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 20:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-Que direccion de correo electronico es la correcta?-"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> manuel 1957 @ gmail.com"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> manuel1957@.com"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> manuel1957@gmail.com"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}	
	// pregunta 21--------------------------------------------------------------
	void Pg_xxi()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 21:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- ¿Que es un correo Spam?                           -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Son mensajes no solicitados, no deseados o de remitentes desconocidos."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Son mensajes de remitentes conocidos que casi nunca escriben	"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Correos con copia oculta"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}	
	// pregunta 22--------------------------------------------------------------
	void Pg_xxii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 22:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Sitio para recibir comentarios de otros usuarios: -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Google"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Blog"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Chat"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}	
	// pregunta 23--------------------------------------------------------------
	void Pg_xxiii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 23:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- ¿Que son las redes sociales?                      -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Son grupos de personas que se comunican a traves de proyectos"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Son redes en las cuales se puede comunicar con varias personas a la vez"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Se comunican a traves del telefono"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}	
	// pregunta 24--------------------------------------------------------------
	void Pg_xxiv()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 24:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Que tienen en comun Dropbox y GoogleDrive?        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Son dos navegadores Web"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Son servicios de alojamiento de archivos en la nube"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Son aplicaciones para hacer paginas web"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}	
	// pregunta 25--------------------------------------------------------------
	void Pg_xxv()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 25:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Todos lo equipos deben de tener:                  -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Procesador de textos"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Un sistema operativo"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Una impresora conectada"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}	
	// pregunta 26--------------------------------------------------------------
	void Pg_xxvi()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 26:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                       -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- ¿De las siguiente opciones no es un motor de búsqueda?-"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                       -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Yahoo"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Google"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Microsoft Office"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}	
	// pregunta 27--------------------------------------------------------------		
		void Pg_xxvii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 27:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Se refiere a los componentes fisicos de la computadora:-"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Firmware"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Salida"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Hardware"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	void verificar()
	{
		if (respuesta == respuestac)
		{
			cout << "\n\n\t\t\t\t\t\t\t\t+------------------------------------+\n";
			cout << "\t\t\t\t\t\t\t\t|Felicidades, respuesta correcta     |\n";
			cout << "\t\t\t\t\t\t\t\t+------------------------------------+\n";
			ver_resp = 1;
			nivel++;
			acierto = 1;
		}
		else
		{
			cout << "\n\n\t\t\t\t\t\t\t\t+----------------------------------------+\n";
			cout << "\t\t\t\t\t\t\t\t|Lo sentimos, la respuesta correcta es " << respuestac << " |\n";
			cout << "\t\t\t\t\t\t\t\t+----------------------------------------+\n";
			ver_resp = 0;
			puntaje = 0;
			nivel = 1;
			acierto = 0;
		}

		if (ver_resp == 1)
		{
			if (nivel == 2)
			{
				puntaje += 100;
			}
			if (nivel == 3)
			{
				puntaje += 200;
			}
			if (nivel == 4)
			{
				puntaje += 500;
			}
			if (nivel == 5)
			{
				puntaje += 1000;
			}
			if (nivel == 6)
			{
				puntaje += 1500;
			}
			if (nivel == 7)
			{
				puntaje += 2000;
			}
			if (nivel == 8)
			{
				puntaje += 5000;
			}
			if (nivel == 9)
			{
				puntaje += 10000;
			}
			if (nivel == 10)
			{
				puntaje += 15000;
			}
			if (nivel == 11)
			{
				puntaje += 25000;
			}
			void lvl();
		}
	}
	void resultados();
};
cuestionario ::cuestionario() {}
void cuestionario ::resultados()
{
	system("cls");
	puntaje += banco;
	cout << "\t\t\t\tFelicidades, tu puntaje fue de: " << puntaje;
}
int main()
{
	cuestionario objc;
	system("color a");
	objc.inicio_variables();
	// pregunta 1
	objc.puntos();
	objc.Pg_i();
	objc.verificar();
	objc.select_banco();

	// pregunta 2
	objc.puntos();
	objc.Pg_ii();
	objc.verificar();
	objc.select_banco();

	// pregunta 3
	objc.puntos();
	objc.Pg_iii();
	objc.verificar();
	objc.select_banco();

	// pregunta 4
	objc.puntos();
	objc.Pg_iv();
	objc.verificar();
	objc.select_banco();

	// pregunta5
	objc.puntos();
	objc.Pg_v();
	objc.verificar();
	objc.select_banco();

	// pregunta6
	objc.puntos();
	objc.Pg_vi();
	objc.verificar();
	objc.select_banco();

	// pregunta 7
	objc.puntos();
	objc.Pg_vii();
	objc.verificar();
	objc.select_banco();

	// pregunta 8
	objc.puntos();
	objc.Pg_viii();
	objc.verificar();
	objc.select_banco();

	// pregunta 9
	objc.puntos();
	objc.Pg_ix();
	objc.verificar();
	objc.select_banco();

	// pregunta 10
	objc.puntos();
	objc.Pg_x();
	objc.verificar();

	//pregunta 11 
	objc.puntos();
	objc.Pg_xi();
	objc.verificar();
	objc.select_banco();

	//pregunta 12
	objc.puntos();
	objc.Pg_xii();
	objc.verificar();
	objc.select_banco();

	//pregunta 13
	objc.puntos();
	objc.Pg_xiii();
	objc.verificar();
	objc.select_banco();

	//pregunta 14
	objc.puntos();
	objc.Pg_xiv();
	objc.verificar();
	objc.select_banco();

	//pregunta 15
	objc.puntos();
	objc.Pg_xv();
	objc.verificar();
	objc.select_banco();

	//pregunta 16
	objc.puntos();
	objc.Pg_xvi();
	objc.verificar();
	objc.select_banco();

	//pregunta 17
	objc.puntos();
	objc.Pg_xvii();
	objc.verificar();
	objc.select_banco();

	//pregunta 18
	objc.puntos();
	objc.Pg_xviii();
	objc.verificar();
	objc.select_banco();

	//pregunta 19
	objc.puntos();
	objc.Pg_xix();
	objc.verificar();
	objc.select_banco();

	//pregunta 20
	objc.puntos();
	objc.Pg_xx();
	objc.verificar();
	objc.select_banco();

	//pregunta 21
	objc.puntos();
	objc.Pg_xxi();
	objc.verificar();
	objc.select_banco();

	//pregunta 22
	objc.puntos();
	objc.Pg_xxii();
	objc.verificar();
	objc.select_banco();

	//pregunta 23
	objc.puntos();
	objc.Pg_xxiii();
	objc.verificar();
	objc.select_banco();
	//pregunta 24
	objc.puntos();
	objc.Pg_xxiv();
	objc.verificar();
	objc.select_banco();

	//pregunta 25
	objc.puntos();
	objc.Pg_xxv();
	objc.verificar();
	objc.select_banco();
	//pregunta 26
	objc.puntos();
	objc.Pg_xxvi();
	objc.verificar();
	objc.select_banco();

	//pregunta 27
	objc.puntos();
	objc.Pg_xxvii();
	objc.verificar();
	objc.resultados();

}
