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
