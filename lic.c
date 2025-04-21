#include <stdio.h>

int main(void) {
    float basic_salary, da, ta, hra, pf, lic, gross_salary, net_salary;


    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);


    da = basic_salary * 10.5 / 100;
    ta = basic_salary * 11.9 / 100;
    hra = basic_salary * 15.25 / 100;


    pf = basic_salary * 19.28 / 100;
    lic = basic_salary * 13.22 / 100;


    gross_salary = basic_salary + da + ta + hra;


    net_salary = gross_salary - (pf + lic);


    printf("\nBasic Salary: %.2f\n", basic_salary);
    printf("DA (10.5%%): %.2f\n", da);
    printf("TA (11.9%%): %.2f\n", ta);
    printf("HRA (15.25%%): %.2f\n", hra);
    printf("PF (19.28%%): %.2f\n", pf);
    printf("LIC (13.22%%): %.2f\n", lic);
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}
