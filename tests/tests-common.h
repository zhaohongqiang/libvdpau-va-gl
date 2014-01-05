#ifndef VA_GL_TESTS_TESTS_COMMON_H
#define VA_GL_TESTS_TESTS_COMMON_H

#undef NDEBUG
#include <assert.h>
#include <vdpau/vdpau.h>
#include <vdpau/vdpau_x11.h>
#include "api.h"

#define ASSERT_OK(expr) \
    do { \
        VdpStatus status = expr; \
        assert (VDP_STATUS_OK == status); \
    } while (0)

Display    *get_dpy(void);
Window      get_wnd(void);

#endif // VA_GL_TESTS_TESTS_COMMON_H
