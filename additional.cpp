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

int cnt_even(const vector <int> & lst)
{
    int cnt = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (is_even(lst[i]))
            cnt++;
    }
    return cnt;
}

int cnt_odd(const vector <int> & lst)
{
    int cnt = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (!is_even(lst[i]))
            cnt++;
    }
    return cnt;
}
