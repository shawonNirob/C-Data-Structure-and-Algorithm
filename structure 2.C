#include<stdio.h>
#include<stdio.h>
int main()
{
    struct RUET{
        char* dept[5];
        int id;
        char* name[85];
    };
    struct RUET first;
    printf("Please enter the department name: ");
    scanf("%s", &first.dept);
    printf("Now id number: ");
    scanf("%d", &first.id);
    printf("enter the name: ");
    scanf("%s", &first.name);

    struct RUET second;
    printf("Please enter the department name: ");
    scanf("%s", &second.dept);
    printf("Now id number: ");
    scanf("%d", &second.id);
    printf("enter the name: ");
    scanf("%s", &second.name);

    struct RUET third;
    printf("Please enter the department name: ");
    scanf("%s", &third.dept);
    printf("Now id number: ");
    scanf("%d", &third.id);
    printf("enter the name: ");
    scanf("%s", &third.name);

    printf("1 Department: %s\n", first.dept);
    printf("1 id: %d\n", first.id);
    printf("1 Name : %s\n", first.name);

    printf("\n\n");

    printf("2 Department: %s\n", second.dept);
    printf("2 id: %d\n", second.id);
    printf("2 Name : %s\n", second.name);

    printf("\n\n");

    printf("3 Department: %s\n", third.dept);
    printf("3 id: %d\n", third.id);
    printf("3 Name : %s\n", third.name);


    return 0;
}
//

#include<stdio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    struct surename{
        char fast[10];
        char last[10];
    };
    struct RUET{
        int id;
        struct surename name;
    };
    struct RUET single;
    printf("Please enter the fast name : ");
    scanf("%s", &single.name.fast);
    printf("Please enter the last name : ");
    scanf("%s", &single.name.last);
    printf("Now id number: ");
    scanf("%d", &single.id);

    struct RUET single2;
    printf("Please enter the fast name : ");
    scanf("%s", &single2.name.fast);
    printf("Please enter the last name : ");
    scanf("%s", &single2.name.last);
    printf("Now id number: ");
    scanf("%d", &single2.id);

    printf("name : %s %s\n", single.name.fast, single.name.last);
    printf("id: %d\n", single.id);

    printf("\n\n");

    printf("name : %s %s\n", single2.name.fast, single2.name.last);
    printf("id: %d\n", single2.id);

    printf("\n\n");


    return 0;
}
