// printf関数、scanf関数を使うために必要
#include <stdio.h>

int main() {
    int target;
    int i;
    float tmp;
    float result;
    int count;

    // 初期化
    tmp = 1;
    result = 0.0;

    // 標準入力からxを受け取る
    scanf("%d", &target);
    
    // count回繰り返す
    count = 10;
    for (i=0; i<10; i++) {
	    // tmpをどんどんtargetで割っていく。
	    // 初期値1のため、1/target,1/(target)^2,,,と変化していく
	    tmp /= target;

	    // それぞれのtmpの和を求める。
	    result += tmp;
    }
    
    printf("%f\n", result);

    // main関数の正常終了
    return 0;
}
