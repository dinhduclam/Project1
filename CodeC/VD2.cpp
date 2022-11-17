//Liet ke cac to hop chap k cua n ki tu dau tien
#include <stdio.h>

int n, k, count = 0;
bool used[123];
int a[123];

void show() {
    for (int i = 1; i <= k; i++)
        printf("%c", a[i]);
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
            back(pos + 1);
            used[i] = false;
        }
}

int main() {
    scanf("%d %d", &n, &k);
    backtrack(1);
    printf("Co %d to hop", count);
}
