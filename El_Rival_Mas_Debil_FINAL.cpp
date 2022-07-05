#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
class cuestionario
{
public:
	int puntaje, banco, respuesta, nivel, ver_resp, respuestac, acierto,rondas,rondas_max, pun_j1, pun_j2;
	char j1, j2;
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
		
	}
	// PREGUNTA 3--------------------------------------------------------------------
	void Pg_iii()
	{
		
	}
	// PREGUNTA 4-------------------------------------------------------------------
	void Pg_iv()
	{
		
	}
	// PRGUNTA 5------------------------------------------------------------------
	void Pg_v()
	{
		
	}
	// pregunta 6-----------------------------------------------------------------
	void Pg_vi()
	{
		
	}
	// PREGUNTA 7---------------------------------------------------------------------
	void Pg_vii()
	{
		
	}
	// pregunta 8---------------------------------------------------------------------
	void Pg_viii()
	{
		
	}
	// Pregunta 9---------------------------------------------------------------------
	void Pg_ix()
	{
		
    }
	// pregunta 10--------------------------------------------------------------
	void Pg_x()
	{
		
	}
	// pregunta 11--------------------------------------------------------------
	void Pg_xi()
	{
		
	}
	// pregunta 12--------------------------------------------------------------
	void Pg_xii()
	{
		
	}
	// pregunta 13--------------------------------------------------------------
	void Pg_xiii()
	{
		
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
	// pregunta 15--------------------------------------------------------------
	void Pg_xv()
	{
		
	}	
	// pregunta 16--------------------------------------------------------------
	void Pg_xvi()
	{
		
	}	
	// pregunta 17--------------------------------------------------------------
	void Pg_xvii()
	{
		
	}	
	// pregunta 18--------------------------------------------------------------
	void Pg_xviii()
	{
		
	}	
	// pregunta 19--------------------------------------------------------------
	void Pg_xix()
	{
		
	}	
	// pregunta 20--------------------------------------------------------------
	void Pg_xx()
	{
		
	}	
	// pregunta 21--------------------------------------------------------------
	void Pg_xxi()
	{
		
	}	
	// pregunta 22--------------------------------------------------------------
	void Pg_xxii()
	{
		
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
	// pregunta 24--------------------------------------------------------------
	void Pg_xxiv()
	{
		
	}	
	// pregunta 25--------------------------------------------------------------
	void Pg_xxv()
	{
		
	}	
	// pregunta 26--------------------------------------------------------------
	void Pg_xxvi()
	{
		
	}	
	// pregunta 27--------------------------------------------------------------		
	void Pg_xxvii()
	{
		
	}
	void Pg_xxviii()
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 28:"
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
	void Pg_xxix()
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 29:"
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
	void Pg_xxx()
	{
        
	}
	void Pg_xxxi()
	{
        
	}
	void Pg_xxxii()
	{
        
	}
	void Pg_xxxiii()//Listo
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 33:"
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
	void Pg_xxxiv()
	{
        cout << "\t\t\t\t\t\t\t\t\tPregunta 34:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual es el valor de PI?                           -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                   -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-----------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> 3.1415826"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> 3.1415962"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> 3.1415926"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 3;
	}
	void Pg_xxxv()
	{
		
	}
	void Pg_xxxvi()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 36:"
			<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-  Cual es el decimo elemento de la tabla periodica?        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
			<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Sodio"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Neon"
			<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Nitrogeno"
			<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	void Pg_xxxvii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 37:"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t-  Cual es el segundo elemento de la tabla periodica?       -"
            << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
            << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
            << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> Helio"
            << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Litio"
            << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Mercurio"
            << "\n";
        cout << "\t\t\t\t\t\t\t---->";
        cin >> respuesta;
        respuestac = 3;
	}
	void Pg_xxxviii()
	{
		
	}
	void Pg_xxxix()
	{
		
	}
	void Pg_xl()
	{
		
	}
	void Pg_xli()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 41:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-  En que anioo se cayo el muro de Berlin?                    -"
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
	void Pg_xlii()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 42:"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t- Cual es el simbolo del oro?                            -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t-                                                        -"
				<< "\n";
		cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 1 ---> Hg"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 2 ---> Au"
				<< "\n";
		cout << "\t\t\t\t\t\t\t 3 ---> Ag"
				<< "\n";
		cout << "\t\t\t\t\t\t\t---->";
		cin >> respuesta;
		respuestac = 2;
	}
	void Pg_xliii()
	{
		
	}
	void Pg_xliv()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 44:"
                << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
                << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
                << "\n";
        cout << "\t\t\t\t\t\t\t- Cual es la capital de Portugal?                          -"
                << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
                << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
                << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> Lisboa"
                << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Madrid"
                << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Barcelona"
                << "\n";
        cout << "\t\t\t\t\t\t\t---->";
        cin >> respuesta;
        respuestac = 1;
	}
	void Pg_xlv()
	{
		
	}
	void Pg_xlvi()
	{
		
	}
	void Pg_xlvii()
	{
		
	}
	void Pg_xlviii()
	{
		
	}
	void Pg_xlix()
	{
		
	}
	void Pg_l()
	{
		cout << "\t\t\t\t\t\t\t\t\tPregunta 50:"
                << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
                << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
                << "\n";
        cout << "\t\t\t\t\t\t\t- Cual es el nombre de la ciudad de la capital de China?  -"
                << "\n";
        cout << "\t\t\t\t\t\t\t-                                                        -"
                << "\n";
        cout << "\t\t\t\t\t\t\t----------------------------------------------------------"
                << "\n";
        cout << "\t\t\t\t\t\t\t 1 ---> Pekin"
                << "\n";
        cout << "\t\t\t\t\t\t\t 2 ---> Beijing"
                << "\n";
        cout << "\t\t\t\t\t\t\t 3 ---> Shanghai"
                << "\n";
        cout << "\t\t\t\t\t\t\t---->";
        cin >> respuesta;
        respuestac = 1;
	}
	void puntaje_ms()
	{

	}
	void muerte_nombres()
	{
		cout<<"Inserte el nombre del jugador 1";
		cin>>j1;
		cout << "Inserte el nombre del jugador 2: ";
		cin>>j2;
	}
	void muerte_cabecera()
	{
		cout<<"\n"<<j1<<"Puntaje"<<pun_j1<<"\n";
		cout<<j2<<"Puntaje"<<pun_j2<<"\n";
	}
	void muerte_i_j1()
	{
		cout <<"Pregunta 1";
	}
    void muerte_i_j2()
    {
        cout <<"Pregunta 2";
    }
	void verificar()
	{
		system("cls");
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
	objc.select_banco();

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
    objc.fin_ronda();

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
    objc.fin_ronda();

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
    objc.fin_ronda();

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

	// pregunta 36
	objc.puntos();
	objc.Pg_xxxvi();
	objc.verificar();
	objc.select_banco();
	objc.fin_ronda();

	// pregunta 37 //Inicia ultima ronda
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
    objc.Pg_xxxix();
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

	// pregunta 45
	objc.puntos();
	objc.Pg_xlv();
	objc.verificar();
	objc.select_banco();

	// pregunta 46
	objc.puntos();
	objc.Pg_xlvi();
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
    cout<< "\nFin del programa\n";
	system("pause");
}
