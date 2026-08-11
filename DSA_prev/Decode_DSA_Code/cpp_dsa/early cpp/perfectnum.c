#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;


    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }


    return (sum == num);
}

int main() {
    int start, end,found=0;

   // printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

   // printf("Perfect numbers in the range %d to %d are:\n", start, end);


    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
            found=1;
        }
    }
    if(!found){
        printf("No perfect number");
    }

    return 0;
}

