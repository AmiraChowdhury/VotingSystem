#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
typedef struct voter_information
{
    char id [10];
    char name [20];
    char birth_date[15];
    char father_name[20];
    char mother_name[20];
    struct voter_information *next;

}node;

node *head;

int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;

int main()
{
    system("cls");

    printf("\n\n\n");
    printf("\t            ¬¬¬¬¬¬¬ WELCOME TO ONLINE VOTING SYSTEM ¬¬¬¬¬¬¬¬\n\n");

    printf("\t               ----*************************************------\n\n\n\n\n");
    printf("         \t\t------Please Enter one(1) For Logging Vote Main loges-----\n\n\n");
    int B;
    scanf("%d",&B);
    if(B==1)
    {
        main_loges();

    }

    return 0;
}

void main_loges()
{
    system("cls");
    printf("\n\n\n");
    printf("       \t\t\t\t1.FOR VOTE ENTRY   ----|||\n ");
    Sleep(300);
    printf("       \t\t\t\t2.FOR ADMIN PANEL  ----|||\n ");
    Sleep(300);
    printf("       \t\t\t\t3.FOR WINNER       ----|||\n ");
    Sleep(300);
    printf("       \t\t\t\t4.FOR EXIT         ----|||\n\n\n\n");
    printf("     \t-----after Voter Entry You Can Vote Otherwise You Can Not ----\n\n\n ");
    Sleep(500);
    printf("       \t---------So please Enter (1) --------------\n\n\n ");
    int T;
    scanf("%d",&T);
    if(T==1)
    {
        voter_insert();

    }
    if(T==2)
    {
        admin();

    }
    if(T==3)
    {
        winner();

    }
    if(T==4)
    {
        exi();

    }
}

