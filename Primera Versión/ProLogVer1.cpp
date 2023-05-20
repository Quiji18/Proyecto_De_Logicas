#include <iostream>
#include "funProyectVer1.h"
using namespace std;
using namespace funPro0;
int main(){
    int fil=0, col=0, prop, tab[32][100], p=0, q=1, r=2, s=3;
    cout<<"Programa que genera tablas de verdad de 4 proposiciones "<<endl;
    cout<<"Introdusca cuantas proposiciones simples desea utilizar"<<endl;
    cin>>prop;

    ///Inicio 1 Proposiciones
    if(prop == 1){
        //Ingresar datos a la tabla
        fil=1, col=0;
        for(int i=0;i<=fil;i++){
			if(i==0){
                tab[i][p]=0;
            }else{
                tab[i][p]=1;
            }
        }   
    //Imprimir tabla
        system("cls");
        cout<<"p"<<endl;
        for(int i=0;i<=fil;i++){
		for(int j=0;j<=col;j++){
			cout<<tab[i][j]<<endl;
		}
	    }
    }//Final 1 Proposiciones

    //Inicio 2 Proposiciones
    if(prop == 2){
        fil=3, col = 1;
        for(int i=0;i<=fil;i++){
			if(i<=1){
                tab[i][p]=0;
            }else{
                tab[i][p]=1;
            }
        }
        for(int i=0;i<=fil;i++){
            if(q4(i)==true){
                tab[i][q]=1;
            }else{
                tab[i][q]=0;
            }
        }

        system("cls");
        cout<<"p q"<<endl;
        for(int i=0;i<=fil;i++){
		for(int j=0;j<=col;j++){
			cout<<tab[i][j]<<" ";
		}
        cout<<endl;
	    }
    
    }//Final 2 Proposiciones

    //Inicio 3 Proposiciones
    if(prop == 3){
        fil=7, col = 2;
        for(int i=0;i<=fil;i++){
			if(i<=3){
                tab[i][p]=0;
            }else{
                tab[i][p]=1;
            }
        }
        for(int i=0;i<=fil;i++){
            if(q8(i)==true){
                tab[i][q]=1;
            }else{
                tab[i][q]=0;
            }
        }
        for(int i=0;i<=fil;i++){
            if(i%2==0){
                tab[i][r]=0;
            }else{
                tab[i][r]=1;
            }
        }

        system("cls");
        cout<<"p q r"<<endl;
        for(int i=0;i<=fil;i++){
		for(int j=0;j<=col;j++){
			cout<<tab[i][j]<<" ";
		}
        cout<<endl;
	    }
    }//Final 3 Proposiciones

    //Inicio 4 Proposiciones
    if(prop == 4){
        fil=15, col = 3;
        for(int i=0;i<=fil;i++){
			if(i<=7){
                tab[i][p]=0;
            }else{
                tab[i][p]=1;
            }
        }
        for(int i=0;i<=fil;i++){
            if(q16(i)==true){
                tab[i][q]=1;
            }else{
                tab[i][q]=0;
            }
        }
        for(int i=0;i<=fil;i++){
            if(r16(i)==true){
                tab[i][r]=1;
            }else{
                tab[i][r]=0;
            }
        }
        for(int i=0;i<=fil;i++){
            if(i%2==0){
                tab[i][s]=0;
            }else{
                tab[i][s]=1;
            }
        }

        system("cls");
        cout<<"p q r s"<<endl;
        for(int i=0;i<=fil;i++){
		for(int j=0;j<=col;j++){
			cout<<tab[i][j]<<" ";
		}
        cout<<endl;
	    }
    }//Final 4 Proposiciones
    return 0;
}