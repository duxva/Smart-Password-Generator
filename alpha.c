#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int summ (int n)
{
	int t, sum=0, remainder;
	t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
   return sum;
}
void alpha(void)
{
    int i, j, ind;
    char name[20], fname[20], mname[20], lname[20], temparr[13], pass[13];
    // take input
    printf("\n");
    printf("\n********************************************************************************************");
    printf("\n Please enter your information: ");
    printf("\n Enter your name: ");
    scanf("%s", &name);
    printf("\n Enter your father's name: ");
    scanf("%s", &fname);
    printf("\n Enter your mother's name: ");
    scanf("%s", &mname);
    printf("\n Enter your birth name: ");
    scanf("%s", &lname);

    // display information
    printf("\n---------------------------------------------");
    printf("\n Your name: %s", name);
    printf("\n Your father's name: %s", fname);
    printf("\n Your mother's name: %s", mname);
    printf("\n Your birth name: %s", lname);
    printf("\n---------------------------------------------");


    //choose index
    printf("\n Enter any number between 1-99: ");
    scanf("%d", &ind);

    while (ind>9)
    {
        ind=summ(ind);
    }

    //alphabetic password
    //first name
    for(i=0; i<3; i++)
    {
        temparr[i]=name[i];
    }

    //father's name
    temparr[3]=fname[0];
    temparr[4]=fname[1];
    temparr[5]=fname[2];

    //mother's name
    temparr[6]=mname[0];
    temparr[7]=mname[1];
    temparr[8]=mname[2];

    //birth name
    temparr[9]=lname[0];
    temparr[10]=lname[1];
    temparr[11]=lname[2];
    temparr[12]='\0';

    strlwr(temparr);
    //making the password
    for(j=0; j<12; j++)
    {
        if(j%ind==0)
        {
            pass[j]=temparr[j]-32;
        }
        else
        {
            pass[j]=temparr[j];
        }
    }
    pass[12]='\0';
    printf("\n******************************************");
    printf("\n*The password generated is: %s *", pass);
    printf("\n******************************************");
    printf("\n");
    printf("\n********************************************************************************************");
    return 0;
}
