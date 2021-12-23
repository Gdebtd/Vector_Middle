#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int> & lst)
{
    setlocale(LC_ALL, "Russian");
    int even_cnt = cnt_even(lst);
    int odd_cnt = cnt_odd(lst);
    int even_max = max_even(lst);
    int even_min = min_even(lst);
    int odd_max = max_odd(lst);
    int odd_min = min_odd(lst);
    int even_sum = itc_sum_even_part_lst(lst);
    int odd_sum = itc_sum_odd_part_lst(lst);
    cout << "������ ������:\n";
    cout << "���������� ������ �����: " << even_cnt << "        ���������� �������� �����: " << odd_cnt << "\n";
    cout << "������������ ������ �����: " << even_max << "        ������������ �������� �����: " << odd_max << "\n";
    cout << "����������� ������ �����: " << even_min << "        ����������� �������� �����: " << odd_min << "\n";
    cout << "����� ������ �����: " << even_sum << "        ����� �������� �����: " << odd_sum << "\n";
}
