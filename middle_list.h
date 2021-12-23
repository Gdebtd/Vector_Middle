#ifndef MIDDLE_LIST_H
#define MIDDLE_LIST_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int len(string str);

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

#endif