int cunt=0,count=0,R=3;
void voter_insert()
{
    node *temp;

    char name[25],birth_date[15],f_name[25],m_name[25],id[10];
    system("cls");
    printf("\n\n\n\n");
    printf("\tIF NATIONAL ID ,YOUR NAME ,BIRTH DATE,YOUR FATHER NAME AND MOTHER NAME MATCH YOU CAN GIVE VOTE OTHERWISE NOT\N\N");
    Sleep(300);
    printf("\t\t\tIF YOU DO WRONG (%d) TIMES,THE PROGRAMME WILL BE STOP AUTOMATICALY\N\N\N,R");
    Sleep(300);
    printf("\t\tPLEAES---,\n");
    Sleep(300);
    printf("\t\t\t\tENTER YOUR NATIONAL ID NUMBER  ");
    gets(id);
    gets(id);
    printf("\t\t\t\tENTER YOUR NAME               ");
    gets(name);
    printf("\t\t\t\tENTER YOUR BIRTH DATE               ");
    gets(birth_date);
    printf("\t\t\t\tENTER YOUR FATHER NAME               ");
    gets(f_name);
    printf("\t\t\t\tENTER YOUR MOTHER NAME               ");
    gets(m_name);
    temp=(node *)malloc (sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    strcpy(temp->birth_date,birth_date);
    strcpy(temp->father_name,f_name);
    strcpy(temp->mother_name,m_name);
    temp->next=NULL;
    head=temp;
    while(temp!=NULL)
    {
        if((strcmp(temp->id,"10000001")==0 && strcmp(temp->name,"Sheikh Hasina")==0 && strcmp(temp->birth_date,"09-05-1950")==0 && strcmp(temp->father_name,"Sheikh Mujibur Rahman")==0 && strcmp(temp->mother_name,"sheikh fazilatunnessa")==0) ||

       (strcmp(temp->id,"10000002")==0 && strcmp(temp->name,"Sajib Wazed Joy")==0 && strcmp(temp->birth_date,"27-07-1971")==0 && strcmp(temp->father_name,"Wazed Miah")==0 && strcmp(temp->mother_name,"Sheikh Hasina")==0) ||

        (strcmp(temp->id,"10000003")==0 && strcmp(temp->name,"Khaleda Zia")==0 && strcmp(temp->birth_date,"15-08-1945")==0 && strcmp(temp->father_name,"Iskander Majomdar")==0 && strcmp(temp->mother_name,"Taiyaba Majumdar")==0) ||

     (strcmp(temp->id,"10000004")==0 && strcmp(temp->name,"Tarique Rahman")==0 && strcmp(temp->birth_date,"20-11-1967")==0 && strcmp(temp->father_name,"Ziaur Rahman")==0 && strcmp(temp->mother_name,"Khaleda Zia")==0) ||

      (strcmp(temp->id,"10000005")==0 && strcmp(temp->name,"Hossain Md Ershad")==0 && strcmp(temp->birth_date,"20-10-1935")==0 && strcmp(temp->father_name,"Hossain Md.Rashel")==0 && strcmp(temp->mother_name,"Mrs.Jayda")==0) ||

      (strcmp(temp->id,"10000006")==0 && strcmp(temp->name,"Md.Rakibul")==0 && strcmp(temp->birth_date,"12-12-1995")==0 && strcmp(temp->father_name,"Md.Hamidul Hasan")==0 && strcmp(temp->mother_name,"Mrs Rawshonara")==0) ||

    (strcmp(temp->id,"10000007")==0 && strcmp(temp->name,"Md.Nazmul")==0 && strcmp(temp->birth_date,"14-07-1997")==0 && strcmp(temp->father_name,"Md.Mostafa")==0 && strcmp(temp->mother_name,"Mrs.Nurjahan Rahman")==0) ||

       (strcmp(temp->id,"10000008")==0 && strcmp(temp->name,"Nishat Parvin")==0 && strcmp(temp->birth_date,"05-05-1999")==0 && strcmp(temp->father_name,"Habib Hussain")==0 && strcmp(temp->mother_name,"Mrs Hussain")==0) ||

            (strcmp(temp->id,"10000009")==0 && strcmp(temp->name,"Raisa Akhtar")==0 && strcmp(temp->birth_date,"25-04-1996")==0 && strcmp(temp->father_name,"Md.Kamal Hasan")==0 && strcmp(temp->mother_name,"Mrs shahana")==0) ||

            (strcmp(temp->id,"10000010")==0 && strcmp(temp->name,"Saddam Hussain")==0 && strcmp(temp->birth_date,"19-06-1995")==0 && strcmp(temp->father_name,"Md.Sajjad Hussain")==0 && strcmp(temp->mother_name,"Mrs Runa khan")==0) ||

            (strcmp(temp->id,"10000011")==0 && strcmp(temp->name,"Fariya Tanjin")==0 && strcmp(temp->birth_date,"12-04-2000")==0 && strcmp(temp->father_name,"Md.Abdul Ahad")==0 && strcmp(temp->mother_name,"Mrs Rahima Begum")==0) ||

            (strcmp(temp->id,"10000012")==0 && strcmp(temp->name,"Mustak Ahmed")==0 && strcmp(temp->birth_date,"26-09-1987")==0 && strcmp(temp->father_name,"Md.Abul Hussain")==0 && strcmp(temp->mother_name,"Mrs Samirunnessa")==0) ||

            (strcmp(temp->id,"10000013")==0 && strcmp(temp->name,"Md.Mahfuzur Rahman")==0 && strcmp(temp->birth_date,"14-01-1997")==0 && strcmp(temp->father_name,"Md.Sajjadur Rahman")==0 && strcmp(temp->mother_name,"Mrs Sofia Begum")==0) ||

            (strcmp(temp->id,"10000014")==0 && strcmp(temp->name,"Naima Nabila")==0 && strcmp(temp->birth_date,"24-03-1998")==0 && strcmp(temp->father_name,"Md.Omar Khan")==0 && strcmp(temp->mother_name,"Mrs Rabiya Khan")==0) ||

            (strcmp(temp->id,"10000015")==0 && strcmp(temp->name,"Rakib ")==0 && strcmp(temp->birth_date,"12-12-1995")==0 && strcmp(temp->father_name,"Md.Hamidul Rahman")==0 && strcmp(temp->mother_name,"Mrs Shonara")==0) ||

           (strcmp(temp->id,"10000016")==0 && strcmp(temp->name,"Md.Sakib ")==0 && strcmp(temp->birth_date,"28-05-1997")==0 && strcmp(temp->father_name,"Md.Amjad Hoque")==0 && strcmp(temp->mother_name,"Mrs Shipa Hoque")==0) ||

           (strcmp(temp->id,"10000017")==0 && strcmp(temp->name,"Samia Khan ")==0 && strcmp(temp->birth_date,"12-10-1995")==0 && strcmp(temp->father_name,"Md.Yahiya Khan")==0 && strcmp(temp->mother_name,"Mrs Ripa Khan")==0) ||

           (strcmp(temp->id,"10000018")==0 && strcmp(temp->name,"Faiza Ahmed")==0 && strcmp(temp->birth_date,"27-08-1993")==0 && strcmp(temp->father_name,"Md.Jamshed Ahmed ")==0 && strcmp(temp->mother_name,"Mrs Runa Ahmed")==0) ||

            (strcmp(temp->id,"10000019")==0 && strcmp(temp->name,"Md.Azzan Khan ")==0 && strcmp(temp->birth_date,"23-11-1979")==0 && strcmp(temp->father_name,"Md.Akbor Khan")==0 && strcmp(temp->mother_name,"Mrs Sapla Begum")==0) ||

           (strcmp(temp->id,"10000020")==0 && strcmp(temp->name,"Md.Rony Miah ")==0 && strcmp(temp->birth_date,"13-01-1989")==0 && strcmp(temp->father_name,"Md.Nizam Khan")==0 && strcmp(temp->mother_name,"Mrs Rita Begum")==0) ||

           (strcmp(temp->id,"10000021")==0 && strcmp(temp->name,"Sheela Jannat ")==0 && strcmp(temp->birth_date,"19-08-1994")==0 && strcmp(temp->father_name,"Shahed Ahmed")==0 && strcmp(temp->mother_name,"Mrs Sofia Katun")==0) ||

           (strcmp(temp->id,"10000022")==0 && strcmp(temp->name,"Sanjida Akthar ")==0 && strcmp(temp->birth_date,"14-05-1987")==0 && strcmp(temp->father_name,"Md.Haiydar Rahman")==0 && strcmp(temp->mother_name,"Mrs Rabiya Rahman")==0) ||

           (strcmp(temp->id,"10000023")==0 && strcmp(temp->name,"Md.Rayhan Ahmed")==0 && strcmp(temp->birth_date,"24-12-1998")==0 && strcmp(temp->father_name,"Md.Shamsur Ali")==0 && strcmp(temp->mother_name,"Mrs Nasima Begum")==0) ||

           (strcmp(temp->id,"10000024")==0 && strcmp(temp->name,"Nissa Alom ")==0 && strcmp(temp->birth_date,"30-12-1993")==0 && strcmp(temp->father_name,"Md.Mizan Rahman")==0 && strcmp(temp->mother_name,"Mrs Nina Rahman")==0) ||

           (strcmp(temp->id,"10000025")==0 && strcmp(temp->name,"Md.Asim Rahman ")==0 && strcmp(temp->birth_date,"10-04-1998")==0 && strcmp(temp->father_name,"Md.Nokib Rahman")==0 && strcmp(temp->mother_name,"Mrs Sultana Begum")==0) ||

           (strcmp(temp->id,"10000026")==0 && strcmp(temp->name,"Md.Shuhag Ahmed ")==0 && strcmp(temp->birth_date,"13-09-1980")==0 && strcmp(temp->father_name,"Md.Shah Alom")==0 && strcmp(temp->mother_name,"Mrs Jannat Alom")==0) ||

           (strcmp(temp->id,"10000027")==0 && strcmp(temp->name,"Khadija Khan ")==0 && strcmp(temp->birth_date,"12-03-1995")==0 && strcmp(temp->father_name,"Md.Idris Miah")==0 && strcmp(temp->mother_name,"Mrs Nilufa Aktar")==0) ||

           (strcmp(temp->id,"10000028")==0 && strcmp(temp->name,"Riya Aktar ")==0 && strcmp(temp->birth_date,"17-12-1995")==0 && strcmp(temp->father_name,"Md.Imran Khan")==0 && strcmp(temp->mother_name,"Mrs Afia Khan")==0) ||

           (strcmp(temp->id,"10000029")==0 && strcmp(temp->name,"Tanya Ferdous ")==0 && strcmp(temp->birth_date,"26-03-1992")==0 && strcmp(temp->father_name,"Md.Ashraf Ahmed")==0 && strcmp(temp->mother_name,"Mrs Munni Ahmed")==0) ||

           (strcmp(temp->id,"10000030")==0 && strcmp(temp->name,"Shima Khan ")==0 && strcmp(temp->birth_date,"27-09-1982")==0 && strcmp(temp->father_name,"Md.Anis Haque")==0 && strcmp(temp->mother_name,"Mrs fatema Haque")==0) ||

           (strcmp(temp->id,"10000031")==0 && strcmp(temp->name,"Runa Rahman ")==0 && strcmp(temp->birth_date,"23-07-1998")==0 && strcmp(temp->father_name,"Md.Majed Rahman")==0 && strcmp(temp->mother_name,"Mrs Meena Begum")==0) ||

           (strcmp(temp->id,"10000032")==0 && strcmp(temp->name,"Tuhin Ahmed")==0 && strcmp(temp->birth_date,"19-06-1983")==0 && strcmp(temp->father_name,"Md.Shofiq Rahman")==0 && strcmp(temp->mother_name,"Mrs Sitara Begum")==0) ||

           (strcmp(temp->id,"10000033")==0 && strcmp(temp->name,"Mahbub Kawsar ")==0 && strcmp(temp->birth_date,"15-08-1999")==0 && strcmp(temp->father_name,"Md.Akbor Ali")==0 && strcmp(temp->mother_name,"Mrs Samira Ali")==0) ||

           (strcmp(temp->id,"10000034")==0 && strcmp(temp->name,"Foysal Karim ")==0 && strcmp(temp->birth_date,"12-03-1994")==0 && strcmp(temp->father_name,"Md.Abu Talha")==0 && strcmp(temp->mother_name,"Mrs Nazia Begum")==0) ||

           (strcmp(temp->id,"10000035")==0 && strcmp(temp->name,"Jubel Ahmed")==0 && strcmp(temp->birth_date,"17-01-1986")==0 && strcmp(temp->father_name,"Md.Asif Ahmed")==0 && strcmp(temp->mother_name,"Mrs Sheela Begum")==0) ||

           (strcmp(temp->id,"10000036")==0 && strcmp(temp->name,"Ayesha Aktar  ")==0 && strcmp(temp->birth_date,"11-11-1985")==0 && strcmp(temp->father_name,"Md.Shafkat Ali")==0 && strcmp(temp->mother_name,"Mrs Naima Ali")==0) ||

           (strcmp(temp->id,"10000037")==0 && strcmp(temp->name,"Dina Ahmed ")==0 && strcmp(temp->birth_date,"20-02-1997")==0 && strcmp(temp->father_name,"Md.Maruf Ahmed")==0 && strcmp(temp->mother_name,"Mrs Meena Ahmed ")==0) ||

           (strcmp(temp->id,"10000038")==0 && strcmp(temp->name,"Rabina Ahmed")==0 && strcmp(temp->birth_date,"17-02-1997")==0 && strcmp(temp->father_name,"Md.Yasin Ahmed")==0 && strcmp(temp->mother_name,"Mrs Lisa Ahmed")==0) ||

            (strcmp(temp->id,"10000039")==0 && strcmp(temp->name,"Asif Ali ")==0 && strcmp(temp->birth_date,"12-09-1987")==0 && strcmp(temp->father_name,"Md.Nur Miah")==0 && strcmp(temp->mother_name,"Mrs Salma Begum")==0) ||

           (strcmp(temp->id,"10000040")==0 && strcmp(temp->name,"Md.Rabel Ahmed ")==0 && strcmp(temp->birth_date,"10-01-1984")==0 && strcmp(temp->father_name,"Md.Aftab Ahmed")==0 && strcmp(temp->mother_name,"Mrs Mukta Begum")==0) ||

           (strcmp(temp->id,"10000041")==0 && strcmp(temp->name,"Md.Afsor Islam ")==0 && strcmp(temp->birth_date,"18-06-1980")==0 && strcmp(temp->father_name,"Md.Rafiq Ali")==0 && strcmp(temp->mother_name,"Mrs Aysha Ali")==0) ||

           (strcmp(temp->id,"10000042")==0 && strcmp(temp->name,"Fahmida Parvin ")==0 && strcmp(temp->birth_date,"07-06-1976")==0 && strcmp(temp->father_name,"Md.Layek Rahman")==0 && strcmp(temp->mother_name,"Mrs Sheuly Begum")==0) ||

           (strcmp(temp->id,"10000043")==0 && strcmp(temp->name,"Amira Mostafa ")==0 && strcmp(temp->birth_date,"17-09-1979")==0 && strcmp(temp->father_name,"Md.Ismail Rahman")==0 && strcmp(temp->mother_name,"Mrs Dolly Rahman")==0) ||

           (strcmp(temp->id,"10000044")==0 && strcmp(temp->name,"Md. Mehrab Husaain ")==0 && strcmp(temp->birth_date,"29-07-1983")==0 && strcmp(temp->father_name,"Md.Haroon Rahman")==0 && strcmp(temp->mother_name,"Mrs Amina Begum")==0) ||

           (strcmp(temp->id,"10000045")==0 && strcmp(temp->name,"Md.Fahim Ahmed ")==0 && strcmp(temp->birth_date,"03-03-1987")==0 && strcmp(temp->father_name,"Md.Yunus Ali")==0 && strcmp(temp->mother_name,"Mrs Shelina Ali")==0) ||

           (strcmp(temp->id,"10000046")==0 && strcmp(temp->name,"Md.Fahad Ahmed")==0 && strcmp(temp->birth_date,"08-02-1993")==0 && strcmp(temp->father_name,"Md.Abul Kalam")==0 && strcmp(temp->mother_name,"Mrs Halima Begum")==0) ||

           (strcmp(temp->id,"10000047")==0 && strcmp(temp->name,"Israt Jahan ")==0 && strcmp(temp->birth_date,"10-07-1973")==0 && strcmp(temp->father_name,"Md.Jalal Ahmed")==0 && strcmp(temp->mother_name,"Mrs Rimi Ahmed ")==0) ||

           (strcmp(temp->id,"10000048")==0 && strcmp(temp->name,"Bilkis Rahman ")==0 && strcmp(temp->birth_date,"12-01-1996")==0 && strcmp(temp->father_name,"Md.Jamal Ahmed")==0 && strcmp(temp->mother_name,"Mrs Munni Shah")==0) ||

           (strcmp(temp->id,"10000049")==0 && strcmp(temp->name,"Tammana Rahman ")==0 && strcmp(temp->birth_date,"14-04-2000")==0 && strcmp(temp->father_name,"Md.Idris Ali")==0 && strcmp(temp->mother_name,"Mrs Farjana Begum")==0) ||

           (strcmp(temp->id,"10000050")==0 && strcmp(temp->name,"Lisa Khan ")==0 && strcmp(temp->birth_date,"14-01-2000")==0 && strcmp(temp->father_name,"Md.liakot Ali")==0 && strcmp(temp->mother_name,"Mrs Heena Begum")==0)


            )







{
            cunt++ ;
            if(cunt>1)
                {
                    not_again();
                    break;

                }
                voting();

    }
        else
        {
            R--;
            count++;
            if(count == 3);
            {
                stop();
                break;

            }
            printf("\n\n\n\n");
            printf("\t\tYour voter ID or NAME or DATE OF BIRTH or FATHER's NAME is wrong\n\n");
            Sleep(300);
            printf("\t\t\t\t\t\t please re-enter\n\n\n");
            Sleep(300);
            system("pause");
            main_loges();
        }
        temp=temp->next;

    }

}

    void voting()
    {
        system("cls");
        printf("\n\n\n\n");
        printf("\t\t       ******* List Of The Candidates *******    \n\n\n");
        Sleep(300);
        printf("\t\t\t NAME ---------------------SYMBOL\n\n");
        Sleep(300);
         printf("\t\t\t 1. ---------------------1.SYMBOL\n\n");
        Sleep(300);
         printf("\t\t\t NAME ---------------------SYMBOL\n\n");
        Sleep(300);
         printf("\t\t\t NAME ---------------------SYMBOL\n\n");
        Sleep(300);
         printf("\t\t\t NAME ---------------------SYMBOL\n\n");
        Sleep(300);
         printf("\t\t\t NAME ---------------------SYMBOL\n\n");



        int B,j;
        printf("\t\t\tPlease--,\n");
        printf("\t\t\t\t  Enter Your Choice      ");
        for(j=1; j<=1;j++)
        {
            scanf("%d",&B);

            if(B==1)
            {
                cunt1++;
            }

            if(B==2)
            {
                cunt2++;
            }

            if(B==3)
            {
                cunt3++;
            }

            if(B==4)
            {
                cunt4++;
            }
            if(B==5)
            {
                cunt5++;
            }
            if(B!=1 && B!=2 && B!=3 && B!=4 && B!=5)
            {
                printf("\t\t\t Your vote is invalid\n");
                main_loges();
            }


        }

int R;
system("cls");

printf("\n\n\n\n");
printf("\t\t\tIf You Want To See The Present Winner Enter One (1) OR\n\n\n \t\t\t\tZero(0) For Main Loges\n\n\n");
scanf("%d",&R);
if(R==1)
{
    winner();
}
if(R!=1)
{
    main_loges();
}
}


void admin()
{
    int B;
    printf("\n\n\n\n");
    printf("\t\t\t Enter Password To Unlock Admin Panel \n\n");
    scanf("%d", &B);

    if(B==10715)
    {
        show();
    }
    else
    {
        printf("Wrong Password\n Please Try Again..");

    }
}

void show()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t\t How Many Votes Who Get\n\n\n");
    Sleep(500);
    printf("\t\t\t Sheaik Hasina Got %d Votes \n",cunt1);
    Sleep(500);
    printf("\t\t\t Begum Khaleda Zia Got %d Votes \n",cunt2);
    Sleep(500);
    printf("\t\t\t Shojib Wazed Joy Got %d Votes \n",cunt3);
    Sleep(500);
    printf("\t\t\t Tarek Rahman Got %d Votes \n",cunt4);
    Sleep(500);
    printf("\t\t\t Arshed Got %d Votes \n\n\n",cunt5);
    Sleep(500);

    int R;
    printf("\t\t\t Enter One(1) For Main Loges OR\n\n\n \t\t\tZero(0) For Exit\n");
    scanf("%d",&R);

    if(R==1)
    {
        main_loges();
    }

    else
    {
        exi();
    }
}

