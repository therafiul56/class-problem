#include <stdio.h>

int chek(int num)
{
    int original = num;
    int rev = 0;

    while(num != 0){
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    return (original == rev);
}

int main()
{
    FILE *fp_in;
    FILE *fp_even, *fp_odd, *fp_pal;

    char filename[1000] = "chudi.txt";

    fp_in = fopen(filename, "r");

    if(fp_in == NULL){
        printf("ERROR: the file cannot be opened\n");
        return 1;
    }

    fp_even = fopen("even.txt", "a");
    fp_odd  = fopen("odd.txt", "a");
    fp_pal  = fopen("pal.txt",  "a");

    int num;
    while (fscanf(fp_in, "%d", &num) != EOF)
    {
        if(num % 2 == 0)
            fprintf(fp_even, "%d\n", num);
        else
            fprintf(fp_odd, "%d\n", num);

        if(chek(num))
            fprintf(fp_pal, "%d\n", num);
    }

    fclose(fp_in);
    fclose(fp_even);
    fclose(fp_odd);
    fclose(fp_pal);

    return 0;
}
