#ifndef STRINGS_H_INCLUDED
#define STRINGS_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

string itc_hello_str(string name);
long long itc_len(string str);
void itc_print_copy_str(string str, int number);
void itc_first_end_three(string str);
string itc_even_place(string str);
int itc_count_char_in_str(char ch, string str);
double itc_percent_lower_uppercase(string str);
string itc_reverse_str(string str);
string itc_slice_str(string str, int start, int endd);
bool itc_equal_reverse(string str);
string itc_cmp_str(string str1, string str2, int num);

#endif // STRINGS_H_INCLUDED
