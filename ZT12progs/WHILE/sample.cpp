#include <stdio.h>
 
int main(void)
{
/* Variable definition */
int acc_no, bal_st, new_bal, tot_chg, tot_credit, credit_lim, counter;
 
counter = 1; 
 
/* Collect data */
while(acc_no != -1) {    /* sentinel value =-1 */
             printf("Enter account no (-1 to end): \n");
             scanf("%d", &acc_no);
             printf("Enter beginning balance: ", "\n");
             scanf("%d", &bal_st);
             printf("Enter total charges: ", "\n");
             scanf("%d", &tot_chg);
             printf("Enter total credits: ", "\n");
             scanf("%d",  &tot_credit);
             printf("Enter credit limit: ", "\n");
             scanf("%d", &credit_lim);
 
             new_bal = bal_st + tot_chg - tot_credit; /* Calculate new bal */
             counter++;
             }
             if(new_bal > credit_lim) {              /* test if more than lim */
                        printf("Account No.: %d\n", acc_no);
                        printf("Credit Limit: %d\n", credit_lim);
                        printf("Balance: %d\n", new_bal);
                        printf("Credit Limit Exceeded\n");
                        }
                         
              
printf("end of entries\n");
system("PAUSE");
return 0;
}
