字符串S和 T 只包含小写字符。在S中，所有字符只会出现一次。
S 已经根据某种规则进行了排序。我们要根据S中的字符顺序对T进行排序。
更具体地说，如果S中x在y之前出现，那么返回的字符串中x也应出现在y之前。
返回任意一种符合条件的字符串T。

char * customSortString(char * S, char * T){
    int j = 0;
    int tmp = 0;
    int k = 0;
    for(int i = 0; i < strlen(S); i++) {
        while(T[j] == S[i] && j < strlen(T)) {
            j++;
        } 
        k = j;
        while(k < strlen(T) && j < strlen(T)) {
            if (T[k] == S[i]) {
                tmp = T[k];
                T[k] = T[j];
                T[j] = tmp;
                j++;
            } 
            k++;
        }
    }
    return T;
}
