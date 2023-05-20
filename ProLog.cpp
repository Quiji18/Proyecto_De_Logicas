#include <iostream>
#include "funProyect.h"
using namespace std;
using namespace funPro;
int main(){
    string props;
    int fil, col, prop, pmid, tab[32][50], p=0, q=1, r=2, s=3, op, a, b, c, cont=1, x, y, z, resv=0;
    do{
    system("cls");
    cout<<"Programa que genera tablas de verdad de 4 proposiciones "<<endl;
    cout<<"Introdusca cuantas proposiciones simples desea utilizar"<<endl;
    cin>>prop;
    system("cls");

    //Inicio Valores Segun Propociciones
    switch (prop)
    {
    case 1:
        col = 0;
        fil = 1;
        pmid = 0;
        props = "p";
        break;
    case 2:
        col = 1;
        fil = 3;
        pmid = 1;
        props = "p q";
        break;
    case 3:
        col = 2;
        fil = 7;
        pmid = 3;
        props = "p q r";
        break;
    case 4:
        col = 3;
        fil = 15;
        pmid = 7;
        props = "p q r s";
        break;
    default:
        cout<<"Opcion ingresada no valida..."<<endl;
        system("pause");
        break;
    }
    }while (prop<1||prop>4);
    
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
    }system("cls");
    //Final Llenar Tabla s
    
    //Inicio Ingresando primera parte de la propocicion compuesta
    cout<<"Ingrese que proposicion desea ingresar"<<endl;
    cout<<"Se le dara las opciones con un ejemplo"<<endl;
    cout<<"1. Proposicion simple... p"<<endl<<"2. Dos propociciones... pVq"<<endl;
    cin>>op;
    switch (op){
    case 1:
        valprop(prop);
        cin>>a;
        c=a;
        break;
    case 2:
        valprop(prop);
        cin>>a>>b;
        valcon();
        cout<<"Ingrese el conector logico: "<<endl;
        cin>>x;
        resv++;
        for(int i=0;i<=fil;i++){
            if(prop2(tab[i][a], tab[i][b], x)==true){
                tab[i][col+resv]=1;
            }else{
                tab[i][col+resv]=0;
            }
        }
        break;
    default:
        cout<<"Opcion ingresada no valida..."<<endl;
        break;
    }
    //Final Ingresando primera parte de la propocicion compuesta

    //Inicio Imprimir Tabla
    cout<<props<<endl;
        for(int i=0;i<=fil;i++){
		for(int j=0;j<=col+resv;j++){
			cout<<tab[i][j]<<" ";
		}
        cout<<endl;
        }
    //Fin imprimir Tabla
    return 0;
}