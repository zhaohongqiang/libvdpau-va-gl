#ifndef __VDPAU_LOCKING_H
#define __VDPAU_LOCKING_H

#include <vdpau/vdpau.h>
#include <vdpau/vdpau_x11.h>
#include <GL/gl.h>
#include <GL/glx.h>
#include "globals.h"

extern struct global_data global;

VdpStatus
lockedVdpDeviceCreateX11(Display *display, int screen, VdpDevice *device,
                         VdpGetProcAddress **get_proc_address);

VdpGetApiVersion lockedVdpGetApiVersion;
VdpDecoderQueryCapabilities lockedVdpDecoderQueryCapabilities;
VdpDecoderCreate lockedVdpDecoderCreate;
VdpDecoderDestroy lockedVdpDecoderDestroy;
VdpDecoderGetParameters lockedVdpDecoderGetParameters;
VdpDecoderRender lockedVdpDecoderRender;
VdpOutputSurfaceQueryCapabilities lockedVdpOutputSurfaceQueryCapabilities;
VdpOutputSurfaceQueryGetPutBitsNativeCapabilities lockedVdpOutputSurfaceQueryGetPutBitsNativeCapabilities;
VdpOutputSurfaceQueryPutBitsIndexedCapabilities lockedVdpOutputSurfaceQueryPutBitsIndexedCapabilities;
VdpOutputSurfaceQueryPutBitsYCbCrCapabilities lockedVdpOutputSurfaceQueryPutBitsYCbCrCapabilities;
VdpOutputSurfaceCreate lockedVdpOutputSurfaceCreate;
VdpOutputSurfaceDestroy lockedVdpOutputSurfaceDestroy;
VdpOutputSurfaceGetParameters lockedVdpOutputSurfaceGetParameters;
VdpOutputSurfaceGetBitsNative lockedVdpOutputSurfaceGetBitsNative;
VdpOutputSurfacePutBitsNative lockedVdpOutputSurfacePutBitsNative;
VdpOutputSurfacePutBitsIndexed lockedVdpOutputSurfacePutBitsIndexed;
VdpOutputSurfacePutBitsYCbCr lockedVdpOutputSurfacePutBitsYCbCr;
VdpVideoMixerQueryFeatureSupport lockedVdpVideoMixerQueryFeatureSupport;
VdpVideoMixerQueryParameterSupport lockedVdpVideoMixerQueryParameterSupport;
VdpVideoMixerQueryAttributeSupport lockedVdpVideoMixerQueryAttributeSupport;
VdpVideoMixerQueryParameterValueRange lockedVdpVideoMixerQueryParameterValueRange;
VdpVideoMixerQueryAttributeValueRange lockedVdpVideoMixerQueryAttributeValueRange;
VdpVideoMixerCreate lockedVdpVideoMixerCreate;
VdpVideoMixerSetFeatureEnables lockedVdpVideoMixerSetFeatureEnables;
VdpVideoMixerSetAttributeValues lockedVdpVideoMixerSetAttributeValues;
VdpVideoMixerGetFeatureSupport lockedVdpVideoMixerGetFeatureSupport;
VdpVideoMixerGetFeatureEnables lockedVdpVideoMixerGetFeatureEnables;
VdpVideoMixerGetParameterValues lockedVdpVideoMixerGetParameterValues;
VdpVideoMixerGetAttributeValues lockedVdpVideoMixerGetAttributeValues;
VdpVideoMixerDestroy lockedVdpVideoMixerDestroy;
VdpVideoMixerRender lockedVdpVideoMixerRender;
VdpPresentationQueueTargetDestroy lockedVdpPresentationQueueTargetDestroy;
VdpPresentationQueueCreate lockedVdpPresentationQueueCreate;
VdpPresentationQueueDestroy lockedVdpPresentationQueueDestroy;
VdpPresentationQueueSetBackgroundColor lockedVdpPresentationQueueSetBackgroundColor;
VdpPresentationQueueGetBackgroundColor lockedVdpPresentationQueueGetBackgroundColor;
VdpPresentationQueueGetTime lockedVdpPresentationQueueGetTime;
VdpPresentationQueueDisplay lockedVdpPresentationQueueDisplay;
VdpPresentationQueueBlockUntilSurfaceIdle lockedVdpPresentationQueueBlockUntilSurfaceIdle;
VdpPresentationQueueQuerySurfaceStatus lockedVdpPresentationQueueQuerySurfaceStatus;
VdpVideoSurfaceQueryCapabilities lockedVdpVideoSurfaceQueryCapabilities;
VdpVideoSurfaceQueryGetPutBitsYCbCrCapabilities lockedVdpVideoSurfaceQueryGetPutBitsYCbCrCapabilities;
VdpVideoSurfaceCreate lockedVdpVideoSurfaceCreate;
VdpVideoSurfaceDestroy lockedVdpVideoSurfaceDestroy;
VdpVideoSurfaceGetParameters lockedVdpVideoSurfaceGetParameters;
VdpVideoSurfaceGetBitsYCbCr lockedVdpVideoSurfaceGetBitsYCbCr;
VdpVideoSurfacePutBitsYCbCr lockedVdpVideoSurfacePutBitsYCbCr;
VdpBitmapSurfaceQueryCapabilities lockedVdpBitmapSurfaceQueryCapabilities;
VdpBitmapSurfaceCreate lockedVdpBitmapSurfaceCreate;
VdpBitmapSurfaceDestroy lockedVdpBitmapSurfaceDestroy;
VdpBitmapSurfaceGetParameters lockedVdpBitmapSurfaceGetParameters;
VdpBitmapSurfacePutBitsNative lockedVdpBitmapSurfacePutBitsNative;
VdpDeviceDestroy lockedVdpDeviceDestroy;
VdpGetInformationString lockedVdpGetInformationString;
VdpGenerateCSCMatrix lockedVdpGenerateCSCMatrix;
VdpOutputSurfaceRenderOutputSurface lockedVdpOutputSurfaceRenderOutputSurface;
VdpOutputSurfaceRenderBitmapSurface lockedVdpOutputSurfaceRenderBitmapSurface;
VdpPreemptionCallbackRegister lockedVdpPreemptionCallbackRegister;
VdpPresentationQueueTargetCreateX11 lockedVdpPresentationQueueTargetCreateX11;
VdpGetProcAddress lockedVdpGetProcAddress;

Bool locked_glXMakeCurrent(Display *dpy, GLXDrawable drawable, GLXContext ctx);
void locked_glXSwapBuffers(Display *dpy, GLXDrawable drawable);

#endif /* __VDPAU_LOCKING_H */
