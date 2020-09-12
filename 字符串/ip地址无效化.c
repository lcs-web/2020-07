给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。
所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。


char * defangIPaddr(char * address){
    int i=0;
    int k=0;  
    char* res=(char*)malloc((strlen(address)+7)*sizeof(char));
    while(address[i]!='\0')
    {
        if(address[i]=='.')
        {
            res[i+2*k]='[';
            res[i+2*k+1]='.';
            res[i+2*k+2]=']';
            k++;
        }
        else
        {
            res[i+2*k]=address[i];
        }
        i++;
    }
    res[i+6]='\0';
    return res;

}
