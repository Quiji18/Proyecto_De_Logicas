namespace funPro0{

bool q4(int q){
    bool val=0;
    if(q==1||q==3){
        val = true;
    }

    return val;
}

bool q8(int q){
    bool val = 0;
    if(q==2||q==3||q==6||q==7){
        val = true;
    }
    return val;
}
bool q16(int q){
    bool val = false;
    if(q==4||q==5||q==6||q==7||q==12||q==13||q==14||q==15){
        val = true;
    }
    return val;
}
bool r16(int r){
    bool val = false;
    if(r==2||r==3||r==6||r==7||r==10||r==11||r==14||r==15){
        val = true;
    }
    return val;
}

}