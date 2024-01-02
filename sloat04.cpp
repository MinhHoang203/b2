#include <stdio.h>

float trung_binh_cong(int *a, int n) {
  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum / n;
}

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int n = sizeof(a) / sizeof(a[0]);

  float trung_binh = trung_binh_cong(a, n);

  printf("trung binh cong cac gia tri trong mang la: %.2f\n", trung_binh);

  return 0;
}
