// printf関数を使うために必要
#include <stdio.h>
// sin関数を使うために必要
#include <math.h>

// int型を返すmain関数の始まり
int main() {
    // 変数の宣言
    int x, y, z;
    
    // 初期化配列として長さ 0,0 の2次元配列を与える
    // 足りない要素は 0 で補完されるので、結局、全体が 0 で初期化される
    int a[30][30] = {{},{}};

    // ラベルの表示
    printf("y = 20*sin(x/5)+15\n");
    // aの配列、右方向（->）へのループ
    for (x = 0; x < 30; x++) {
        // 番人（データ最終行）の指定
        y = 20 * sin(x/5.0) + 15;

        // 一番上から下方向に番人までの要素を 1 でフィル
        for (z = 0; z <= y; z++) {

            // 30行以降は操作しない
            if (z >= 30) {
                break;
            }

            // フィルの実行
            a[x][z] = 1;
        }
    }

    // データの表示
    // 30行目から上方向のデータを逆順で表示する
    for (y = 29; y >= 0; y--) {
        // ラベルの表示
        printf("y=%02d: ", y);

        // aの配列、右方向（->）へのループ
        for (x = 0; x < 30; x++) {
            // データの表示
            printf("%d", a[x][y]);
        }

        // 行の末尾に改行を出力する
        printf("\n");
    }
    return 0;
}
