//write a program to sum of first N natural numbers
main(){
    int i,n,sum=0;
    printf("Enter a first number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    sum=sum+i;

    }
    printf("Sum is %d\n",sum);

}