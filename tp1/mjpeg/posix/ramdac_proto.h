
/**
 ** MARKER_BEGIN
 ** Auto-generated file, dont modify directly
 ** your changes will be lost !
 **
 ** Generated by DSX on 2015-12-01 17:14:28.974788
 ** by bitam@mahler
 ** MARKER_END
 **/
#ifndef _RAMDAC_PROTO_H
#define _RAMDAC_PROTO_H

#include <srl.h>

struct _ramdac_args_t {
	const srl_mwmr_t input;
};

#define ramdac_FUNC_NAME(sym) ramdac_func_ ## sym

#define FUNC(x) void ramdac_FUNC_NAME(x) (struct _ramdac_args_t *_func_args)

FUNC(ramdac);
FUNC(bootstrap);

#ifdef SRL_INMAIN
# undef FUNC
#else
# define GET_ARG(port) ({ \
srl_log_printf( DEBUG, "%s:%d: arg %s = %p\n", __FILE__, __LINE__, #port, _func_args->port ); \
(_func_args->port); \
})
#endif /* SRL_INMAIN */

#endif /* _RAMDAC_PROTO_H */