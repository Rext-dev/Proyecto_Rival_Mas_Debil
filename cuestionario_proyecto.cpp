#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
class cuestionario
{
public:
	int puntaje, banco, respuesta, nivel, ver_resp, respuestac, acierto,rondas,rondas_max;
	cuestionario();
	//-------------------------iniciar variables-------------------------

	void lvl()
	{
		if (nivel > 11)
		{
			nivel = 1;
			banco += 25000;
		}
	}
	void inicio_variables()
	{
		rondas = 1;
		rondas_max = 5;
		nivel = 1;
		puntaje = 0;
		banco = 0;
		acierto = 0;
	}
	//-------------------------BANCO--------------------------------------
	void select_banco()
	{
		if (acierto == 1 && nivel >=3)
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
	//-------------------------Rondas--------------------------------------
	void fin_ronda()
	{
		cout<<"Fin de la ronda\n";
		cout << "Puntaje: " << puntaje << "\n";
		cout << "Banco: " << banco << "\n";
		puntaje =0;
		nivel=1;
		system("pause");
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
		cout << "\t\t\t\t\t\t\t- Cuantos huesos tiene el cuerpo humano?            -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 345"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> 206"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> 195"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
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
		cout << "\t\t\t\t\t\t\t- Cual es el disco mas vendido de la historia?     -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Thriller"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Back in black"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Saturday Night Fever"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
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
		cout << "\t\t\t\t\t\t\t- Cuantos lados tiene un heptagono?                -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Ocho lados"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Nueve lados"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Siete lados"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
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
		cout << "\t\t\t\t\t\t\t- En que anios ocurrio la Primera guerra mundial?    -"
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
		cout << "\t\t\t\t\t\t\t- En que anios ocurrio la segunda guerra mundiaL?    -"
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
		cout << "\t\t\t\t\t\t\t 2 ---> La unidad elemental de informacion."
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
		cout << "\t\t\t\t\t\t\t- Se puede recuperar un archivo borrado?           -"
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
		cout << "\t\t\t\t\t\t\t- Cuales son los pasos que se debe seguir para      -\n"
			<< "\t\t\t\t\t\t\t - solucionar problemas de programacion por medio    -\n"
			<< "\t\t\t\t\t\t\t - de una cumputadora?                               -"			
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Definir el algoritmo, diseniar el algoritmo\n"
			<< "\t\t\t\t\t\t\t  comparar si se adapta al problema e implementar."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Definicion del Problema, Analisis del Problema, Disenio del Algoritmo, Codificacion, \n\t\t\t\t\t\t\tPrueba y Depuracion, Documentacion y Mantenimiento"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Implementar el algoritmo y luego analizar el problema"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
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
		cout << "\t\t\t\t\t\t\t- Dentro del lenguaje de control de datos           -\n" 
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
		cout << "\t\t\t\t\t\t\t 3 ---> Concede los derechos de conexion al host."
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
		cout << "\t\t\t\t\t\t\t 1 ---> Concepto de las tecnologias de la informacion y comunicacion que se      fundamenta en crear y compartir recursos de diferente naturaleza."
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Herramienta para solo enviar correos electronicos"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Plataforma de alta tecnologia de computo para compartir recursos en las redes basadas en Cisco"
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
		cout << "\t\t\t\t\t\t\t 2 ---> Es la forma mas economica de navegar"
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
		cout << "\t\t\t\t\t\t\t 3 ---> .rar, .tar, .Targz"
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
		cout << "\t\t\t\t\t\t\t- Que es un correo Spam?                           -"
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
		cout << "\t\t\t\t\t\t\t-  Que son las redes sociales?                      -"
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
		cout << "\t\t\t\t\t\t\t-  De las siguiente opciones no es un motor de busqueda?-"
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
	void Pg_xxviii()
	{
        
        cout << "\t\t\t\t\t\t\t\t\tPregunta 28:"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t- Se refiere a las redes sociales:                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> Grupos de personas que se comunican en proyectos"
            << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Redes relacionales personales o laborales en las que se comunican varias personas a la vez"
            << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Se comunica a traves de un telefono"
            << "\n";
        cout << "\t\t\t\t\t\t\t---->";
        cin >> respuesta;
        respuestac = 2;



	}
	void Pg_xxix()
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 29:"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t- Que tienen de comun onedrive, dropbox y google drive?  -"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> Navegadores web"
            << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Servicios de alojamiento de archivos en la nubes"
            << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Servicios para crear paginas web"
            << "\n";
        cout << "\t\t\t\t\t\t\t---->";
        cin >> respuesta;   
        respuestac = 2;

	}
	void Pg_xxx()
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 30:"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t- Un elemento fundamental de una computadora es:            -"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"  
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> Procesador de texto"
            << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Impresora"
            << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Sistema operativo"
            << "\n";
        cout << "\t\t\t\t\t\t\t---->";
        cin >> respuesta;
        respuestac = 3;

	}
	void Pg_xxxi()
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 31:"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t- Es el lugar mas frio del planeta:                       -"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> La antartida"
            << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Polo Norte"
            << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Finlandia"
            << "\n";
        cout << "\t\t\t\t\t\t\t---->"; 
        cin >> respuesta;
        respuestac = 1;

	}
	void Pg_xxxii()
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 32:"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t- Quien es el fundador principal de apple:                -"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> Steve Jobs"
            << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Steve Wozniak"
            << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Steven Montero"
            << "\n";
        cout << "\t\t\t\t\t\t\t---->";
        cin >> respuesta;
        respuestac = 1;
	}
	void Pg_xxxiii()
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 33:"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t- Quiene es el autor del quijote?                          -"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> Miguel de Cervantes"
            << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Charles Dickens"
            << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Herman Melville"
            << "\n";
        cout << "\t\t\t\t\t\t\t---->";
        cin >> respuesta;
        respuestac = 1;


	}
	void Pg_xxxiv()
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 34:"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t- Cual es el organo mas grande?                          -"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> Estomago"
            << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Pancras"
            << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Piel"
            << "\n";
        cout << "\t\t\t\t\t\t\t---->";
        cin >> respuesta;
        respuestac = 3;
	}
	void Pg_xxxv()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 35:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cul es la pelicula mas taquillera de la historia?        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Avatar"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Avengers: Endgame"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Titanic"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	void Pg_xxxvi()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 36:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-  Cual es el primer elemento de la tabla periodica?        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Hidrogeno"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Helio"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Litio"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}
	void Pg_xxxvii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 37:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-  Que es un hipervinculo?                                -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Un editor de fotos"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Un enlace"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Un compilador"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	void Pg_xxxviii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 38:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-  En que anioo ca el muro de Berlin?                    -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 1980"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> 1985"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> 1989"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	void Pg_xxxxix()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 39:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t- Que parte del cuerpo produce insulina?                -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Higado"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Bazo"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Pancreas"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	void Pg_xl()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 40:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual es la planta mas grande del sistema solar?          -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Jupiter"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Saturno"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Marte"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}
	void Pg_xli()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 41:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t- Que significa bit?                                    -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 8"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> binary digit"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Calidad"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	void Pg_xlii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 42:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual es la formula del agua?                            -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> O2"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> H2O"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Fe"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	void Pg_xliii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 43:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-  Cual es el animal mas grande de la tierra?              -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Oso polar"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Hipopotamo"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Ballena azul"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	void Pg_xliv()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 44:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"

				<< "\n";
		cout << "\t\t\t\t\t\t\t-  Quien escribio La Odisea?                              -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> homero"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> newton"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> derwin"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}
	void Pg_xlv()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 45:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-  Como se llama el triangulo que tiene sus tres lados iguales?"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> equilatero"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> isosceles"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> escaleno"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}
	void Pg_xlvi()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 46:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-  Quien invento la television a color?                    -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Guillermo Gonzalez Camarena"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Elmer Figueroa Arce"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> John Logie Baird"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}
	void Pg_xlvii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 47:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual es el mineral mas duro del planeta?               -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> El oro"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> El diamante"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> El cobre"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	void Pg_xlviii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 48:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual es la capital de Mongolia?                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Ulan Bator"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Aguascalientes"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Mexicali"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 1;
	}
	void Pg_xlix()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 49:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t- Donde originaron los juegos olimpicos?                 -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Mexico"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Argentina"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Grecia"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	void Pg_l()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 50:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t- Quien era el dios romano de la guerra?                  -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Belerofonte"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Marte"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Ares"
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
				puntaje = 100;
			}
			if (nivel == 3)
			{
				puntaje = 200;
			}
			if (nivel == 4)
			{
				puntaje = 500;
			}
			if (nivel == 5)
			{
				puntaje = 1000;
			}
			if (nivel == 6)
			{
				puntaje = 1500;
			}
			if (nivel == 7)
			{
				puntaje = 2000;
			}
			if (nivel == 8)
			{
				puntaje = 5000;
			}
			if (nivel == 9)
			{
				puntaje = 10000;
			}
			if (nivel == 10)
			{
				puntaje = 15000;
			}
			if (nivel == 11)
			{
				puntaje = 25000;
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
	objc.fin_ronda();

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
	objc.fin_ronda();
//insertar 23 preguntas mas
	//pregunta 27
	objc.puntos();
	objc.Pg_xxvii();
	objc.verificar();
	objc.select_banco();

	// pregunta 28
	objc.puntos();
	objc.Pg_xxviii();
	objc.verificar();
	objc.select_banco();	

	// pregunta 29 
	objc.puntos();
	objc.Pg_xxix();
	objc.verificar();
	objc.select_banco();

	// pregunta 30
	objc.puntos();
	objc.Pg_xxx();
	objc.verificar();
	objc.select_banco();


	// pregunta 31 
	objc.puntos();
	objc.Pg_xxxi();
	objc.verificar();
	objc.select_banco();

	// pregunta 32
	objc.puntos();
	objc.Pg_xxxii();
	objc.verificar();
	objc.select_banco();

	// pregunta 33
	objc.puntos();
	objc.Pg_xxxiii();
	objc.verificar();
	objc.select_banco();

	// pregunta 34 
	objc.puntos();
	objc.Pg_xxxiv();
	objc.verificar();
	objc.select_banco();

	// pregunta 35
	objc.puntos();
	objc.Pg_xxxv();
	objc.verificar();
	objc.select_banco();
	
	//pregunta 36
	objc.puntos();
	objc.Pg_xxxvi();
	objc.verificar();
	objc.select_banco();
	objc.fin_ronda();

	// pregunta 37 //añadir mas y fin de ronda hasta el 44
	objc.puntos();
	objc.Pg_xxxvii();
	objc.verificar();
	objc.select_banco();

	// pregunta 38
	objc.puntos();
	objc.Pg_xxxviii();
	objc.verificar();
	objc.select_banco();

	// pregunta 39
	objc.puntos();
	objc.Pg_xxxiv();
	objc.verificar();
	objc.select_banco();

	// pregunta 40
	objc.puntos();
	objc.Pg_xl();
	objc.verificar();
	objc.select_banco();
	
	// pregunta 41
	objc.puntos();
	objc.Pg_xli();
	objc.verificar();
	objc.select_banco();

	// pregunta 42
	objc.puntos();
	objc.Pg_xlii();
	objc.verificar();
	objc.select_banco();

	// pregunta 43
	objc.puntos();
	objc.Pg_xliii();
	objc.verificar();
	objc.select_banco();

	// pregunta 44
	objc.puntos();
	objc.Pg_xliv();
	objc.verificar();
	objc.select_banco();
	objc.fin_ronda();
	
	// pregunta 45
	objc.puntos();
	objc.Pg_xlv();
	objc.verificar();
	objc.select_banco();

	// pregunta 46
	objc.puntos();
	objc.Pg_xxvi();
	objc.verificar();
	objc.select_banco();

	// pregunta 47
	objc.puntos();
	objc.Pg_xlvii();
	objc.verificar();
	objc.select_banco();

	// pregunta 48 
	objc.puntos();
	objc.Pg_xlviii();
	objc.verificar();
	objc.select_banco();

	// pregunta 49
	objc.puntos();
	objc.Pg_xlix();
	objc.verificar();
	objc.select_banco();

	// pregunta 50
	objc.puntos();
	objc.Pg_l();
	objc.verificar();
	objc.select_banco();
	objc.fin_ronda();
	
	//PREGUNTAS FINALES (HAY QUE PONERLAS MAS DIFICILES)
	system("pause");
}
