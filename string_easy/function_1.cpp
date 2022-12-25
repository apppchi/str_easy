#include "strings.h"

string itc_hello_str(string name){
    return "Hello, " + name;
}

long long itc_len(string str){
    char c = str[0];
    int i = 0;
    while (c != '\0'){
        c = str[i];
        i++;
    }
    i--;
    return i;
}

void itc_print_copy_str(string str, int number){
    for (int i = 1; i <= number; i++){
        cout << str << endl;
    }
}

void itc_first_end_three(string str){
    int a = itc_len(str);
    if (a > 5){
        for (int i = 0; i <=2; i++){
            cout << str[i];
        }
        for (int b = a; b >= a-3; b--){
            cout << str[b];
        }
    }
    else if (a <= 5){
        for (int d = 0; d <=2; d++){
            cout << str[0];
        }
    }
}

int itc_count_char_in_str(char ch, string str){
    char c = str[0];
    int i = 0;
    int kol = 0;
    while (c != '\0'){
        c = str[i];
        if(ch == c){
            kol++;
        }
        i++;
    }
    return kol;
}
