#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void complex(void)
{
    char uc[]={'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
    char lc[]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    char nos[]={'1','2','3','4','5','6','7','8','9','0'};
    char sc[]={'!','@','#','$','%','^','&','*','+','=','?','~'};

    int rnum1, rnum2, rnum3, rnum4;

    int nuc, nlc, nnos, nsc, npwd;

    //finding out length of arrays

    nuc = sizeof(uc);
    //printf("Size of the given array is %d\n", nuc/sizeof(char));
    nlc = sizeof(lc);
    //printf("Size of the given array is %d\n", nlc/sizeof(char));
    nnos = sizeof(nos);
    //printf("Size of the given array is %d\n", nnos/sizeof(char));
    nsc = sizeof(sc);
    //printf("Size of the given array is %d\n", nsc/sizeof(char));

    //generating random numbers upto length

    srand (time(NULL));

    rnum1 = rand() % nuc + 1;
    //printf ("\n%d=",rnum1);
    //printf("\n%c", uc[rnum1]);

    rnum2 = rand() % nlc + 1;
    //printf ("\n%d=",rnum2);
    //printf("\n%c", lc[rnum2]);

    rnum3 = rand() % nnos + 1;
    //printf ("\n%d=",rnum3);
    //printf("\n%c", nos[rnum3]);

    rnum4 = rand() % nsc + 1;
    //printf ("\n%d=",rnum4);
    //printf("\n%c", sc[rnum4]);

    char pwd1[]={uc[rnum1],uc[rnum1+1],lc[rnum2],lc[rnum2+1],nos[rnum3],nos[rnum3+1],sc[rnum4],sc[rnum4+1]};
    char pwd2[]={uc[rnum1],lc[rnum2],uc[rnum1+1],lc[rnum2+1],nos[rnum3],sc[rnum4],nos[rnum3+1],sc[rnum4+1]};
    char pwd3[]={sc[rnum4],uc[rnum1],lc[rnum2],nos[rnum3],sc[rnum4+1],uc[rnum1+1],lc[rnum2+1],nos[rnum3+1]};
    char pwd4[]={lc[rnum2],lc[rnum2+1],uc[rnum1],uc[rnum1+1],sc[rnum4],sc[rnum4+1],nos[rnum3],nos[rnum3+1]};
    char pwd5[]={sc[rnum4],uc[rnum1],uc[rnum1+1],nos[rnum3],lc[rnum2],lc[rnum2+1],nos[rnum3+1],sc[rnum4+1]};

    npwd = sizeof(pwd1);
    //printf("\nSize of the given array is %d\n", npwd/sizeof(char));
    printf("\n********************************************************************************************");
    printf("\nThe suggested passwords are => ");
    printf("\n");
    printf("\n");

    for (int i=0 ; i<npwd ; i++)
    {

        printf("%c",pwd1[i]);
    }
    printf("\n");
    printf("\n");

    for (int i=0 ; i<npwd ; i++)
    {

        printf("%c",pwd2[i]);
    }
    printf("\n");
    printf("\n");

    for (int i=0 ; i<npwd ; i++)
    {

        printf("%c",pwd3[i]);
    }
    printf("\n");
    printf("\n");

    for (int i=0 ; i<npwd ; i++)
    {

        printf("%c",pwd4[i]);
    }
    printf("\n");
    printf("\n");

    for (int i=0 ; i<npwd ; i++)
    {

        printf("%c",pwd5[i]);
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n********************************************************************************************");
    return 0;
}
