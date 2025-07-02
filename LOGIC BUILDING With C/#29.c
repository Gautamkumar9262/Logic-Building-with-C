//find output 128 64 32 16 8 4 2 1
main(){
    int x=128;
    for(;x;x>>=1) //means x=x>>1
    printf("%d",x);
}