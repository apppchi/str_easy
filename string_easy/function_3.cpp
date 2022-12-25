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
    if (i == len1)
        return str;
    for (k = 0; k < len2 && k + i < len1; k++){
        str = str + str2[k];
    }
    if (i + k < len1){
        for (p = i + 1; i < len1; p++){
                str = str + str[p];
        }
    }
    return str;
}

