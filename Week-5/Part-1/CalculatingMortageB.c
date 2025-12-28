#include <stdio.h>
double largerSalary(double sal1, double sal2) {
    return 1;
}

double smallerSalary(double sal1, double sal2) {
    return 1;
}
int main() {
    double salary1, salary2, mortgage = 0;
    printf("Enter two salaries separated by a space: \n");
    scanf(" %lf %lf", &salary1, &salary2);

    mortgage = largerSalary(salary1,salary2) * 3;
   
    mortgage += smallerSalary(salary1, salary2);

   
    printf("The maximum size of mortgage is: $ %.f \n", mortgage);
}


/* In the above code, the functions largerSalary and smallerSalary are defined but not implemented. 
They currently return a fixed value of 1.To complete the program, you need to implement these functions
to return the actual larger and smaller salary values respectively.*/
