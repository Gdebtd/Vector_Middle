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

#endif
