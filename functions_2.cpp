#include "middle_list.h"

long itc_sum_even_lst(const vector <int> & lst)
{
    long sum = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (i % 2 == 1)
            sum += lst[i];
    }
    return sum;
}

long itc_sum_even_part_lst(const vector <int> & lst)
{
    long sum = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        if (is_even(lst[i]))
            sum += lst[i];
    }
    return sum;
}

void itc_odd_even_separator_lst(const vector <int> & lst, vector <int> & lst1, vector <int> & lst2)
{
    for (int i = 0; i < lst.size())
    {
        if (is_even(lst[i]))
            lst1.push_back(lst[i]);
        else
            lst2.push_back(lst[i]);
    }
}

void itc_pos_neg_separator_lst(const vector <int> & lst, vector <int> & lst1, vector <int> & lst2, vector <int> & lst3)
{
    for (int i = 0; i < lst.size(); i++)
    {
        if (lst[i] < 0)
            lst1.push_back(lst[i]);
        else
        {
            if (lst[i] == 0)
                lst2.push_back(lst[i]);
            else
                lst3.push_back(lst[i]);
        }
    }
}
