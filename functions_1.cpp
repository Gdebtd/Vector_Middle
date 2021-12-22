#include "middle_list.h"

vector <char> itc_strlist(string str)
{
    int _size = len(str);
    vector <char> res(_size);
    for (int i = 0; i < _size; i++)
        res[i] = str[i];
    return res;
}

string itc_join(vector <char> lst, string sep)
{
    string res = "";
    int _size = lst.size();
    for (int i = 0; i < _size - 1; i++)
    {
        res += lst[i];
        res += sep;
    }
    res += lst[_size - 1];
    return res;
}

string itc_rmstrspc(string str)
{
    string res = "";
    for (int i = 0; i < len(str); i++)
    {
        if (str[i] != ' ')
            res += str[i];
    }
    return res;
}

string itc_rmstrchar(string str, string _less)
{
    string res = "";
    string _a = "";
    int j = 0;
    for (int i = 0; i < len(str); i++)
    {
        if (j < len(_less) && str[i] == _less[j])
        {
            j++;
            _a += str[i];
        }
        else
        {
            if (j == len(_less))
                _a = "";
            res += str[i];
            j = 0;
            res += _a;
            _a = "";
        }
    }
    return res;
}

long itc_sumlst(const vector <int> & lst)
{
    long sum = 0;
    for (int i = 0; i < (int)lst.size(); i++)
        sum += lst[i];
    return sum;
}
