string* bane;

string* GetBane(){
    if(bane) return bane;
}

string* QueryBane(){
    if(bane) return bane;
}

int SetBane(array arr){
    if(arr) bane = arr;
    return 1;
}
