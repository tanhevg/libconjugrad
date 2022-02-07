#ifndef CONJUGRAD_ARITHMETIC_H
#define CONJUGRAD_ARITHMETIC_H

#include "conjugrad.h"
#include <stddef.h>


// set all vector elements to 0
void vec0(conjugrad_float_t *dst, size_t n);

// copy src onto dst
void veccpy(conjugrad_float_t *dst, conjugrad_float_t *src, size_t n);

// dst += src
//void veciaddv(conjugrad_float_t *dst, conjugrad_float_t *src, int n);

// dst *= f
void vecimulc(conjugrad_float_t *dst, conjugrad_float_t f, size_t n);

// dst -= f * src
void vecifma(conjugrad_float_t *dst, conjugrad_float_t *src, conjugrad_float_t f, size_t n);

// dst = f * b - a
void vecsfms(conjugrad_float_t *dst, conjugrad_float_t *a, conjugrad_float_t f, conjugrad_float_t *b, size_t n);

// dst = sum_n v[n] * w[n]
conjugrad_float_t vecdot(conjugrad_float_t *v, conjugrad_float_t *w, size_t n);

// dst = sum_n v[n]^2
conjugrad_float_t vecnorm(conjugrad_float_t *v, size_t n);


conjugrad_float_t *vecalloc(size_t n);

#endif
