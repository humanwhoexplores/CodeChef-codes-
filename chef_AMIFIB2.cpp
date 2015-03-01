#include<stdio.h>
#include<algorithm>

int main() {

int num1[1001], num2[1001], sum[1001];
char s1[1001], s2[1001];
int l1, l2;

//printf("Enter Number1:");
scanf("%s", &s1);
//printf("Enter Number2:");
scanf("%s", &s2);

/* convert character to integer*/

for (l1 = 0; s1[l1] != '\0'; l1++)
num1[l1] = s1[l1] - '0';

for (l2 = 0; s2[l2] != '\0'; l2++)
num2[l2] = s2[l2] - '0';

int carry = 0;
int k = 0;
int i = l1 - 1;
int j = l2 - 1;
for (; i >= 0 && j >= 0; i--, j--, k++) {
sum[k] = (num1[i] + num2[j] + carry) % 10;
carry = (num1[i] + num2[j] + carry) / 10;
}
if (l1 > l2) {

while (i >= 0) {
sum[k++] = (num1[i] + carry) % 10;
carry = (num1[i--] + carry) / 10;
}

} else if (l1 < l2) {
while (j >= 0) {
sum[k++] = (num2[j] + carry) % 10;
carry = (num2[j--] + carry) / 10;
}
} else {
if (carry > 0)
sum[k++] = carry;
}

//sort(sum,sum+k);
//printf("Result:");
for (k--; k >= 0; k--)
printf("%d", sum[k]);

return 0;
}
