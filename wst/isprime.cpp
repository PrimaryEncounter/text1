#include<stdio.h>
int a[105]/*�׳˺�*/,k[105]/*�׳�*/,kk=100/*k��ǰλ��*/,aa=100/*a��ǰλ��*/;
void wzk()//����kλ��
{
    int i=1;
    while(!k[i]) i++;
    kk=i;
}
void wza()//����aλ��
{
    int i=1;
    while(!a[i]) i++;
    aa=i;
}
void cc()//�ѽ׳��ۼ�
{
    for(int i=100;i>=kk;i--)//�ӷ����ü����ٽ�λ
    {
        a[i]+=k[i];
        a[i-1]+=a[i]/10;
        a[i]%=10;
    }
    wza();
}
int main()
{
    int n;
    scanf("%d",&n);
    a[100]=1;//��100��ʼ�棬ps:50�Ľ׳�ֻ��65λ
    k[100]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=100;j>=aa;j--)
            k[j]*=i;
        for(int j=100;j>=aa;j--)//�ӣ�һ��Ҫ�ȳ����ٽ�λ������
        {
            k[j-1]+=k[j]/10;
            k[j]%=10;
        }
        wzk();
        cc();
    }
    for(int i=aa;i<=100;i++)
        printf("%d",a[i]);
    return 0;
}

