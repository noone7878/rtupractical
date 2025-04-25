#include <stdio.h>

int main(void){
    float base_salary, gross_salary, net_salary, da, ta, hra, pf, lic;

    printf("Enter your Base Salary: ");
    scanf("%f", &base_salary);

    //allowences
    da = base_salary*10.5/100;
    ta = base_salary*11.9/100;
    hra = base_salary*15.25;

    //deduciton
    pf = base_salary*19.28/100;
    lic = base_salary*13.22/100;

    //gross salary = base salary + allowences
    gross_salary = base_salary + da + ta + hra;
    //net salary = gross - deduction
    net_salary = gross_salary - pf - lic;

    printf("\nBase Salary: %.2f\n", base_salary);
    printf("DA (10.5%%): %.2f\n", da);
    printf("TA (11.9%%): %.2f\n", ta);
    printf("HRA (15.25%%): %.2f\n", hra);
    printf("PF (19.28%%): %.2f\n", pf);
    printf("LIC (13.22%%): %.2f\n", lic);
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Net Salary: %.2f\n", net_salary);
}
