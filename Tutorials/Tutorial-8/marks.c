#include <stdio.h>
#include <math.h>

int main() {
    FILE *file;
    int rollNo, marks;
    int topperRollNo = 0, minRollNo = 0;
    int marksArr[500], rollNoArr[500];
    int count = 0, failedCount = 0;
    double sum = 0, sumSq = 0;
    int maxMarks = -1, minMarks = 101; 

    file = fopen("marks500.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    while (fscanf(file, "%d %d", &rollNo, &marks) == 2) {
        if (rollNo == -9999) {
            break;
        }

        rollNoArr[count] = rollNo;
        marksArr[count] = marks;
        sum += marks;
        sumSq += marks * marks;

        if (marks > maxMarks) {
            maxMarks = marks;
            topperRollNo = rollNo;
        }
        if (marks < minMarks) {
            minMarks = marks;
            minRollNo = rollNo;
        }

        count++;
        if (count > 500) {
            printf("Error: Exceeded maximum student limit.\n");
            fclose(file);
            return 1;
        }
    }
    fclose(file);

    double average = sum / count;
    double variance = (sumSq / count) - (average * average);
    double stddev = sqrt(variance);

    printf("Number of Students: %d\n", count);
    printf("Topper: Roll No. %d with %d marks\n", topperRollNo, maxMarks);
    printf("Minimum Marks: %d (Roll No. %d)\n", minMarks, minRollNo);
    printf("Average Marks: %.2f\n", average);
    printf("Standard Deviation: %.2f\n", stddev);
    printf("Failed Students (Marks < 33):\n");

    for (int i = 0; i < count; i++) {
        if (marksArr[i] < 33) {
            printf("Roll No. %d (Marks: %d)\n", rollNoArr[i], marksArr[i]);
            failedCount++;
        }
    }

    printf("Total Failed Students: %d\n", failedCount);

    return 0;
}