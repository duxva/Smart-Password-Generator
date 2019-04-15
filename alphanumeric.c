#include <stdio.h>
#include <string.h>

int alphanumeric()
{
    char fnm[10], city[20], state[20],t;
    char name[10];
    int n,m,su,p,a,z,l, bdy, citypin, i,r,aa, num_of_letters, naa;
 //   unsigned long long pn;
    double pn1;
    char k[50];
    printf("\n");
    printf("\n********************************************************************************************");
    printf("\n Please enter your information: ");

    printf("\n Enter name: ");
    scanf("%s",fnm);

    printf("\n Enter date of birth in ddmmyyyy format: ");
    scanf("%d", &bdy);

//    printf("Enter phone number: ");
//    scanf("%llu",pn);
    printf("\n Enter city: ");
    scanf("%s", city);
//    printf("%s",city);

    printf("\n Enter state: ");
    scanf("%s", state);
//    printf("%s",state);

    printf("\n Enter city PIN CODE: ");
    scanf("%d", &citypin);
//    printf("%d",citypin);

    char ch = tolower(fnm[0]);
//    printf("%c\n",ch);
    char ch2 = fnm[1];
//    printf("%c\n",ch2);
    char ch3 = toupper(fnm[2]);
//    printf("%c\n",ch3);
    name[0]=ch;
//    printf("%s\n",name);
    name[1]=ch2;
//    printf("%s\n",name);
    name[2]=ch3;
//    printf("%s\n",name);
//    strcpy(name,ch);
//    printf("%s",name);
//    strcat(name,ch2);
//    printf("%s",name);
//    strcat(name,ch3);

    char *letters = "0123456789";
    num_of_letters = strlen(letters);
    naa =rand()%num_of_letters;

    char c2= letters[naa]; //+ '0';
    name[3]=c2;
//    printf("%s\n",name);
//    printf("%c\n",c2);
//    strcat(name,c2);

    i = strlen(city);
    char cit = city[i-1];
    name[4]=cit;
//    printf("%s\n",name);
//    printf("%c\n",cit);
//    strcat(name,cit);

    char st = state[0];
    name[5]=st;
//    printf("%s\n",name);
//    printf("%c\n",st);
//    strcat(name,st);


    while(citypin>0)
    {
        m = citypin%10;
        su= su + m;
        citypin = citypin/10;
    }

    su = su% 10;
//    printf("%d\n",su);
    char cp = letters[su];
    name[6]=cp;
//    printf("%s\n",name);

    aa= bdy/10000;
    r=aa%100;
//    printf("%d",r);
    switch(r)
    {
        case 01: t='j';
        break;
        case 02: t='f';
        break;
        case 03: t='m';
        break;
        case 04: t='a';
        break;
        case 05: t='m';
        break;
        case 06: t='j';
        break;
        case 07: t='j';
        break;
        case 8: t='a';
        break;
        case 9: t='s';
        break;
        case 10: t='o';
        break;
        case 11: t='n';
        break;
        case 12: t='d';
        break;
    }
    name[7]=t;
    name[8]='\0';
//    printf("%c",cp);
//    strcat(name,cp);
    //printf("\n The password generated is: %s",name);

    //z = strlen(name);
    //printf("\n length of the password is: %d",z);

    int ii;
    z=strlen(name);
    for(ii=0;ii<z;ii++)
    {
        if(name[ii]==name[ii+1])
        {
            name[ii+1]= letters[naa];
        }
    }
    printf("\n**************************************");
    printf("\n*The password generated is: %s *",name);
    printf("\n**************************************");
    printf("\n");
    printf("\n********************************************************************************************");
return 0;
}







