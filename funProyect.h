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
    case 9:
        if(a==0&&b==0){
            val=false;
        }else{
            val=true;
        }
        break;
    case 10:
        if(a==1&&b==1){
            val=;
        }else{

        }
        break;
    default:
        break;
    }
    return val;
}
}