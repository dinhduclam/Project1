#include <stdio.h>

int gcd(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main(){
	int a, b;
	printf("Nhap 2 so nguyen a va b\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
    scanf("%d", &b);
	printf("Uoc chung lon nhat cua 2 so a va b la %d", gcd(a, b));
}
