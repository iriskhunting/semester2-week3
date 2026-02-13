
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Iris Hunting
 * ID: 202028819
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 30000;
    float NIRate = 0;
    float taxRate = 100;
    float finalSalary;
    float NIPaid;
    float taxPaid;

    // calculate the deductions and final take-home salary
    NIPaid = salary * (taxRate / 100);
    finalSalary = salary - NIRate;

    taxPaid = salary * (taxRate / 100);
    finalSalary = salary - taxPaid;

   if (finalSalary < 12500) {
      taxPaid = finalSalary - 12500;
      finalSalary = 12500;
   }

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",(salary * (NIRate / 100)));
    printf("Tax contribution £%.2f\n",taxPaid);
    printf("Take home salary £%.2f\n",finalSalary);

    return 0;
 }