// printf関数を使用するために必要
#include <stdio.h>

// int型を返すmain関数の宣言
int main() {

    // printf関数. ""で囲まれた文字列を端末に出力する.
    // \nは改行コードを意味する.
    // %dはカンマの後ろで指定された整数で順番に置換される.
    // %dは整数型の指定であり、%fで浮動小数点型を指定する.
    // %<a>dと指定することで、a桁で置換される.
    // %0<a>dと指定することで、必要以上の桁は0で埋められる.
    printf("%07d\n", 1024);

    // main関数の正常終了
    return 0;
}
