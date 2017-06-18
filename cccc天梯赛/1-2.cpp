#include <stdio.h>  
int main() {  
    int n;  
    char ch;  
    scanf("%d %c", &n, &ch);  
    int m = 1;  
    while((m + 3) * (m + 3) / 2 - 1 <= n)        //计算沙漏第一行字符的个数   
        m += 2;  
    for(int i = m; i > 0; i -= 2) {              //先打印倒三角   
        for(int j = 0; j < (m - i) / 2; ++j) //打印空格   
            printf(" ");      
        for(int j = 0; j < i; ++j)               //打印字符   
            printf("%c", ch);  
//      for(int j = 0; j < (m -i) / 2; ++j)      //题目默认字符后面的空格不用打印，注释掉   
//          printf(" ");  
        printf("\n");  
    }  
    for(int i = 3; i <= m; i += 2) {         //类似的打印下面的正三角，除去重叠的顶点   
        for(int j = 0; j < (m - i) / 2; ++j)  
            printf(" ");  
        for(int j = 0; j < i; ++j)  
            printf("%c", ch);  
//      for(int j = 0; j < (m -i) / 2; ++j)  
//          printf(" ");  
        printf("\n");  
    }  
    printf("%d", n - (m + 1) * (m + 1) / 2 + 1);//计算并打印剩余字符的个数   
      
    return 0;  
}  
