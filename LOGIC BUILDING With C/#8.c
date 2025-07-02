//write a program to swap two value
main(){
    int a=5,b=6,c;
    printf("before swaping value is %d and %d\n",a,b);
    // c=a;
    // a=b;
    // b=c;
//swaping values without using thied variable
    // a=a+b;
    // b=a-b;
    // a=a-b;

     b=(a+b)-(a=b);
    printf("after swaping value is %d and %d",a,b);
    return 0;
}