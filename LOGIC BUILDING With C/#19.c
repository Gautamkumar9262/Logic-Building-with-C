//write a program to calculate sum of first N natural number.
int main(){
    int n,i,sum;
    printf("enter a number ");
    scanf("%d",&n);
for(i=0;i<=n;i++)

{
    sum=sum+i;

}
printf("%d",sum);
}

//second method
int main(){
    int n,i,sum;
    printf("enter a number ");
    scanf("%d",&n);
for(i=0,sum=0;i<=n;sum=sum+i,i++);
printf("%d",sum);
}