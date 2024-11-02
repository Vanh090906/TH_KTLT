#include <stdio.h>
#include <stdlib.h>
#define endl printf("\n")
typedef struct
{
    int num;
    int den;
} fraction;
int gcd(int a, int b)
{
    a=abs(a); b=abs(b);
    if(a==0 || b==0) return a+b;
    while(a!=b)
        if(a<b) b-=a;
        else a-=b;
    return a;
}
int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}
void Shorten(fraction* a)
{
    int GCD=gcd(a->den, a->num);
    a->den/=GCD;
    a->num/=GCD;
}
fraction sum(fraction a, fraction b)
{
    int LCM_den=lcm(a.den,b.den);
    fraction res;
    res.num=a.num*LCM_den/a.den + b.num*LCM_den/b.den;
    res.den=LCM_den;
    Shorten(&res);
    return res;
}
fraction ded(fraction a, fraction b)
{
    int LCM_den=lcm(a.den,b.den);
    fraction res;
    res.num=a.num*LCM_den/a.den-b.num*LCM_den/b.den;
    res.den=LCM_den;
    Shorten(&res);
    return res;
}
fraction mul(fraction a, fraction b)
{
    fraction res={a.num*b.num,a.den*b.den};
    Shorten(&res);
    return res;
}
fraction Div(fraction a, fraction b)
{
    int tmp=b.num; b.num=b.den; b.den=tmp;
    return mul(a,b);
}
void Print(fraction a)
{
    if(a.num%a.den==0) printf("%d",a.num/a.den);
    else printf("%d/%d",a.num,a.den);
    return;
}
int main()
{
    fraction a,b;
    scanf("%d%d%d%d",&a.num,&a.den,&b.num,&b.den);
    fraction Tong=sum(a,b),Hieu=ded(a,b),Tich=mul(a,b),Thuong=Div(a,b);
    Print(Tong);
    endl;
    Print(Hieu);
    endl;
    Print(Tich);
    endl;
    Print(Thuong);
}