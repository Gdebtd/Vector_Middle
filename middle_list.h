#ifndef MIDDLE_LIST_H
#define MIDDLE_LIST_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// additional
int len(string str);
bool is_even(int num);

int cnt_even(const vector <int> & lst);
int cnt_odd(const vector <int> & lst);
int max_even(const vector <int> & lst);
int min_even(const vector <int> & lst);
int max_odd(const vector <int> & lst);
int min_odd(const vector <int> & lst);

int cnt_pos(const vector <int> & lst);
int cnt_neg(const vector <int> & lst);
int cnt_zero(const vector <int> & lst);
int sum_pos(const vector <int> & lst);
int sum_neg(const vector <int> & lst);
int max_pos(const vector <int> & lst);
int min_pos(const vector <int> & lst);
int max_neg(const vector <int> & lst);
int min_neg(const vector <int> & lst);

// main functions
vector <char> itc_strlist(string str);
string itc_join(vector <char> lst, string sep);
string itc_rmstrspc(string str);
string itc_rmstrchar(string str, string _less);
long itc_sumlst(const vector <int> & lst);
long itc_sum_even_lst(const vector <int> & lst);
long itc_sum_even_part_lst(const vector <int> & lst);
long itc_sum_odd_part_lst(const vector <int> & lst);
void itc_odd_even_separator_lst(const vector <int> & lst, vector <int> & lst1, vector <int> & lst2);
void itc_pos_neg_separator_lst(const vector <int> & lst, vector <int> & lst1, vector <int> & lst2, vector <int> & lst3);

void itc_odd_even_analysis_lst(const vector <int> & lst);
void itc_pos_neg_analysis_lst(const vector <int> & lst);

#endif
