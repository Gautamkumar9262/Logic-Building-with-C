//write a program to print first N odd natural number.
main(){
    int n,i;
    printf("enter a number ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("%d ",i*2-1);
    }
}