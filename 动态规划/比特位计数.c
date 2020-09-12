给定一个非负整数 num。对于 0 ≤ i ≤ num 范围中的每个数字 i ，
计算其二进制数中的 1 的数目并将它们作为数组返回。



int *countBits(int num, int *returnSize) {
    int i = 0;
    int *array = NULL;

    if (num <= 0) {
        *returnSize = 1;
    } else {
        *returnSize = num + 1;
    }

    array = malloc(sizeof(int) * (*returnSize));

    array[0] = 0;
    for (i = 1; i <= num; i++) {
        array[i] = array[i & (i - 1)] + 1;
    }

    return array;
}
