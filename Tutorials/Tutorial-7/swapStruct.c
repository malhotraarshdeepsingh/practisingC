#include <stdio.h>

struct Data {
    int id;
    char name[50];
    float salary;
};

void swap(struct Data *a, struct Data *b) {
    struct Data temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    struct Data emp1 = {1, "Alice", 50000.0};
    struct Data emp2 = {2, "Bob", 60000.0};

    printf("Before swapping:\n");
    printf("Emp1: ID=%d, Name=%s, Salary=%.2f\n", emp1.id, emp1.name, emp1.salary);
    printf("Emp2: ID=%d, Name=%s, Salary=%.2f\n", emp2.id, emp2.name, emp2.salary);

    swap(&emp1, &emp2);

    printf("\nAfter swapping:\n");
    printf("Emp1: ID=%d, Name=%s, Salary=%.2f\n", emp1.id, emp1.name, emp1.salary);
    printf("Emp2: ID=%d, Name=%s, Salary=%.2f\n", emp2.id, emp2.name, emp2.salary);

    return 0;
}