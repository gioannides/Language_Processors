int main(){    
int x=0;
int y=45;
    if(x<y){
        x-=-1;
        if(x>y){
            y+=+3;
            if(x==y){
                return x*y;
            }
        }
        return y;
    }
    return x;
}
