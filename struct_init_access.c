/*
 * File:    struct-initialization-access.c
 * Author:  Karthick S
 * Date:    11/08/2025
 * 
 * Description:
 *   This C program demonstrates how to initialize structures at compile-time
 *   and how to access structure members using both the dot (.) operator and 
 *   the arrow (->) operator (simulated via &struct).
 *
 *   The program creates two student records, one accessed directly via the 
 *   structure variable, and the other using (&struct)->member syntax.
 *
 * Features:
 *   - Compile-time initialization of structs
 *   - Use of dot (.) operator to access struct members
 *   - Use of (&struct)->member syntax to simulate arrow operator usage
 */

#include <stdio.h>

struct st {
    int roll;
    char name[20];
    float marks;
};

int main() {
    // Compile-time initialization of struct variables
    struct st v1 = {1, "aaaa", 99.8};
    struct st v2 = {2, "bbbb", 99.7};

    // Output using dot operator (direct access)
    printf("roll: %d name: %s marks: %f\n", v1.roll, v1.name, v1.marks);

    // Output using (&v2)-> (simulated arrow operator without a pointer variable)
    printf("roll: %d name: %s marks: %f", (&v2)->roll, (&v2)->name, (&v2)->marks);

    return 0;
}
