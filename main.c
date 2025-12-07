#include <stdio.h>
#include "calendar.h"
#include "fibonacci.c"
#include <time.h>

int main()
{
    // int year = 2024;
    // Month month = FEBRUARY;
    // int day = 11;

    // printf("Jour dans semaine : %d\n", jour_dans_semaine(day, month, year));

    // fibonacci benchmarks
    int test_values[] = {10, 20, 30, 35, 40, 45, 50};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < num_tests; i++)
    {
        int n = test_values[i];
        printf("\n=== Testing n = %d ===\n", n);

        // Iterative version
        clock_t start_iter = clock();
        unsigned long long result_iter = fibonacci_iter(n);
        clock_t end_iter = clock();
        long clocks_iter = end_iter - start_iter;

        printf("Iterative: result = %llu\n", result_iter);





        printf("  Clocks: %ld\n", clocks_iter);
        printf("  Time: %f seconds\n", (double)clocks_iter / CLOCKS_PER_SEC);

        // Recursive version
        clock_t start_rec = clock();
        int result_rec = fibonacci_rec(n);
        clock_t end_rec = clock();
        long clocks_rec = end_rec - start_rec;

        printf("Recursive: result = %d\n", result_rec);
        printf("  Clocks: %ld\n", clocks_rec);
        printf("  Time: %f seconds\n", (double)clocks_rec / CLOCKS_PER_SEC);

 
    }

    return 0;
}