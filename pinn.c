#include <stdio.h>
struct student
{
    char name[50];
    char gender[10];
    char bday[10];
    char phno[10];
    int a,b,c,d,e,d1,b1,sum1,sum2,i,j,f;
} s;

void printCombination(int arr[], int n, int r)
{
    int data[r];

    combination(arr, data, 0, n-1, 0, r);
}

void combination(int arr[], int data[], int start, int end,
                     int index, int r)
{
    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }

    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combination(arr, data, i+1, end, index+1, r);
    }
}

void pinn(void)
{
    int i=0;
    printf("\n********************************************************************************************");
    printf("\nEnter information of the student:\n");

    // storing information

        printf("\nEnter your name: ");
        scanf("%s",s.name);

        printf("\nEnter gender(M for male and F for female): ");
        scanf("%s",s.gender);

        printf("\nEnter Birthday in ddmmyyyy format: ");
        scanf("%s",s.bday);

        printf("\nEnter mobile number: ");
        scanf("%s",s.phno);

        printf("\n");
    printf("----------------------------------------------------");
    printf("\nDisplaying Information:\n\n");

    // displaying information
        printf("\nName: %s", s.name);
        printf("\nGender: %s", s.gender);
        printf("\nBirthday: %s", s.bday);
        printf("\nPhone Number: %s", s.phno);
        printf("\n");



    //first digit : first character ascii code / 13

    char ch = s.name[0];
    int ascii = (int)ch;
    s.a = ascii / 13;

    //second digit : dob total sum total

    for(s.i=0;s.i<8;s.i++)
    {
        s.sum1 = s.sum1 + (int)s.bday[s.i] - 48;
    }
    //printf("sum of bday = %d.",s.sum1);

    while(s.sum1>0)
    {
        s.b = s.b+(s.sum1%10);
        s.sum1 = s.sum1/10;
    }
    s.b=s.b%10;

    //third digit : length of first name - 3

    s.c = strlen(s.name);
    s.c = s.c - 3;

    //fourth digit : phone number total % 10

    for(s.j=0;s.j<10;s.j++)
    {
        s.sum2=s.sum2 + (int)s.phno[s.j] - 48;
    }
    //printf("sum of phno = %d.",s.sum2);
    s.d = s.sum2%10;

    //fifth digit : second character ascii code / 13

    char ch1 = s.name[1];
    int ascii1 = (int)ch1;
    s.e = ascii1 / 13;

    //sixth digit : 1 for female and 2 for male

    if(s.gender == 'f' || s.gender == 'F')
        s.f=1;
    else
        s.f=2;


    void combination(int arr[], int data[], int start, int end,
                     int index, int r);


    printf("----------------------------------------------------");
    printf("\nDisplaying suggested password combinations:\n");
    int arr1[] = {s.a, s.b, s.c, s.d, s.e, s.f};

    int r = 4;
    int n = sizeof(arr1)/sizeof(arr1[0]);
    printCombination(arr1, n, r);
    printf("\n********************************************************************************************");

    return 0;
}
