#include <iostream>
using namespace std;
namespace funPro{

bool pq(int q, int prop){
    bool val = false;
    if(prop==2&&(q==1||q==3)){
        val = true;
    }else if(prop==3&&(q==2||q==3||q==6||q==7)){
        val = true;
    }else if(prop==4&&(q==4||q==5||q==6||q==7||q==12||q==13||q==14||q==15)){
        val = true;
    }
    return val;
}

bool pr(int r, int prop){
    bool val = false;
    if(prop==3&&(r%2!=0)){
        val = true;
    }else if(prop==4&&(r==2||r==3||r==6||r==7||r==10||r==11||r==14||r==15)){
        val = true;
    }
    return val;
}

bool prop2(int a, int b, int x){
    bool val = false;
    switch (x){
    case 8:
        if(a==0&&b==0){
            val=false;
        }else{
            val=true;
        }
        break;
    case 9:
        if(a==1&&b==1){
            val=true;
        }
        break;
    case 10:
        if(a==1&&b==0){
            val=false;
        }else{
            val=true;
        }
        break;
    case 11:
        if(a==b){
            val=true;
        }
        break;
    }
    return val;
}

void valprop(int propociciones){
    switch (propociciones){
    case 1:
        cout<<endl<<"Valores de proposiciones simples a evaluar"<<endl<<"Ingrese sus valores numericos"<<endl;
        cout<<" p = 0    ~p = 4"<<endl;
        break;
    case 2:
        cout<<endl<<"Valores de proposiciones simples a evaluar"<<endl<<"Ingrese sus valores numericos"<<endl;
        cout<<" p = 0     q = 1    ~p = 4    ~q = 5"<<endl;
        break;
    case 3:
        cout<<endl<<"Valores de proposiciones simples a evaluar"<<endl<<"Ingrese sus valores numericos"<<endl;
        cout<<" p = 0     q = 1     r = 2"<<endl<<"~p = 4    ~q = 5    ~r = 6"<<endl;
        break;
    case 4:
        cout<<endl<<"Valores de proposiciones simples a evaluar"<<endl<<"Ingrese sus valores numericos"<<endl;
        cout<<" p = 0     q = 1     r = 2     s = 3"<<endl<<"~p = 4    ~q = 5    ~r = 6    ~s = 7"<<endl;
        break;
    }
}

void valcon(){
    cout<<endl<<"Valores de conectores logicos"<<endl<<"Ingrese sus valores numericos"<<endl;
    cout<<"V = 8     ^ = 9     -> = 10     <-> = 11"<<endl;
}
}