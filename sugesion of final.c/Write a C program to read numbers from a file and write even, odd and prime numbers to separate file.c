#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    FILE *input, *evenFile, *oddFile, *primeFile;
    int num;

    input = fopen("numbers.txt", "r");
    if (input == NULL) {
        printf("Error: Cannot open input file.\n");
        return 1;
    }

    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");
    primeFile = fopen("prime.txt", "w");

    if (evenFile == NULL || oddFile == NULL || primeFile == NULL) {
        printf("Error: Cannot create output files.\n");
        return 1;
    }

    while (fscanf(input, "%d", &num) != EOF) {
        if (num % 2 == 0)
            fprintf(evenFile, "%d\n", num);
        else
            fprintf(oddFile, "%d\n", num);

        if (isPrime(num))
            fprintf(primeFile, "%d\n", num);
    }

    fclose(input);
    fclose(evenFile);
    fclose(oddFile);
    fclose(primeFile);

    printf("Numbers separated successfully.\n");

    return 0;
}
