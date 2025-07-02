//find output 31
main(){
    int x=1,a,s;
    for(s=0,a=5;a;x<<=1,a--)
    {
        s=s+x;
    }
    printf("%d",s);
}