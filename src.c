// #include <stdio.h>

// int main() {
//   int arr[] = {1, 2, 3, 4, 5};
//   int x = 2;
//   int y = 2;
//   int z = ~x;
//   arr[0] = x;
//   if(x == y) {
//     printf("%d%d%d%d%d%d%d%d%d\n", x, y, x, y, x, y, x, y, x);
//     return x + y + z;
//   } else {
//     z = x == y ? x : y;
//     return x / y;
//   }
// }

// #include <stdlib.h>

// int main() {
//   bool x = true;
//   bool y = false;
//   int xi = 1;
//   int yi = 2;
//   void *xp = 0;
//   void *yp = 0;
//   bool z = x <= y;
//   bool zi = xi <= yi;
//   bool zp = xp <= yp;
//   return z ? x : y;
// }

// int main() {
//   int x = 1;
//   int y = 2;
//   if (x == y) {
//      return x;
//    } else {
//      return y;
//    }
// }

int main() {
  int x = 1;
  int y = 1;
  return x << y;
}

// int main() {
//   int *x = malloc(sizeof(int));
//   *x = 3;
//   return *x;
// }

// int func(int x) {
//   return x + 666;
// }