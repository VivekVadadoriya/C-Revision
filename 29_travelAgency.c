// Create a structure in which drivers have to input: 1. Name, 2. License no, 3. Route, 4. Kms

#include<stdio.h>

struct Driver
{
    char name[34];
    char no[45];
    char route[47];
    int kms;
};

int main()
{
    struct Driver d1, d2, d3;
    // 1
    printf("Enter the details of the Driver no 1.\n");

    printf("Enter the name of first driver\n");
    scanf("%s",&d1.name);

    printf("Enter the no of first driver\n");
    scanf("%s",&d1.no);

    printf("Enter the route of first driver\n");
    scanf("%s",&d1.route);
    
    printf("Enter the no of kms of first driver\n");
    scanf("%d",&d1.kms);

    // 2
    printf("Enter the details of the Driver no 2.\n");

    printf("Enter the name of second driver\n");
    scanf("%s",&d2.name);

    printf("Enter the no of second driver\n");
    scanf("%s",&d2.no);

    printf("Enter the route of second driver\n");
    scanf("%s",&d2.route);
    
    printf("Enter the no of kms of second driver\n");
    scanf("%d",&d2.kms);

    //3
    printf("Enter the details of the Driver no 2.\n");

    printf("Enter the name of third driver\n");
    scanf("%s",&d3.name);

    printf("Enter the no of third driver\n");
    scanf("%s",&d3.no);

    printf("Enter the route of third driver\n");
    scanf("%s",&d3.route);
    
    printf("Enter the no of kms of the third driver\n");
    scanf("%d",&d3.kms);

    printf("***** Printing Information *****\n");

    printf("Driver no 1\n");
    printf("Name is %s\n", d1.name);
    printf("DL no is %s\n", d1.no);
    printf("Route is %s\n", d1.route);
    printf("KMs is %d\n", d1.kms);

    printf("Driver no 2\n");
    printf("Name is %s\n", d2.name);
    printf("DL no is %s\n", d2.no);
    printf("Route is %s\n", d2.route);
    printf("KMs is %d\n", d2.kms);

    printf("Driver no 3\n");
    printf("Name is %s\n", d3.name);
    printf("DL no is %s\n", d3.no);
    printf("Route is %s\n", d3.route);
    printf("KMs is %d\n", d3.kms);
    

    
    return 0;
}