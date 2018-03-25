int SELF_RECURSION(int x){
    if (x >= 1){
        return x*SELF_RECURSION(x-1);
    }
    else{
        return 1;
    }
}
