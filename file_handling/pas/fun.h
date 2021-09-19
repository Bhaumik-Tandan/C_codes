void fun()
{
    FILE *filePointer ;
    char i[20],p[20];
    filePointer = fopen("pass", "r") ;
    fscanf(filePointer,"%s %s",i,p);
    printf("%s %s",i,p);    
}