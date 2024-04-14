// // #include <stdio.h>
// // #include <math.h>
// // int main()
// // {
// //     int n, x, y, z, p, s, count = 0, sum = 0;
// //     for (int i = 1; i <= 500; i++)
// //     {
// //         while (n > 0)
// //         {
// //             n /= 10;
// //             count++;
// //         }
// //         // printf("The number of digit are %d", count);
// //         // if (count == 3)

// //         if (count == 1)
// //         {
// //             s = pow(i, 3);
// //             if (i == s)
// //             {
// //                 printf("%d ", i);
// //             }
// //         }

// //         else if (count == 2)
// //         {
// //             n = i % 10;
// //             x = i / 10;
// //             s = pow(n, 3) + pow(x, 3);
// //             if (i == s)
// //             {
// //                 printf("%d ", i);
// //             }
// //         }
// //         else
// //         {
// //             n = i % 10;
// //             x = i / 10;
// //             y = x % 10;
// //             z = x / 10;
// //             s = pow(n, 3) + pow(y, 3) + pow(z, 3);
// //             if (i == s)
// //             {
// //                 printf("%d ", i);
// //             }
// //         }
// //     }

// //     return 0;
// // }
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     for (int i = 1; i <= 500; i++)
//     {
//         int num = i;
//         int sum = 0;
//         int count = 0;
//         int temp = num;

//         // Count number of digits
//         while (temp != 0)
//         {
//             temp /= 10;
//             count++;
//         }

//         temp = num;

//         // Calculate sum of digits raised to the power of count
//         while (temp != 0)
//         {
//             int digit = temp % 10;
//             sum += pow(digit, count);
//             temp /= 10;
//         }

//         // Check if the sum equals the original number
//         if (sum == num)
//         {
//             printf("%d ", num);
//         }
//     }

//     return 0;
// }

// 1 flop and 1 good and 1 better
#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 500; i++)
    {
        int n = i, count = 0, sum = 0;

        // Count the number of digits
        while (n > 0)
        {
            n /= 10;
            count++;
        }

        // Reset n to its original value
        n = i;

        // Calculate the sum of digits raised to the power of count
        for (int j = 0; j < count; j++)
        {
            int digit = n % 10;
            sum += pow(digit, count);
            n /= 10;
        }

        // Check if the sum equals the original number
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
