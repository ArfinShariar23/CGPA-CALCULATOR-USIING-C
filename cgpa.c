#include<stdio.h>
int main()
{
    
    double act,mat,oop,oop_lab,sp,eee,eee_lab;
    
    double act_credit,mat_credit,oop_credit,oop_lab_credit,eee_credit,eee_lab_credit,sp_credit;
    
    double cgpa,total_credit,total_grade, total_mult;
    
    double act_mult,mat_mult,oop_mult,oop_lab_mult,eee_mult,eee_lab_mult,sp_mult;
    
    printf("Enter your Object Oriented Course Grade:  ");
    scanf("%lf",&oop);
    
    printf("\n");
    
     printf("Enter your Object Oriented Course Credit:  ");
     scanf("%lf",&oop_credit);
     
       printf("\n");
    
     printf("Enter your Object Oriented Lab Course Grade:  ");
     scanf("%lf",&oop_lab);
     
       printf("\n");
     printf("Enter your Object Oriented Lab Course Credit:  ");
     scanf("%lf",&oop_lab_credit);
     
       printf("\n");
     
     printf("Enter your Basic Electronics Course Grade:  ");
     scanf("%lf",&eee);
     
        printf("\n");
     
     printf("Enter your Basic Electronics Course Credit:  ");
     scanf("%lf",&eee_credit);
     
       printf("\n");
     
     printf("Enter your Basic Electronics Lab Course Grade:  ");
     scanf("%lf",&eee_lab);
   
    printf("\n");
     
     printf("Enter your Basic Electronics Lab Course Grade:  ");
     scanf("%lf",&eee_lab_credit);
     
         printf("\n");
         
     printf("Enter your Engineering Math Course Grade:  ");
     scanf("%lf",&mat);
     
         printf("\n");
         
     printf("Enter your Engineering Math Course Credit:  ");
     scanf("%lf",&mat_credit);
     
           printf("\n");
         
     printf("Enter your Financial & Manegerial Accounting Course Grade:  ");
     scanf("%lf",&act);
     
      printf("\n");
         
     printf("Enter your Financial & Manegerial Accounting Course Credit:  ");
     scanf("%lf",&act_credit);
     
      printf("\n");
     
     printf("Enter your Software Project Course Grade: ");
     scanf("%lf",&sp);
     
 printf("\n");
     
      printf("Enter your Software Project Course Credit: ");
     scanf("%lf",&sp_credit);
     
      printf("\n");
     printf("\n");
     
     act_mult = act*act_credit;
     mat_mult = mat*mat_credit;
     oop_mult = oop*oop_credit;
     oop_lab_mult = oop_lab*oop_lab_credit;
     sp_mult = sp*sp_credit;
     eee_mult = eee*eee_credit;
     eee_lab_mult = eee_lab*eee_lab_credit;
     
     total_mult = act_mult+mat_mult+oop_lab_mult+oop_mult+eee_lab_mult+eee_mult+sp_mult;
     
     printf("MULTIPLICATION OF CREDIT AND GRADE:%.2lf\n",total_mult);
     
      total_credit = act_credit+mat_credit+oop_credit+oop_lab_credit+eee_credit+eee_lab_credit+sp_credit;
      
      printf("Total Credit: %.2lf\n",total_credit);
      cgpa = total_mult/total_credit;
    
     
     
     printf("\n");
     printf("\n");
     
     printf("Congratulations!!!!\n");
     printf("Your SGPA is:%.2lf",cgpa);
     
     printf("\n");
     printf("\n");
     
     printf("Thank you for USING ME\n");
     printf("Developed by: Arfin Shariar\n");
     
     
    
    
    return 0;
    
}
