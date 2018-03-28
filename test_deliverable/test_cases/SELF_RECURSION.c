int SELF_RECURSION(int x){
    if (x > 1){
        return SELF_RECURSION(x-1);
    }
    else{
        return x;
    }
}
