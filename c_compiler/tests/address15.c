float u = 68.9;
float* p = &u;

int main(){

float u = 56.7;
float* i = &u;
float* j = i;
float** z = &j;

*p = 67;


return **z + *i + *j +*p;
}
