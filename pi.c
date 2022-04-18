#include "pico/stdlib.h"
#include <stdio.h>

int main() {
  stdio_init_all();

  for (;;) {
    absolute_time_t t0 = get_absolute_time();
    int a[52514], b = 0, c = 52514, d = 0, e = 0, f = 1e4, g = 0, h = 0;

    for (; (b = c -= 14); (h = printf("%04d", e + d / f)))
      for ((e = d %= f); (g = --b * 2); (d /= g))
        d = d * b + f * (h ? a[b] : f / 5), a[b] = d % --g;

    absolute_time_t t1 = get_absolute_time();
    printf("\n%ld microseconds\n", absolute_time_diff_us(t0, t1));
  }

  return 0;
}
