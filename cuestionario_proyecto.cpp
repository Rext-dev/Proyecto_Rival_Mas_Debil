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
            cout << "\t\t\t\t----------------------------"
                << "\n";
            cout << "\t\t\t\t-          25000           -"
                << "\n";
            cout << "\t\t\t\t-          15000           -"
                << "\n";
            cout << "\t\t\t\t-          10000           -"
                << "\n";
            cout << "\t\t\t\t-           5000           -"
                << "\n";
            cout << "\t\t\t\t-           2000           -"
                << "\n";
            cout << "\t\t\t\t-           1500           -"
                << "\n";
            cout << "\t\t\t\t-           1000           -"
                << "\n";
            cout << "\t\t\t\t-            500           -"
                << "\n";
            cout << "\t\t\t\t-----------> 200 <----------"
                << "\n";
            cout << "\t\t\t\t-            100           -"
                << "\n";
            cout << "\t\t\t\t----------------------------"
                << "\n\n\n";
        }
        if (nivel == 3)
        {
            cout << "\t\t\t\t----------------------------"
                << "\n";
            cout << "\t\t\t\t-          25000           -"
                << "\n";
            cout << "\t\t\t\t-          15000           -"
                << "\n";
            cout << "\t\t\t\t-          10000           -"
                << "\n";
            cout << "\t\t\t\t-           5000           -"
                << "\n";
            cout << "\t\t\t\t-           2000           -"
                << "\n";
            cout << "\t\t\t\t-           1500           -"
                << "\n";
            cout << "\t\t\t\t-           1000           -"
                << "\n";
            cout << "\t\t\t\t-----------> 500 <----------"
                << "\n";
            cout << "\t\t\t\t-            200           -"
                << "\n";
            cout << "\t\t\t\t-            100           -"
                << "\n";
            cout << "\t\t\t\t----------------------------"
                << "\n\n\n";
        }
        if (nivel == 4)
        {
            cout << "\t\t\t\t----------------------------"
                << "\n";
            cout << "\t\t\t\t-          25000           -"
                << "\n";
            cout << "\t\t\t\t-          15000           -"
                << "\n";
            cout << "\t\t\t\t-          10000           -"
                << "\n";
            cout << "\t\t\t\t-           5000           -"
                << "\n";
            cout << "\t\t\t\t-           2000           -"
                << "\n";
            cout << "\t\t\t\t-           1500           -"
                << "\n";
            cout << "\t\t\t\t----------> 1000 <----------"
                << "\n";
            cout << "\t\t\t\t-            500           -"
                << "\n";
            cout << "\t\t\t\t-            200           -"
                << "\n";
            cout << "\t\t\t\t-            100           -"
                << "\n";
            cout << "\t\t\t\t----------------------------"
                << "\n\n\n";
        }
        if (nivel == 5)
        {
            cout << "\t\t\t\t----------------------------"
                << "\n";
            cout << "\t\t\t\t-          25000           -"
                << "\n";
            cout << "\t\t\t\t-          15000           -"
                << "\n";
            cout << "\t\t\t\t-          10000           -"
                << "\n";
            cout << "\t\t\t\t-           5000           -"
                << "\n";
            cout << "\t\t\t\t-           2000           -"
                << "\n";
            cout << "\t\t\t\t----------> 1500 <----------"
                << "\n";
            cout << "\t\t\t\t-           1000           -"
                << "\n";
            cout << "\t\t\t\t-            500           -"
                << "\n";
            cout << "\t\t\t\t-            200           -"
                << "\n";
            cout << "\t\t\t\t-            100           -"
                << "\n";
            cout << "\t\t\t\t----------------------------"
                << "\n\n\n";
        }
        if (nivel == 6)
        {
            cout << "\t\t\t\t----------------------------"
                << "\n";
            cout << "\t\t\t\t-          25000           -"
                << "\n";
            cout << "\t\t\t\t-          15000           -"
                << "\n";
            cout << "\t\t\t\t-          10000           -"
                << "\n";
            cout << "\t\t\t\t-           5000           -"
                << "\n";
            cout << "\t\t\t\t----------> 2000 <----------"
                << "\n";
            cout << "\t\t\t\t-           1500           -"
                << "\n";
            cout << "\t\t\t\t-           1000           -"
                << "\n";
            cout << "\t\t\t\t-            500           -"
                << "\n";
            cout << "\t\t\t\t-            200           -"
                << "\n";
            cout << "\t\t\t\t-            100           -"
                << "\n";
            cout << "\t\t\t\t----------------------------"
                << "\n\n\n";
        }
        if (nivel == 7)
        {
            cout << "\t\t\t\t----------------------------"
                << "\n";
            cout << "\t\t\t\t-          25000           -"
                << "\n";
            cout << "\t\t\t\t-          15000           -"
                << "\n";
            cout << "\t\t\t\t-          10000           -"
                << "\n";
            cout << "\t\t\t\t----------> 5000 <----------"
                << "\n";
            cout << "\t\t\t\t-           2000           -"
                << "\n";
            cout << "\t\t\t\t-           1500           -"
                << "\n";
            cout << "\t\t\t\t-           1000           -"
                << "\n";
            cout << "\t\t\t\t-            500           -"
                << "\n";
            cout << "\t\t\t\t-            200           -"
                << "\n";
            cout << "\t\t\t\t-            100           -"
                << "\n";
            cout << "\t\t\t\t----------------------------"
                << "\n\n\n";
        }
        if (nivel == 8)
        {
            cout << "\t\t\t\t----------------------------"
                << "\n";
            cout << "\t\t\t\t-          25000           -"
                << "\n";
            cout << "\t\t\t\t-          15000           -"
                << "\n";
            cout << "\t\t\t\t---------> 10000 <----------"
                << "\n";
            cout << "\t\t\t\t-           5000           -"
                << "\n";
            cout << "\t\t\t\t-           2000           -"
                << "\n";
            cout << "\t\t\t\t-           1500           -"
                << "\n";
            cout << "\t\t\t\t-           1000           -"
                << "\n";
            cout << "\t\t\t\t-            500           -"
                << "\n";
            cout << "\t\t\t\t-            200           -"
                << "\n";
            cout << "\t\t\t\t-            100           -"
                << "\n";
            cout << "\t\t\t\t----------------------------"
                << "\n\n\n";
        }
        if (nivel == 9)
        {
            cout << "\t\t\t\t----------------------------"
                << "\n";
            cout << "\t\t\t\t-          25000           -"
                << "\n";
            cout << "\t\t\t\t---------> 15000 <----------"
                << "\n";
            cout << "\t\t\t\t-          10000           -"
                << "\n";
            cout << "\t\t\t\t-           5000           -"
                << "\n";
            cout << "\t\t\t\t-           2000           -"
                << "\n";
            cout << "\t\t\t\t-           1500           -"
                << "\n";
            cout << "\t\t\t\t-           1000           -"
                << "\n";
            cout << "\t\t\t\t-            500           -"
                << "\n";
            cout << "\t\t\t\t-            200           -"
                << "\n";
            cout << "\t\t\t\t-            100           -"
                << "\n";
            cout << "\t\t\t\t----------------------------"
                << "\n\n\n";
        }
        if (nivel == 10)
        {
            cout << "\t\t\t\t----------------------------"
                << "\n";
            cout << "\t\t\t\t---------> 25000 <----------"
                << "\n";
            cout << "\t\t\t\t-          15000           -"
                << "\n";
            cout << "\t\t\t\t-          10000           -"
                << "\n";
            cout << "\t\t\t\t-           5000           -"
                << "\n";
            cout << "\t\t\t\t-           2000           -"
                << "\n";
            cout << "\t\t\t\t-           1500           -"
                << "\n";
            cout << "\t\t\t\t-           1000           -"
                << "\n";
            cout << "\t\t\t\t-            500           -"
                << "\n";
            cout << "\t\t\t\t-            200           -"
                << "\n";
            cout << "\t\t\t\t-            100           -"
                << "\n";
            cout << "\t\t\t\t----------------------------"
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
            cout << "\n\n\\t\t\t\t\t\t\t\t+----------------------------------------+\n";
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
    objc.resultados();
}
