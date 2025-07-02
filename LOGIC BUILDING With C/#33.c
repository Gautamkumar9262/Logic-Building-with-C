// write a program to reverse a given number. 
main(){
    int n,k,i=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        k=n%10;
        i=i*10+k;
        n=n/10;
        
    }
     printf("%d",i);
   
}