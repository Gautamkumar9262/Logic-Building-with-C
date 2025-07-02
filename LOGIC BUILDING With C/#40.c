main(){
    int i,j,lines;
    printf("Enter number of line you want to print: ");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++){
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
             printf("%d",i);
            else printf(" ");
        }
        printf("\n");
    }
    getch();
}