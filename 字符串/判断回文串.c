给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。

bool isPalindrome(char *str)
{
    int i, n;

    if (str == NULL) {
        return 0;
    } else if (strlen(str) == 0) {
        return 1;
    }

    n = strlen(str) - 1;
    for (i = 0; i <= n;) {
        if (!isalnum(str[i])) {
            i++;
            continue;
        }
        if (!isalnum(str[n])) {
            n--;
            continue;
        }
        
        if (tolower(str[i]) != tolower(str[n])) {
            return false;  
        }
        i++;
        n--;
    }

    return true;
}


isalnum：判断字符串是不是字母和数字；
tolower：把字母变成小写的，其他的字符不变；
strlen：统计字符串的长度。
