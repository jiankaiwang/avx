#include <immintrin.h>

namespace std {

void Simple_Add(double res[], double *a, double *b) {
  __m256d _a = _mm256_loadu_pd(a);
  __m256d _b = _mm256_loadu_pd(b);
  __m256d _res = _mm256_add_pd(_a, _b);

  _mm256_storeu_pd(res, _res);
}

}