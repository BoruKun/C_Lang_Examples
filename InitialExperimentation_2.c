// This program demonstrates arrays
#include <stdio.h>
#include <unistd.h>
#include <cs50.h>

void arrays_demo(void);
float average(int length, int array[]);

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    string name = get_string("Please enter your string\n");
    printf("%s\n", name);
    // casting example
    printf("%i %i %i\n", (int) c1, (int) c2, (int) c3);
    arrays_demo();
    return 0;
}


void arrays_demo(void)
{
    int n;
    printf("Please enter the number of scores: ");
    scanf ("%d", &n);

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        printf("Score %i: ", i+1);
        scanf("%d", &scores[i]);
    }

    printf("Average: %.2f\n", average(n, scores));
    // Refer to precision notation for float
}

float average(int length, int array[]) // Do not forget to mention the array length!!!
{
    int sum = 0;
    for (int i =0; i < length; i++)
    {
        sum += array[i];
    }    
    return (float) sum / (float) length;
}