#include "middle_list.h"

int cnt_pos(const vector <int> & lst)
{
    int cnt = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] > 0)
            cnt++;
    }
    return cnt;
}

int cnt_neg(const vector <int> & lst)
{
    int cnt = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] < 0)
            cnt++;
    }
    return cnt;
}

int cnt_zero(const vector <int> & lst)
{
    int cnt = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] == 0)
            cnt++;
    }
    return cnt;
}

int sum_pos(const vector <int> & lst)
{
    int sum = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] > 0)
            sum += lst[i];
    }
    return sum;
}

int sum_neg(const vector <int> & lst)
{
    int sum = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] < 0)
            sum += lst[i];
    }
    return sum;
}
