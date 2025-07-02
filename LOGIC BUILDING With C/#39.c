main(){
    int x,y;
    int i,j;
    printf("enter number of rows: ");
    scanf("%d", &x);
    printf("enter number of columns: ");
    scanf("%d", &y);
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            if(j>=6-i&&j<=4+i)
            printf("*");
        else printf(" ");
    }
printf("\n");
}
}