
#include <stdio.h>
#include <stdlib.h>

int* mergeOrders(int n, int* list1, int* list2) {
    int* mergedList = (int*)malloc(2 * n * sizeof(int));

    int i = 0, j = 0, k = 0;
    while (i < n && j < n) {
        if (list1[i] < list2[j]) {
            mergedList[k++] = list1[i++];
        } else {
            mergedList[k++] = list2[j++];
        }
    }

    while (i < n) {
        mergedList[k++] = list1[i++];
    }

    while (j < n) {
        mergedList[k++] = list2[j++];
    }

    return mergedList;
}

int main() {
    int N;
    scanf("%d", &N);

    int* list1 = (int*)malloc(N * sizeof(int));
    int* list2 = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &list1[i]);
    }

   // for (int i = 0; i < N; i++) {
   //     scanf("%d", &list2[i]);
   // }

   // int* mergedList = mergeOrders(N, list1, list2);

    for (int i = 0; i < N; i++) {
        printf("%d ", list1[i]);
    }
    printf("\n");

   // free(list1);
   // free(list2);
   // free(mergedList);

    return 0;
}
