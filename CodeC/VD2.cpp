//Liet ke cac chinh hop chap k cua n ki tu dau tien trong bang chu cai
#include <stdio.h>

int n, k, count = 0;
bool used[123];
int a[123];

void show() {
    for (int i = 1; i <= k; i++)
        printf("%c ", a[i]);
    printf("\n");
    count++;
}

void backtrack(int pos) {
    if (pos == k + 1) {
        show();
        return;
    }
    for (int i = 'a'; i < 'a' + n; i++)
        if (!used[i]) {
            a[pos] = i;
            used[i] = true;
            backtrack(pos + 1);
            used[i] = false;
        }
}

int main() {
	printf("n = ");
	scanf("%d", &n);
	printf("k = ");
    scanf("%d", &k);
    backtrack(1);
    printf("Co %d to hop", count);
}
