#include <stdio.h>  
int main() {  
    int n;  
    char ch;  
    scanf("%d %c", &n, &ch);  
    int m = 1;  
    while((m + 3) * (m + 3) / 2 - 1 <= n)        //����ɳ©��һ���ַ��ĸ���   
        m += 2;  
    for(int i = m; i > 0; i -= 2) {              //�ȴ�ӡ������   
        for(int j = 0; j < (m - i) / 2; ++j) //��ӡ�ո�   
            printf(" ");      
        for(int j = 0; j < i; ++j)               //��ӡ�ַ�   
            printf("%c", ch);  
//      for(int j = 0; j < (m -i) / 2; ++j)      //��ĿĬ���ַ�����Ŀո��ô�ӡ��ע�͵�   
//          printf(" ");  
        printf("\n");  
    }  
    for(int i = 3; i <= m; i += 2) {         //���ƵĴ�ӡ����������ǣ���ȥ�ص��Ķ���   
        for(int j = 0; j < (m - i) / 2; ++j)  
            printf(" ");  
        for(int j = 0; j < i; ++j)  
            printf("%c", ch);  
//      for(int j = 0; j < (m -i) / 2; ++j)  
//          printf(" ");  
        printf("\n");  
    }  
    printf("%d", n - (m + 1) * (m + 1) / 2 + 1);//���㲢��ӡʣ���ַ��ĸ���   
      
    return 0;  
}  
