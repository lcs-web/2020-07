给定一个字符串，编写一个函数判定其是否为某个回文串的排列之一。

回文串是指正反两个方向都一样的单词或短语。排列是指字母的重新排列。

回文串不一定是字典当中的单词。
思路：构成回文的字符串，相同字符的个数中，最多有一个是奇数。超过一个，则不是回文串

#define MaxSize 256

bool canPermutePalindrome(char* s){
    if(strlen(s) <= 0)
    {
        return false;
    }

    int ans[MaxSize] = {0};

    for(int i =0; i < strlen(s); i++)
    {
        ans[s[i]]++; //统计各个字符出现的次数
    }

    int cnt = 0;
    for(int i= 0; i < MaxSize; i++)
    {
        if(ans[i] % 2 == 0)
        {
            continue;//如果数组元素为偶数，执行下一次循环
        }
        
        cnt++;//如果数组元素为奇数，记录下奇数元素出现的次数
    }

    return (cnt > 1)? false:true;
}

