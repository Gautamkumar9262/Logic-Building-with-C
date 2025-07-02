//write a program to check whether a given number is prime or not.
main(){
    int x,i,s;
printf("enter a number: ");
scanf("%d", &x);
s=sqrt(x);
for(i = 2; i<=sqrt(x); i++)
    if(x%i==0)
    break;
if(i==s+1)
printf("prime");
else printf("not prime");

}
