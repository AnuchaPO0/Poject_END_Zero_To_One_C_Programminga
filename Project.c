#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char gradeCalculete(int score)
{
    char gr;
    if (score>=80){ gr='A';}
    else if (score>=70){  gr='B'; }
    else if (score>=60){  gr='C'; }
    else if (score>=50){  gr='D'; }
    else if (score<=50){  gr='F'; }
    else { }
    return gr;
}

float Salarycalculate(int hour)
{
    float salary;
    salary=hour*40;
    return salary;
}

float BonusCalculate(int salary)
{

    float bonus=salary*10/100;
    return bonus;
}

int main(void)
{   
    int i=0;
    do{

    //Id :: ANUCHA (ตัวใหญ่ทั้งหมด) 
    //password :: 1234
    //ใส่ระหัสผิดได3ครั้ง ถ้าผิดครบ3ครั้งเป็นอันจบการทำงาน
    
    char use[30],pass[30];
    char user[]="ANUCHA",password[]="1234";

    printf ("ID :: "); scanf ("%s",use);
    printf ("PASSWORD :: "); scanf ("%s",pass);
    
    if (strcmp(use,user)==0&&strcmp(pass,password)==0)
    {    
        printf ("1 :: Calculate Grade \t 2 :: Salary and Bonus CAalculation\n");
        int ii;
         printf ("WORK :: "); scanf ("%d",&ii);
        if (ii==1)
        { 
            int sc;
            printf ("SCORE :: ");
            scanf ("%d",&sc);
            gradeCalculete(sc);
            printf ("GRADE :: %c\n",gradeCalculete(sc));
        }
        else if (ii==2)
        {  
            int day,hour,tt;
            printf ("DAY WORK :: "); scanf ("%d",&day);
            printf ("HOUR WORK :: "); scanf ("%d",&hour);
                tt=day*hour;
            Salarycalculate(tt); 
            printf ("SALARY :: %.2f THB\n",Salarycalculate(tt));
            printf ("BONUS :: %.2f THB\n",BonusCalculate(Salarycalculate(tt)));
        }
        
        else 
        { }
            
    
    
      i=4;  
      }
    else { }


    i++; }while (i<3); printf ("END");
    
    return 0;
}