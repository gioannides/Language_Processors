int main() {

char x = 67;

char* s = &x;

*(s+8) = 56;

*(s+2) = 60;

return *(s+8) + *(s+2);

}
