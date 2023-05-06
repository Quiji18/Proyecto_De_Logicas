#include <iostream>
#include "funProyect.h"
using namespace std;
using namespace funPro;
int main(){
    int fil, col, prop, pmid, tab[32][100], p=0, q=1, r=2, s=3;
    cout<<"Programa que genera tablas de verdad de 4 proposiciones "<<endl;
    cout<<"Introdusca cuantas proposiciones simples desea utilizar"<<endl;
    cin>>prop;
    system("cls");

    //Inicio Valores Segun Propociciones
    if(prop == 1){
        col = 0;
        fil = 1;
        pmid = 0;
        cout<<"p"<<endl;
    }else if(prop == 2){
        col = 1;
        fil = 3;
        pmid = 1;
        cout<<"p q"<<endl;
    }else if(prop == 3){
        col = 2;
        fil = 7;
        pmid = 3;
        cout<<"p q r"<<endl;
    }else{
        col = 3;
        fil = 15;
        pmid = 7;
        cout<<"p q r s"<<endl;
    }
    //Final Valores Segun Propociciones

    //Inicio Llenar Tabla p
    for(int i=0;i<=fil;i++){
		if(i<=pmid){
            tab[i][p]=0;
        }else{
            tab[i][p]=1;
        }
    }
    //Final Llenar Tabla p
    
    //Inicio Llenar Tabla q
    for(int i=0;i<=fil;i++){
        if(pq(i,prop)==true){
            tab[i][q]=1;
        }else{
            tab[i][q]=0;
        }
    }
    //Final Llenar Tabla q

    //Inicio Llenar Tabla r
    for(int i=0;i<=fil;i++){
        if(pr(i,prop)==true){
            tab[i][r]=1;
        }else{
            tab[i][r]=0;
        }
    }
    //Final Llenar Tabla r

    //Inicio Llenar Tabla s
    for(int i=0;i<=fil;i++){
        if(i%2==0){
            tab[i][s]=0;
        }else{
            tab[i][s]=1;
        }
    }
    //Final Llenar Tabla s

    //Inicio Imprimir Tabla
        for(int i=0;i<=fil;i++){
		for(int j=0;j<=col;j++){
			cout<<tab[i][j]<<" ";
		}
        cout<<endl;
        }
    //Fin imprimir Tabla
    return 0;
}