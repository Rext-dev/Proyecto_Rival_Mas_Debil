#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
class cuestionario{
	public:
		int puntaje, banco, respuesta, nivel,ver_resp,respuestac,acierto;
		cuestionario();
	//-------------------------iniciar variables-------------------------
	
	void inicio_variables(){
		nivel = 1;
		puntaje = 0;
		banco = 0;
		acierto = 0;
	}
	//-------------------------BANCO--------------------------------------
	void select_banco(){
		if(acierto==1){
			cout<<"-> ";
			cin>>respuesta;
			if(respuesta==9){
				cout<<"Tu dinero fue insertado en el banco";
				banco = banco+puntaje;
				puntaje = 0;
				nivel = 1;
			}else {
				cout<<"Sin cambios\n";
			}
		}
	}
	//-------------------------PUNTAJE Y PUNTOS---------------------------
	void puntos(){
		
		system("cls");
		cout<<"                                                         Puntaje: "<<puntaje<<"\n";
		cout<<"                                                         Banco: "<<banco<<"\n\n";
		if(nivel==1){
			cout<<"----------------------------"<<"\n";
			cout<<"-          25000           -"<<"\n";
			cout<<"-          15000           -"<<"\n";
			cout<<"-          10000           -"<<"\n";
			cout<<"-           5000           -"<<"\n";
			cout<<"-           2000           -"<<"\n";
			cout<<"-           1500           -"<<"\n";
			cout<<"-           1000           -"<<"\n";
			cout<<"-            500           -"<<"\n";
			cout<<"-            200           -"<<"\n";
			cout<<"-----------> 100 <----------"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		if(nivel==2){
			cout<<"----------------------------"<<"\n";
			cout<<"-          25000           -"<<"\n";
			cout<<"-          15000           -"<<"\n";
			cout<<"-          10000           -"<<"\n";
			cout<<"-           5000           -"<<"\n";
			cout<<"-           2000           -"<<"\n";
			cout<<"-           1500           -"<<"\n";
			cout<<"-           1000           -"<<"\n";
			cout<<"-            500           -"<<"\n";
			cout<<"-----------> 200 <----------"<<"\n";
			cout<<"-            100           -"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		if(nivel==3){
			cout<<"----------------------------"<<"\n";
			cout<<"-          25000           -"<<"\n";
			cout<<"-          15000           -"<<"\n";
			cout<<"-          10000           -"<<"\n";
			cout<<"-           5000           -"<<"\n";
			cout<<"-           2000           -"<<"\n";
			cout<<"-           1500           -"<<"\n";
			cout<<"-           1000           -"<<"\n";
			cout<<"-----------> 500 <----------"<<"\n";
			cout<<"-            200           -"<<"\n";
			cout<<"-            100           -"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		if(nivel==4){
			cout<<"----------------------------"<<"\n";
			cout<<"-          25000           -"<<"\n";
			cout<<"-          15000           -"<<"\n";
			cout<<"-          10000           -"<<"\n";
			cout<<"-           5000           -"<<"\n";
			cout<<"-           2000           -"<<"\n";
			cout<<"-           1500           -"<<"\n";
			cout<<"----------> 1000 <----------"<<"\n";
			cout<<"-            500           -"<<"\n";
			cout<<"-            200           -"<<"\n";
			cout<<"-            100           -"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		if(nivel==5){
			cout<<"----------------------------"<<"\n";
			cout<<"-          25000           -"<<"\n";
			cout<<"-          15000           -"<<"\n";
			cout<<"-          10000           -"<<"\n";
			cout<<"-           5000           -"<<"\n";
			cout<<"-           2000           -"<<"\n";
			cout<<"----------> 1500 <----------"<<"\n";
			cout<<"-           1000           -"<<"\n";
			cout<<"-            500           -"<<"\n";
			cout<<"-            200           -"<<"\n";
			cout<<"-            100           -"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		if(nivel==6){
			cout<<"----------------------------"<<"\n";
			cout<<"-          25000           -"<<"\n";
			cout<<"-          15000           -"<<"\n";
			cout<<"-          10000           -"<<"\n";
			cout<<"-           5000           -"<<"\n";
			cout<<"----------> 2000 <----------"<<"\n";
			cout<<"-           1500           -"<<"\n";;
			cout<<"-           1000           -"<<"\n";
			cout<<"-            500           -"<<"\n";
			cout<<"-            200           -"<<"\n";
			cout<<"-            100           -"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		if(nivel==7){
			cout<<"----------------------------"<<"\n";
			cout<<"-          25000           -"<<"\n";
			cout<<"-          15000           -"<<"\n";
			cout<<"-          10000           -"<<"\n";
			cout<<"----------> 5000 <----------"<<"\n";
			cout<<"-           2000           -"<<"\n";
			cout<<"-           1500           -"<<"\n";
			cout<<"-           1000           -"<<"\n";
			cout<<"-            500           -"<<"\n";
			cout<<"-            200           -"<<"\n";
			cout<<"-            100           -"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		if(nivel==8){
			cout<<"----------------------------"<<"\n";
			cout<<"-          25000           -"<<"\n";
			cout<<"-          15000           -"<<"\n";
			cout<<"---------> 10000 <----------"<<"\n";
			cout<<"-           5000           -"<<"\n";
			cout<<"-           2000           -"<<"\n";
			cout<<"-           1500           -"<<"\n";
			cout<<"-           1000           -"<<"\n";
			cout<<"-            500           -"<<"\n";
			cout<<"-            200           -"<<"\n";
			cout<<"-            100           -"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		if(nivel==9){
			cout<<"----------------------------"<<"\n";
			cout<<"-          25000           -"<<"\n";
			cout<<"---------> 15000 <----------"<<"\n";
			cout<<"-          10000           -"<<"\n";
			cout<<"-           5000           -"<<"\n";
			cout<<"-           2000           -"<<"\n";
			cout<<"-           1500           -"<<"\n";
			cout<<"-           1000           -"<<"\n";
			cout<<"-            500           -"<<"\n";
			cout<<"-            200           -"<<"\n";
			cout<<"-            100           -"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		if(nivel==10){
			cout<<"----------------------------"<<"\n";
			cout<<"---------> 25000 <----------"<<"\n";
			cout<<"-          15000           -"<<"\n";
			cout<<"-          10000           -"<<"\n";
			cout<<"-           5000           -"<<"\n";
			cout<<"-           2000           -"<<"\n";
			cout<<"-           1500           -"<<"\n";
			cout<<"-           1000           -"<<"\n";
			cout<<"-            500           -"<<"\n";
			cout<<"-            200           -"<<"\n";
			cout<<"-            100           -"<<"\n";
			cout<<"----------------------------"<<"\n\n\n";
		}
		
	}
	
	
	//PREGUNTAS---------------------------------------------------------------
	void Pg_i(){
		cout<<"Pregunta 1:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- Quien fue el primer presidente electo en mexico?  -"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> Benito Juarez                            "<<"\n";
		cout<<" 2 ---> Guadalupe Vitoria               "<<"\n";
		cout<<" 3 ---> Jose Miguel Ramon"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 2;
	}
	void Pg_ii(){
		cout<<"Pregunta 2:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- Cuantos estados tiene Estados Unidos?             -"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> 45"<<"\n";
		cout<<" 2 ---> 48"<<"\n";
		cout<<" 3 ---> 52"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 3;
	}
	//PREGUNTA 3--------------------------------------------------------------------
	void Pg_iii(){
		cout<<"Pregunta 3:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- Cual es el rio mas largo del mundo?               -"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> Nilo"<<"\n";
		cout<<" 2 ---> Amazonas"<<"\n";
		cout<<" 3 ---> Misisispi"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 2;
	}
	//PREGUNTA 4-------------------------------------------------------------------
	void Pg_iv(){
		cout<<"Pregunta 4:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- En que a�os ocurrio la Primera guerra mundial?    -"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> 1914-1918"<<"\n";
		cout<<" 2 ---> 1924-1928"<<"\n";
		cout<<" 3 ---> 1915-1921"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 1;
	}
	//PRGUNTA 5------------------------------------------------------------------
	void Pg_v(){
		cout<<"Pregunta 5:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- En que a�os ocurrio la segunda guerra mundiaL?    -"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> 1935-1940"<<"\n";
		cout<<" 2 ---> 1939-1945"<<"\n";
		cout<<" 3 ---> 1940-1945"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 2;
	}
	//pregunta 6-----------------------------------------------------------------
	void Pg_vi(){
		cout<<"Pregunta 6:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- Cual es el oceano mas grande del mundo?           -"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> Indico "<<"\n";
		cout<<" 2 ---> Antartico "<<"\n";
		cout<<" 3 ---> Pacifico"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 3;
	}
	//PREGUNTA 7---------------------------------------------------------------------
	void Pg_vii(){
		cout<<"Pregunta 7:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- Cuanto mide la torre eiffel-"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> 312m"<<"\n";
		cout<<" 2 ---> 300m"<<"\n";
		cout<<" 3 ---> 350m"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 2;
	}
	//pregunta 8---------------------------------------------------------------------
	void Pg_viii(){
		cout<<"Pregunta 8:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- Cual es la luna mas grande de saturno?            -"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> Prometeo"<<"\n";
		cout<<" 2 ---> Titan"<<"\n";
		cout<<" 3 ---> Hiperion"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 2;
	}
	//Pregunta 9---------------------------------------------------------------------
	void Pg_ix(){
		cout<<"Pregunta 9:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- Cuando se creo la primera computadora             -"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> 1833"<<"\n";
		cout<<" 2 ---> 1845"<<"\n";
		cout<<" 3 ---> 1826"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 1;
	}
	//pregunta 10--------------------------------------------------------------
	void Pg_x(){
		cout<<"Pregunta 10:"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"- Cuando nacio Charles babbage                      -"<<"\n";
		cout<<"-                                                   -"<<"\n";
		cout<<"-----------------------------------------------------"<<"\n";
		cout<<" 1 ---> 1810"<<"\n";
		cout<<" 2 ---> 1791"<<"\n";
		cout<<" 3 ---> 1756"<<"\n";
		cout<<"---->";
		cin>>respuesta;
		respuestac= 2;
	}
	void verificar(){
		if(respuesta==respuestac){
			cout<<"\n\n+------------------------------------+\n";
			cout<<"|Felicidades, respuesta correcta     |\n";
			cout<<"+------------------------------------+\n";
			ver_resp=1;
			nivel++;
			acierto=1;
		}else{
			cout<<"\n\n+----------------------------------------+\n";
			cout<<"|Lo sentimos, la respuesta correcta es "<<respuestac<<" |\n";
			cout<<"+----------------------------------------+\n";
			ver_resp=0;
			puntaje=0;
			nivel=1;
			acierto=0;
		}
		
		if(ver_resp==1){
			if(nivel==2){
				puntaje=puntaje+100;
			}
			if(nivel==3){
				puntaje=puntaje+200;
			}
			if(nivel==4){
				puntaje=puntaje+500;
			}
			if(nivel==5){
				puntaje=puntaje+1000;
			}
			if(nivel==6){
				puntaje=puntaje+1500;
			}
			if(nivel==7){
				puntaje=puntaje+2000;
			}
			if(nivel==8){
				puntaje=puntaje+5000;
			}
			if(nivel==9){
				puntaje=puntaje+10000;
			}
			if(nivel==10){
				puntaje=puntaje+15000;
			}
			if(nivel==11){
				puntaje=puntaje+25000;
			}
		}
	}
	void resultados();
};
cuestionario :: cuestionario(){}
void cuestionario :: resultados(){
	system("cls");
	puntaje = puntaje + banco;
	cout<<"Felicidades, tu puntaje fue de: "<<puntaje;
}
int main(){
	cuestionario objc;
	system("color a");
	objc.inicio_variables();
	//pregunta 1
	objc.puntos();
	objc.Pg_i();
	objc.verificar();
	objc.select_banco();
	
	//pregunta 2
	objc.puntos();
	objc.Pg_ii();
	objc.verificar();
	objc.select_banco();
	
	
	//pregunta 3
	objc.puntos();
	objc.Pg_iii();
	objc.verificar();
	objc.select_banco();
	
	
	//pregunta 4
	objc.puntos();
	objc.Pg_iv();
	objc.verificar();
	objc.select_banco();
	
	//pregunta5
	objc.puntos();
	objc.Pg_v();
	objc.verificar();
	objc.select_banco();
	
	
	
	//pregunta6
	objc.puntos();
	objc.Pg_vi();
	objc.verificar();
	objc.select_banco();
	
	
	//pregunta 7
	objc.puntos();
	objc.Pg_vii();
	objc.verificar();
	objc.select_banco();
	
	//pregunta 8
	objc.puntos();
	objc.Pg_viii();
	objc.verificar();
	objc.select_banco();
	
	//pregunta 9
	objc.puntos();
	objc.Pg_ix();
	objc.verificar();
	objc.select_banco();
	
	//pregunta 10
	objc.puntos();
	objc.Pg_x();
	objc.verificar();
	objc.resultados();
}
