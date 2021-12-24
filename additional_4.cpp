#include "middle_list.h"

int max_pos(const vector <int> & lst)
{
    int maxi = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] > 0 && lst[i] > maxi)
            maxi = lst[i];
    }
    return maxi;
}

int min_pos(const vector <int> & lst)
{
    int mini = max_pos(lst);
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] > 0 && lst[i] < mini)
            mini = lst[i];
    }
    return mini;
}

int max_neg(const vector <int> & lst)
{
    int maxi = min_neg(lst);
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] < 0 && lst[i] > maxi)
            maxi = lst[i];
    }
    return maxi;
}

int min_neg(const vector <int> & lst)
{
    int mini = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] < 0 && lst[i] < mini)
            mini = lst[i];
    }
    return mini;
}
