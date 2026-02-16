
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Iris Hunting
 * ID: 202028819
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 30000;
    float NIRate = 9;
    float taxRate = 25;
    float finalSalary;
    float NIPaid;
    float salaryAfterNI;
    float taxPaid;

    // calculate the deductions and final take-home salary
    NIPaid = salary * (NIRate / 100);
    salaryAfterNI = salary - NIPaid;

    taxPaid = (salaryAfterNI - 12500) * (taxRate / 100); //apply on taxable amount
    if (taxPaid <= 0) {
      taxPaid = 0;
    }

    finalSalary = salaryAfterNI - taxPaid;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NIPaid);
    printf("Tax contribution £%.2f\n",taxPaid);
    printf("Take home salary £%.2f\n",finalSalary);

    return 0;
 }