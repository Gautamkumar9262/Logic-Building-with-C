//write a program to print greatest number among 3 given number
// main(){
// int a,b,c;
// printf("enter three numbers ");
// scanf("%d %d %d", &a,&b,&c);
// if(a>=b && a>=c) printf("%d",a);
// else if(b>=a && b>=c) printf("%d",b);
// else if(c>=a && c>b) printf("%d",c);
// }

//second method
main(){
    int a,b,c;
    printf("enter three numbers ");
    scanf("%d %d %d", &a,&b,&c);
    printf("%d",a>b? a>c?a:c: b>c? b:c);
}