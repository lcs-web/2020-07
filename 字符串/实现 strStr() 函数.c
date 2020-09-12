给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。
如果不存在，则返回  -1。

int strStr(char *haystack, char *needle)
{
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    if (len2 < 1) {
        return 0;
    }
    int i = 0;
    int temp1, temp2;
    for (i = 0; i < len1; i++) {
        if (len1 - i < len2) {
            return -1;
        }
        temp1 = i;
        temp2 = 0;
        while (haystack[temp1++] == needle[temp2++]) {
            if (temp2 == len2) {
                return i;
            }
        }
    }
    return -1;
}
