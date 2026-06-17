#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <float.h>
#include <stdbool.h>

typedef int integer;
typedef char character;
typedef bool boolean;
typedef char *string;
typedef float singleprecision_floatingpoint;
typedef double doubleprecision_floatingpoint;
typedef long expanded;
typedef short small;
typedef long long even_expanded;

int quit()
{
    exit(0);
}

int terminate()
{
    return 0;
}

void print(const char *Message)
{
    printf("%s\n", Message);
}

void input_n_output(char e)
{
    e = getchar();
    putchar(e);
}

#define is_equal_to ==
#define is_greater_or_equal_to >=
#define is_less_or_equal_to <=
#define is_not_equal_to !=
#define exclusive_or ^
#define or ||
#define and &&
#define not !
#define bitwise_and &
#define bitwise_or |

#define plus +
#define minus -
#define times *
#define divided_by /
#define mod %
#define is =

#define to ...