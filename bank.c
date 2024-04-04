#include <stdio.h>
int main()
{
      float amount, interest;
      int age, days;
      printf("Enter amount,days of deposit and and age of the customer:");
      scanf("%f%d%d", &amount, &days, &age);

      if (age > 60 && amount > 50000)
      {
            if (days >= 30 && days <= 60)
            {
                  interest = amount * 0.07;
            }
            else if (days >= 61 && days <= 90)
            {
                  interest = amount * 0.075;
            }
            else if (days >= 91 && days <= 180)
            {
                  interest = amount * 0.08;
            }
            else if (days >= 181 && days <= 365)
            {
                  interest = amount * 0.09;
            }
            else
            {
                  interest = amount * 0.095;
            }
      }

      else
      {
            if (days >= 30 && days <= 60)
            {
                  interest = amount * 0.06;
            }
            else if (days >= 61 && days <= 90)
            {
                  interest = amount * 0.065;
            }
            else if (days >= 91 && days <= 180)
            {
                  interest = amount * 0.07;
            }
            else if (days >= 181 && days <= 365)
            {
                  interest = amount * 0.08;
            }
            else
            {
                  interest = amount * 0.085;
            }
      }
      printf("amount  to be paid is:%.2f", interest + amount);
}