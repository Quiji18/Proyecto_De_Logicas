#include <iostream>
#include "funProyect.h"
using namespace std;
using namespace funPro;
int main(){
    string props;
    char op1, ord;
    int p=0, np=1, q=2, nq=3, r=4, nr=5, s=6, ns=7;
    int fil, col, prop, pmid, tab[32][50], op, a, b, c, cont=1, x, y, resv=0, colf, resant, resva;
    do{
    system("cls");
    cout<<"Programa que genera tablas de verdad de 4 proposiciones "<<endl;
    cout<<"Introdusca cuantas proposiciones simples desea utilizar"<<endl;
    cin>>prop;
    system("cls");

    //Inicio Valores Segun Propociciones
    switch (prop){
    case 1:
        col = 1;
        fil = 1;
        pmid = 0;
        props = "p~p Resultado";
        break;
    case 2:
        col = 3;
        fil = 3;
        pmid = 1;
        props = "p~p q~q Resultado";
        break;
    case 3:
        col = 5;
        fil = 7;
        pmid = 3;
        props = "p~p q~q r~r Resultado";
        break;
    case 4:
        col = 7;
        fil = 15;
        pmid = 7;
        props = "p~p q~q r~r s~s Resultado";
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
    }
    //Final Llenar Tabla s

    //Inicio Llenar Tabla ~p
    for(int i=0;i<=fil;i++){
        if(tab[i][p]==0){
            tab[i][np]=1;
        }else{
            tab[i][np]=0;
        }
    }
    //FInal Llenar Tabla ~p

    //Inicio Llenar Tabla ~q
    for(int i=0;i<=fil;i++){
        if(tab[i][q]==0){
            tab[i][nq]=1;
        }else{
            tab[i][nq]=0;
        }
    }
    //Final Llenar Tabla ~q
    
    //Inicio Llenar Tabla ~r
    for(int i=0;i<=fil;i++){
        if(tab[i][r]==0){
            tab[i][nr]=1;
        }else{
            tab[i][nr]=0;
        }
    }
    //Final Llenar Tabla ~r

    //Inicio Llenar Tabla ~s
    for(int i=0;i<=fil;i++){
        if(tab[i][s]==0){
            tab[i][ns]=1;
        }else{
            tab[i][ns]=0;
        }
    }
    //Final Llenar Tabla ~s

    //Inicio Ingresando primera parte de la propocicion compuesta
    system("cls");
    cout<<"Ingrese que proposicion desea ingresar"<<endl;
    cout<<"Se le dara las opciones con un ejemplo"<<endl;
    cout<<"1. Proposicion simple... p"<<endl<<"2. Dos propociciones... pVq"<<endl;
    cin>>op;
    switch (op){
    case 1:
        valprop(prop);
        cin>>a;
        resv++;
        for(int i=0; i<=fil;i++){
            if(tab[i][a]==1){
                tab[i][col+resv]=1;
            }else{
                tab[i][col+resv]=0;
            }
        }
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

    //Inicio Agregar más proposiciones
    do{
        resva=resv;
        cout<<"Desea ingresar una nueva proposicion? Y: Si N: No"<<endl;
        cin>>op1;
        op1=toupper(op1);

        switch (op1)
        {
        case 'Y'://Inicio Agregar más proposiciones
            system("cls");
    cout<<"Ingrese que proposicion desea ingresar"<<endl;
    cout<<"Se le dara las opciones con un ejemplo"<<endl;
    cout<<"1. Proposicion simple... p"<<endl<<"2. Dos propociciones... pVq"<<endl;
    cin>>op;
    cout<<"Con que conector logico desea enlazar la nueva proposicion a la anterior?"<<endl;
    valcon();
    cin>>y;
    cout<<"La Proposicion que desea ingresar va a la izquierda o derecha de la anterior? A: Antes D: Despues"<<endl;
    cin>>ord;
    ord=toupper(ord);
    switch (op){
    case 1:
        valprop(prop);
        cin>>a;
        resv++;
        for(int i=0; i<=fil;i++){
            if(tab[i][a]==1){
                tab[i][col+resv]=1;
            }else{
                tab[i][col+resv]=0;
            }
        }
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

    int otro, coln;
    //Aqui
    coln=resv;
        if(ord=='A'){
            otro=resva;
            resva=resv;
            resv=otro;
        }

        for(int i=0;i<=fil;i++){
            if(prop2(tab[i][col+resva],tab[i][col+resv], y)==true){
                tab[i][col+(coln+1)]=1;
            }else{
                tab[i][col+(coln+1)]=0;
            }
        }
        if(ord=='A'){
            otro=resva;
            resva=resv;
            resv=otro;
        }
        
            resv++;
            break;//Final Agregar más proposiciones
        case 'N':
            break;
        default:
            break;
        }
    } while (op1=='Y');
    //Final Agregar más proposiciones

    //Inicio Imprimir Tabla
    cout<<"Se mostraran los resultados..."<<endl;
    cout<<props<<endl;
        for(int i=0;i<=fil;i++){
		for(int j=0;j<=(col+resv);j++){
			cout<<tab[i][j]<<" ";
		}
        cout<<endl;
        }
    //Fin imprimir Tabla


    return 0;
}