#ifndef CONJUGRAD_KERNELS_H
#define CONJUGRAD_KERNELS_H

#include "conjugrad.h"

#define CHECK_ERR(a) if (cudaSuccess != (a)) { printf("CUDA error No. %d in %s at line %d\n", a, __FILE__, __LINE__); exit(EXIT_FAILURE); }

#ifdef __cplusplus
extern "C" {
#endif

void vecnorm_gpu(
	conjugrad_float_t *d_g,
	conjugrad_float_t *d_res,
    unsigned long nvar
);

void vecdot_gpu(
	conjugrad_float_t *d_x,
	conjugrad_float_t *d_y,
	conjugrad_float_t *d_res,
    unsigned long nvar
);

void initialize_s_gpu(
	conjugrad_float_t *d_s,
	conjugrad_float_t *d_g,
    unsigned long nvar
);

void update_s_gpu(
	conjugrad_float_t *d_old_s,
	conjugrad_float_t *d_g,
	conjugrad_float_t beta,
    unsigned long nvar
);

void update_x_gpu(
	conjugrad_float_t *d_x,
	conjugrad_float_t *d_s,
	conjugrad_float_t alpha,
	conjugrad_float_t prevalpha,
    unsigned long nvar
);

#ifdef __cplusplus
}
#endif

#endif
