 #include "str_easy.h"

 string itc_even_place(string str){
    int a = itc_len(str);
    string str1 = "";
    if (a <= 1){
        return "-1";
    }
    for (int i = 1; i < a; i=i+2){
        str1 = str1 + str[i];
    }
    return str1;
  }

 string itc_reverse_str(string str){
    int a = itc_len(str);
    string str1 = "";
    for (int i = a - 1; i >= 0; i--){
        str1 = str1 + str[i];
    }
    return str1;
 }

 string itc_slice_str(string str, int start, int end){
    char a = str[start];
    char b = str[end];
    int i = itc_len(str);
    string str1 = "";
    if (start >= i ){
        return str;
    }
    else if (end > i-1){
        for (int c = start; c <= i; c++){
            str1 = str1 + str[c];
        }
    }
    else {
        for (int d = start; d <= end; d++){
            str1 = str1 + str[d];
        }
    }
    return str1;
 }

 double itc_percent_lower_uppercase(string str){
    char a = str[0];
    int i = 0;
    double pr = 0;
    double st = 0;
    while (a != '\0'){
        a = str[i];
        if (a >= 'A' && a <= 'Z'){
            st++;
        }
        if (a >= 'a' && a <= 'z'){
            pr++;
        }
        i++;
    }
    return (pr / st) * 100;
 }

 bool itc_equal_reverse(string str){
    string str2 = itc_reverse_str(str);
    if (str2 == str)
        return 1;
    return 0;
 }
