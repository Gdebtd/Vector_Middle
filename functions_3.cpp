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
    cout << "Анализ списка:\n";
    cout << "Количество четных чисел: " << even_cnt << "        Количество нечетных чисел: " << odd_cnt << "\n";
    cout << "Максимальная четная цифра: " << even_max << "        Максимальная нечетная цифра: " << odd_max << "\n";
    cout << "Минимальная четная цифра: " << even_min << "        Минимальная нечетная цифра: " << odd_min << "\n";
    cout << "сумма четных чисел: " << even_sum << "        Сумма нечетных чисел: " << odd_sum << "\n";
}

void itc_pos_neg_analysis_lst(const vector <int> & lst)
{
    setlocale(LC_ALL, "Russian");
    int zero_cnt = cnt_zero(lst);
    int pos_cnt = cnt_pos(lst);
    int neg_cnt = cnt_neg(lst);
    int pos_max = max_pos(lst);
    int pos_min = min_pos(lst);
    int neg_max = max_neg(lst);
    int neg_min = min_neg(lst);
    int pos_sum = sum_pos(lst);
    int neg_sum = sum_neg(lst);
    int pos_average;
    int neg_average;
    // average
    if (pos_cnt == 0)
        pos_average = 0;
    else
        pos_average = pos_sum / pos_cnt;
    if (neg_cnt == 0)
        neg_average = 0;
    else
        neg_average = neg_sum / neg_cnt;
    cout << "Положительные:            Отрицательные:\n";
    cout << "Количество чисел: " << pos_cnt << "            Количество чисел: " << neg_cnt << "\n";
    cout << "Максимальная цифра: " << pos_max << "            Максимальная цифра: " << neg_max << "\n";
    cout << "Минимальная цифра: " << pos_min << "            Минимальная цифра: " << neg_min << "\n";
    cout << "Сумма цисел: " << pos_sum << "            Сумма чисел: " << neg_sum << "\n";
    cout << "Среднее значение: " << pos_average << "            Среднее значение: " << neg_average << "\n\n";
    cout << "Количество нулей: " << zero_cnt << "\n";
}
