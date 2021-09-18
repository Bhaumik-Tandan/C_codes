__attribute__((constructor))  int setup() 
{
    printf("\nSetup");
    return 2;
}

__attribute__((constructor))  int seetup() 
{
    printf("\nSeetup");
    return 2;
}

__attribute__((destructor))  int des() 
{
    printf("\ndes");
    return 2;
}

__attribute__((destructor))  int es() 
{
    printf("\nes");
    return 2;
}