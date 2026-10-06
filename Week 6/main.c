#include <stdio.h>
#include <string.h>

int main()
{
    // ---------- PART A: EMPLOYEE SALARIES ----------
    float salaries[50];
    float total = 0;
    float highest = 0;
    float lowest = 0;
    float average;
    float searchSalary;
    int found = 0;

    printf("=== PART A: EMPLOYEE SALARIES ===\n\n");

    for (int i = 0; i < 50; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        total = total + salaries[i];

        if (i == 0)
        {
            highest = salaries[i];
            lowest = salaries[i];
        }

        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }

        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

    average = total / 50;

    printf("\n--- Employee Salaries ---\n");
    for (int i = 0; i < 50; i++)
    {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    printf("\nAverage salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);

    found = 0;
    for (int i = 0; i < 50; i++)
    {
        if (salaries[i] == searchSalary)
        {
            found = 1;
            printf("Salary %.2f found at position %d\n", searchSalary, i + 1);
            break;
        }
    }

    if (!found)
    {
        printf("Salary %.2f not found.\n", searchSalary);
    }

    // ---------- PART B: DEPARTMENT BUDGETS ----------
    float budgets[10];
    float budgetTotal = 0;
    float budgetAverage;
    float temp;

    printf("\n=== PART B: DEPARTMENT BUDGETS ===\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
        budgetTotal = budgetTotal + budgets[i];
    }

    budgetAverage = budgetTotal / 10;

    printf("\n--- Department Budgets (Before Sorting) ---\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    printf("\nTotal budget: %.2f\n", budgetTotal);
    printf("Average budget: %.2f\n", budgetAverage);

    // Bubble sort ascending
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (budgets[j] > budgets[j + 1])
            {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\n--- Department Budgets (Sorted Ascending) ---\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f\n", budgets[i]);
    }

    // ---------- PART C: VEHICLE REGISTRATIONS ----------
    char registrations[20][20];
    char searchReg[20];
    int regFound = 0;

    printf("\n=== PART C: VEHICLE REGISTRATIONS ===\n\n");

    for (int i = 0; i < 20; i++)
    {
        printf("Enter vehicle registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\n--- Vehicle Registrations ---\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%s\n", registrations[i]);
    }

    printf("\nEnter a registration number to search for: ");
    scanf("%19s", searchReg);

    regFound = 0;
    for (int i = 0; i < 20; i++)
    {
        if (strcmp(registrations[i], searchReg) == 0)
        {
            regFound = 1;
            printf("Registration %s found at position %d\n", searchReg, i + 1);
            break;
        }
    }

    if (!regFound)
    {
        printf("Registration %s not found.\n", searchReg);
    }

    return 0;
}