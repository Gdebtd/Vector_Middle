#include "middle_list.h"

int len(string str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

bool is_even(int num)
{
    if (num % 2 == 0)
        return true;
    return false;
}
