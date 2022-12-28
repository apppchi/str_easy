#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string str = "";
    int i = 0;
    int k = 0;
    int p = 0;
    long long len1 = itc_len(str1);
    long long len2 = itc_len(str2);
    for (i = 0; i < num; i++){
        str = str + str1[i];
    }
    if (i >= len1){
        return str1;
    }
    for (k = 0; k < len2 && k + i < len1; k++){
        str = str + str2[k];
    }
    if (i + k < len1){
        for (p = i; p < len2 + 1; p++){
            str = str + str1[p];
        }
    }
    return str;
}

int itc_find_str(string str1, string str2){
    long long i = 0;
    long long p = 0;
    long long kol = 0;
    long long len1 = itc_len(str1);
    long long len2 = itc_len(str2);
    for (i = 0; i < len1; i++){
        if (str1[i] == str2[0]){
            kol = 0;
            for (p = 0; p < len2; p++){
                if (str1[i+p] == str2[p]){
                    kol++;
                }
            }
        }
        if (kol == len2){
            return i;
        }
    }
    return -1;
}
string itc_three_str(string str1, string str2, string str3){
    int i = itc_find_str(str1, str2);
    long long len1 = itc_len(str1);
    long long len2 = itc_len(str2);
    long long len3 = itc_len(str3);
    while (i != -1){
        string str = itc_slice_str(str1, 0, i - 1);
        string str_1 = itc_slice_str(str1, i + len2, len1);
        str1 = str + str3 + str_1;
        i = itc_find_str(str1, str2);
    }
    return str1;
}
