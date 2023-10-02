/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) Quentin Deslandes.
 */

/*
 * Print the various data types size for the current host.
 */

#include <stdio.h>

int main(void)
{
    printf("signed char: %d bytes\n", sizeof(char));
    printf("unsigned char: %d bytes\n", sizeof(unsigned char));
    printf("signed short: %d bytes\n", sizeof(short));
    printf("unsigned short: %d bytes\n", sizeof(unsigned short));
    printf("signed int: %d bytes\n", sizeof(int));
    printf("unsigned int: %d bytes\n", sizeof(unsigned int));

    // And much more types...

    return 0;
}