void winner()
{
    system("cls");

    printf("\n\n\n\n");

    if(cunt2<cunt1 && cunt3<cunt1 && cunt4<cunt1 && cunt5<cunt1)
        printf("\t\t\tThe Winner Is Sheaik Hasina And She Got %d Votes\n\n\n",cunt1);

    if(cunt1<cunt2 && cunt3<cunt2 && cunt4<cunt2 && cunt5<cunt2)
        printf("\t\t\tThe Winner Is Begum Khaleda Zia And She Got %d Votes\n\n\n",cunt2);

    if(cunt1<cunt3 && cunt2<cunt3 && cunt4<cunt3 && cunt5<cunt3)
        printf("\t\t\tThe Winner Is Sojib Wazed Joy And He Got %d Votes\n\n\n",cunt3);

    if(cunt1<cunt4 && cunt2<cunt4 && cunt3<cunt4 && cunt5<cunt4)
        printf("\t\t\tThe Winner Is Tarek Rahman And He Got %d Votes\n\n\n",cunt4);

    if(cunt1<cunt5 && cunt2<cunt5 && cunt3<cunt5 && cunt4<cunt5)
        printf("\t\t\tThe Winner Is Arshed And He Got %d Votes\n\n\n",cunt5);


        int T;
        printf("\t\t\tEnter One(1) For Main Loges OR\n\n\t\t\t\t\tZero(0) For Exit\n");
        scanf("%d",&T);

        if(T==1)
        {
            main_loges();

        }
        if(T!=1)
        {
            exi();

        }
}

 void stop()
 {
     system("cls");

     printf("\n\n\n");
     printf("\t--------(SORRY YOU CAN NOT GIVE VOTE FOR YOUR WRONG ENTRY THREE(3) TIMES)--------\n\n\n");
     Sleep(500);
     printf("\t\t\t--------(PLEASE TRY AGAIN...)--------\n\n\n");
     Sleep(500);
     printf("\t\t\t\t--------(THANK YOU)--------\n\n\n");
     Sleep(500);

 }

 void  not_again()
 {
     system("cls");
     printf("\n\n\n");
     printf("\t\t- - - - - - - - - - YOU HAVE GIVE YOUR VOTE SUCCESSFULLY - - - - - - - - - -\n\n");
     Sleep(500);

     printf("      \t\t- - - - - SO YOU CAN NOT VOTE MORE THEN ONE(1) TIME - - - - -\n\n\n");
     Sleep(500);

     printf("\t\t\t   IF YOU WANT TO SEE PRESENT WINNER ENTER ONE(1) OR\n\t\t\t\tTwo(2) FOR MAIN LOGES\n");
     Sleep(500);

     printf("\t\t\t\t\t ZERO (0) FOR EXIT\n\n");
     scanf("%d",&R);

     if(R==1)
     {
         winner();
     }

     if(R==2)
     {
         main_loges();
     }

     if((R!=1) || (R!=2))
     {
         exi();
     }


 }

 void exi()
 {
     system("cls");

     printf("\n\n\n");
     printf("\t\t- - - - - - - - - - YOU HAVE GIVE YOUR VOTE SUCCESSFULLY - - - - - - - - - - \n\n");
     Sleep(500);
     printf("\t\t\t\t* * * * * --- THANK YOU --- * * * * *\n\n\n");
     Sleep(500);

 }





