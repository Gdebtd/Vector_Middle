#include "middle_list.h"

int max_even(const vector <int> & lst)
{
    int maxi = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] > maxi && is_even(lst[i]))
            maxi = lst[i];
    }
    return maxi;
}

int min_even(const vector <int> & lst)
{
    int mini = max_even(lst);
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] < mini && is_even(lst[i]))
            mini = lst[i];
    }
    return mini;
}

int max_odd(const vector <int> & lst)
{
    int maxi = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] > maxi && !is_even(lst[i]))
            maxi = lst[i];
    }
    return maxi;
}

int min_odd(const vector <int> & lst)
{
    int mini = max_odd(lst);
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] < mini && !is_even(lst[i]))
            mini = lst[i];
    }
    return mini;
}
