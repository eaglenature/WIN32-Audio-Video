/*
------------------------------------------------------------------------------
    win32_wasapi - v0.01 - public domain WASAPI audio C/C++ layer

    DO THIS:
        #include <mmdeviceapi.h>
        #include <audioclient.h>
        #include "win32_wasapi.h"

    LICENSE:
        See end of file for license information

------------------------------------------------------------------------------
*/
#ifndef WIN32_WASAPI_H
#define WIN32_WASAPI_H

#if !defined(__mmdeviceapi_h__) && !defined(__audioclient_h__)
    #error Include mmdeviceapi.h and audioclient.h before this file
#endif

#if defined(__cplusplus)
    #define WASAPI_IID(x) (__uuidof(x))
    #define WASAPI_CLSID(x) (__uuidof(x))
#else
    #define WASAPI_IID(x) (&IID_##x)
    #define WASAPI_CLSID(x) (&CLSID_##x)
#endif

#if defined(__cplusplus)
    #define WASAPI_IsEqualGUID(a,b) (IsEqualGUID((a), (b)))
#else
    #define WASAPI_IsEqualGUID(a,b) (IsEqualGUID(&(a), &(b)))
#endif


/* IMMNotificationClient */

#if defined(__cplusplus)

    #define WASAPI_IMMNotificationClient_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IMMNotificationClient_AddRef(This)  \
        ( (This)->AddRef() )

    #define WASAPI_IMMNotificationClient_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IMMNotificationClient_OnDeviceStateChanged(This,pwstrDeviceId,dwNewState) \
        ( (This)->OnDeviceStateChanged(pwstrDeviceId,dwNewState) )

    #define WASAPI_IMMNotificationClient_OnDeviceAdded(This,pwstrDeviceId) \
        ( (This)->OnDeviceAdded(pwstrDeviceId) )

    #define WASAPI_IMMNotificationClient_OnDeviceRemoved(This,pwstrDeviceId) \
        ( (This)->OnDeviceRemoved(pwstrDeviceId) )

    #define WASAPI_IMMNotificationClient_OnDefaultDeviceChanged(This,flow,role,pwstrDefaultDeviceId) \
        ( (This)->OnDefaultDeviceChanged(flow,role,pwstrDefaultDeviceId) )

    #define WASAPI_IMMNotificationClient_OnPropertyValueChanged(This,pwstrDeviceId,key) \
        ( (This)->OnPropertyValueChanged(pwstrDeviceId,key) )

#else /* C interface */

    /* "7991EEC9-7E89-4D85-8390-6C703CEC60C0" */
    static const IID IID_IMMNotificationClient = { 0x7991EEC9, 0x7E89, 0x4D85, { 0x83, 0x90, 0x6C, 0x70, 0x3C, 0xEC, 0x60, 0xC0 } };

    #define WASAPI_IMMNotificationClient_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IMMNotificationClient_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IMMNotificationClient_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IMMNotificationClient_OnDeviceStateChanged(This,pwstrDeviceId,dwNewState)   \
        ( (This)->lpVtbl->OnDeviceStateChanged(This,pwstrDeviceId,dwNewState) )

    #define WASAPI_IMMNotificationClient_OnDeviceAdded(This,pwstrDeviceId) \
        ( (This)->lpVtbl->OnDeviceAdded(This,pwstrDeviceId) ) 

    #define WASAPI_IMMNotificationClient_OnDeviceRemoved(This,pwstrDeviceId)   \
        ( (This)->lpVtbl->OnDeviceRemoved(This,pwstrDeviceId) )

    #define WASAPI_IMMNotificationClient_OnDefaultDeviceChanged(This,flow,role,pwstrDefaultDeviceId)   \
        ( (This)->lpVtbl->OnDefaultDeviceChanged(This,flow,role,pwstrDefaultDeviceId) )

    #define WASAPI_IMMNotificationClient_OnPropertyValueChanged(This,pwstrDeviceId,key)    \
        ( (This)->lpVtbl->OnPropertyValueChanged(This,pwstrDeviceId,key) )

#endif


/* IMMDevice */

#if defined(__cplusplus)

    #define WASAPI_IMMDevice_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IMMDevice_AddRef(This)  \
        ( (This)->AddRef() )

    #define WASAPI_IMMDevice_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IMMDevice_Activate(This,iid,dwClsCtx,pActivationParams,ppInterface) \
        ( (This)->Activate(iid,dwClsCtx,pActivationParams,ppInterface) )

    #define WASAPI_IMMDevice_OpenPropertyStore(This,stgmAccess,ppProperties) \
        ( (This)->OpenPropertyStore(stgmAccess,ppProperties) )

    #define WASAPI_IMMDevice_GetId(This,ppstrId) \
        ( (This)->GetId(ppstrId) )

    #define WASAPI_IMMDevice_GetState(This,pdwState) \
        ( (This)->GetState(pdwState) )

#else /* C interface */

    /* "D666063F-1587-4E43-81F1-B948E807363F" */
    static const IID IID_IMMDevice = { 0xD666063F, 0x1587, 0x4E43, { 0x81, 0xF1, 0xB9, 0x48, 0xE8, 0x07, 0x36, 0x3F } };

    #define WASAPI_IMMDevice_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IMMDevice_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IMMDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IMMDevice_Activate(This,iid,dwClsCtx,pActivationParams,ppInterface) \
        ( (This)->lpVtbl->Activate(This,iid,dwClsCtx,pActivationParams,ppInterface) )

    #define WASAPI_IMMDevice_OpenPropertyStore(This,stgmAccess,ppProperties) \
        ( (This)->lpVtbl->OpenPropertyStore(This,stgmAccess,ppProperties) )

    #define WASAPI_IMMDevice_GetId(This,ppstrId) \
        ( (This)->lpVtbl->GetId(This,ppstrId) )

    #define WASAPI_IMMDevice_GetState(This,pdwState) \
        ( (This)->lpVtbl->GetState(This,pdwState) )

#endif


/* IMMDeviceCollection */

#if defined(__cplusplus)

    #define WASAPI_IMMDeviceCollection_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IMMDeviceCollection_AddRef(This) \
        ( (This)->AddRef() )

    #define WASAPI_IMMDeviceCollection_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IMMDeviceCollection_GetCount(This,pcDevices)  \
        ( (This)->GetCount(pcDevices) )

    #define WASAPI_IMMDeviceCollection_Item(This,nDevice,ppDevice) \
        ( (This)->Item(nDevice,ppDevice) )

#else /* C interface */

    /* "0BD7A1BE-7A1A-44DB-8397-CC5392387B5E" */
    static const IID IID_IMMDeviceCollection = { 0x0BD7A1BE, 0x7A1A, 0x44DB, { 0x83, 0x97, 0xCC, 0x53, 0x92, 0x38, 0x7B, 0x5E } };

    #define WASAPI_IMMDeviceCollection_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IMMDeviceCollection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IMMDeviceCollection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IMMDeviceCollection_GetCount(This,pcDevices) \
        ( (This)->lpVtbl->GetCount(This,pcDevices) )

    #define WASAPI_IMMDeviceCollection_Item(This,nDevice,ppDevice) \
        ( (This)->lpVtbl->Item(This,nDevice,ppDevice) )

#endif


/* IMMEndpoint */

#if defined(__cplusplus)

    #define WASAPI_IMMEndpoint_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IMMEndpoint_AddRef(This) \
        ( (This)->AddRef() )

    #define WASAPI_IMMEndpoint_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IMMEndpoint_GetDataFlow(This,pDataFlow) \
        ( (This)->GetDataFlow(pDataFlow) )

#else /* C interface */

    /* "1BE09788-6894-4089-8586-9A2A6C265AC5" */
    static const IID IID_IMMEndpoint = { 0x1BE09788, 0x6894, 0x4089, { 0x85, 0x86, 0x9A, 0x2A, 0x6C, 0x26, 0x5A, 0xC5 } };

    #define WASAPI_IMMEndpoint_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IMMEndpoint_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IMMEndpoint_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IMMEndpoint_GetDataFlow(This,pDataFlow) \
        ( (This)->lpVtbl->GetDataFlow(This,pDataFlow) ) 

#endif


/* IMMDeviceEnumerator */

#if defined(__cplusplus)

    #define WASAPI_IMMDeviceEnumerator_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IMMDeviceEnumerator_AddRef(This) \
        ( (This)->AddRef() )

    #define WASAPI_IMMDeviceEnumerator_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IMMDeviceEnumerator_EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices) \
        ( (This)->EnumAudioEndpoints(dataFlow,dwStateMask,ppDevices) )

    #define WASAPI_IMMDeviceEnumerator_GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint)  \
        ( (This)->GetDefaultAudioEndpoint(dataFlow,role,ppEndpoint) )

    #define WASAPI_IMMDeviceEnumerator_GetDevice(This,pwstrId,ppDevice) \
        ( (This)->GetDevice(pwstrId,ppDevice) )

    #define WASAPI_IMMDeviceEnumerator_RegisterEndpointNotificationCallback(This,pClient)  \
        ( (This)->RegisterEndpointNotificationCallback(pClient) )

    #define WASAPI_IMMDeviceEnumerator_UnregisterEndpointNotificationCallback(This,pClient) \
        ( (This)->UnregisterEndpointNotificationCallback(pClient) )

#else /* C interface */

    /* "A95664D2-9614-4F35-A746-DE8DB63617E6" */
    static const IID IID_IMMDeviceEnumerator = { 0xA95664D2, 0x9614, 0x4F35, { 0xA7, 0x46, 0xDE, 0x8D, 0xB6, 0x36, 0x17, 0xE6 } };

    /* "BCDE0395-E52F-467C-8E3D-C4579291692E" */
    static const CLSID CLSID_MMDeviceEnumerator = { 0xBCDE0395, 0xE52F, 0x467C, { 0x8E, 0x3D, 0xC4, 0x57, 0x92, 0x91, 0x69, 0x2E } };    

    #define WASAPI_IMMDeviceEnumerator_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define WASAPI_IMMDeviceEnumerator_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define WASAPI_IMMDeviceEnumerator_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define WASAPI_IMMDeviceEnumerator_EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices) \
        ( (This)->lpVtbl->EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices) ) 

    #define WASAPI_IMMDeviceEnumerator_GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint)  \
        ( (This)->lpVtbl->GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint) ) 

    #define WASAPI_IMMDeviceEnumerator_GetDevice(This,pwstrId,ppDevice)    \
        ( (This)->lpVtbl->GetDevice(This,pwstrId,ppDevice) ) 

    #define WASAPI_IMMDeviceEnumerator_RegisterEndpointNotificationCallback(This,pClient)  \
        ( (This)->lpVtbl->RegisterEndpointNotificationCallback(This,pClient) ) 

    #define WASAPI_IMMDeviceEnumerator_UnregisterEndpointNotificationCallback(This,pClient)    \
        ( (This)->lpVtbl->UnregisterEndpointNotificationCallback(This,pClient) )

#endif


/* IMMDeviceActivator */

#if defined(__cplusplus)

    #define WASAPI_IMMDeviceActivator_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IMMDeviceActivator_AddRef(This) \
        ( (This)->AddRef() )

    #define WASAPI_IMMDeviceActivator_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IMMDeviceActivator_Activate(This,iid,pDevice,pActivationParams,ppInterface) \
        ( (This)->Activate(iid,pDevice,pActivationParams,ppInterface) )

#else /* C interface */

    /* "3B0D0EA4-D0A9-4B0E-935B-09516746FAC0" */
    static const IID IID_IMMDeviceActivator = { 0x3B0D0EA4, 0xD0A9, 0x4B0E, { 0x93, 0x5B, 0x09, 0x51, 0x67, 0x46, 0xFA, 0xC0 } };

    #define WASAPI_IMMDeviceActivator_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IMMDeviceActivator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IMMDeviceActivator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IMMDeviceActivator_Activate(This,iid,pDevice,pActivationParams,ppInterface) \
        ( (This)->lpVtbl->Activate(This,iid,pDevice,pActivationParams,ppInterface) )

#endif


/* IActivateAudioInterfaceCompletionHandler  */

#if defined(__cplusplus)

    #define WASAPI_IActivateAudioInterfaceCompletionHandler_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IActivateAudioInterfaceCompletionHandler_AddRef(This)   \
        ( (This)->AddRef() )

    #define WASAPI_IActivateAudioInterfaceCompletionHandler_Release(This)  \
        ( (This)->Release() )

    #define WASAPI_IActivateAudioInterfaceCompletionHandler_ActivateCompleted(This,activateOperation)  \
        ( (This)->ActivateCompleted(activateOperation) )

#else /* C interface */

    /* "41D949AB-9862-444A-80F6-C261334DA5EB" */
    static const IID IID_IActivateAudioInterfaceCompletionHandler = { 0x41D949AB, 0x9862, 0x444A, { 0x80, 0xF6, 0xC2, 0x61, 0x33, 0x4D, 0xA5, 0xEB } };

    #define WASAPI_IActivateAudioInterfaceCompletionHandler_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IActivateAudioInterfaceCompletionHandler_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IActivateAudioInterfaceCompletionHandler_Release(This)  \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IActivateAudioInterfaceCompletionHandler_ActivateCompleted(This,activateOperation)  \
        ( (This)->lpVtbl->ActivateCompleted(This,activateOperation) )

#endif


/* IActivateAudioInterfaceAsyncOperation  */

#if defined(__cplusplus)

    #define WASAPI_IActivateAudioInterfaceAsyncOperation_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IActivateAudioInterfaceAsyncOperation_AddRef(This)  \
        ( (This)->AddRef() )

    #define WASAPI_IActivateAudioInterfaceAsyncOperation_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IActivateAudioInterfaceAsyncOperation_GetActivateResult(This,activateResult,activatedInterface) \
        ( (This)->GetActivateResult(activateResult,activatedInterface) )

#else /* C interface */

    /* "72A22D78-CDE4-431D-B8CC-843A71199B6D" */
    static const IID IID_IActivateAudioInterfaceAsyncOperation = { 0x72A22D78, 0xCDE4, 0x431D, { 0xB8, 0xCC, 0x84, 0x3A, 0x71, 0x19, 0x9B, 0x6D } };

    #define WASAPI_IActivateAudioInterfaceAsyncOperation_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IActivateAudioInterfaceAsyncOperation_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IActivateAudioInterfaceAsyncOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IActivateAudioInterfaceAsyncOperation_GetActivateResult(This,activateResult,activatedInterface) \
        ( (This)->lpVtbl->GetActivateResult(This,activateResult,activatedInterface) )

#endif


/* IAudioClient */

#if defined(__cplusplus)

    #define WASAPI_IAudioClient_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define WASAPI_IAudioClient_AddRef(This) \
        ( (This)->AddRef() ) 

    #define WASAPI_IAudioClient_Release(This)\
        ( (This)->Release() )

    #define WASAPI_IAudioClient_Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) \
        ( (This)->Initialize(ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) )

    #define WASAPI_IAudioClient_GetBufferSize(This,pNumBufferFrames) \
        ( (This)->GetBufferSize(pNumBufferFrames) )

    #define WASAPI_IAudioClient_GetStreamLatency(This,phnsLatency) \
        ( (This)->GetStreamLatency(phnsLatency) )

    #define WASAPI_IAudioClient_GetCurrentPadding(This,pNumPaddingFrames)  \
        ( (This)->GetCurrentPadding(pNumPaddingFrames) )

    #define WASAPI_IAudioClient_IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch) \
        ( (This)->IsFormatSupported(ShareMode,pFormat,ppClosestMatch) ) 

    #define WASAPI_IAudioClient_GetMixFormat(This,ppDeviceFormat)  \
        ( (This)->GetMixFormat(ppDeviceFormat) )

    #define WASAPI_IAudioClient_GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) \
        ( (This)->GetDevicePeriod(phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) )

    #define WASAPI_IAudioClient_Start(This)  \
        ( (This)->Start() )

    #define WASAPI_IAudioClient_Stop(This) \
        ( (This)->Stop() )

    #define WASAPI_IAudioClient_Reset(This) \
        ( (This)->Reset() )

    #define WASAPI_IAudioClient_SetEventHandle(This,eventHandle) \
        ( (This)->SetEventHandle(eventHandle) )

    #define WASAPI_IAudioClient_GetService(This,riid,ppv) \
        ( (This)->GetService(riid,ppv) )

#else /* C interface */

    /* "1CB9AD4C-DBFA-4c32-B178-C2F568A703B2" */
    static const IID IID_IAudioClient = { 0x1CB9AD4C, 0xDBFA, 0x4C32, { 0xB1, 0x78, 0xC2, 0xF5, 0x68, 0xA7, 0x03, 0xB2 } };

    #define WASAPI_IAudioClient_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define WASAPI_IAudioClient_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define WASAPI_IAudioClient_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define WASAPI_IAudioClient_Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) \
        ( (This)->lpVtbl->Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) )

    #define WASAPI_IAudioClient_GetBufferSize(This,pNumBufferFrames) \
        ( (This)->lpVtbl->GetBufferSize(This,pNumBufferFrames) )

    #define WASAPI_IAudioClient_GetStreamLatency(This,phnsLatency) \
        ( (This)->lpVtbl->GetStreamLatency(This,phnsLatency) )

    #define WASAPI_IAudioClient_GetCurrentPadding(This,pNumPaddingFrames)  \
        ( (This)->lpVtbl->GetCurrentPadding(This,pNumPaddingFrames) )

    #define WASAPI_IAudioClient_IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch) \
        ( (This)->lpVtbl->IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch) )

    #define WASAPI_IAudioClient_GetMixFormat(This,ppDeviceFormat) \
        ( (This)->lpVtbl->GetMixFormat(This,ppDeviceFormat) )

    #define WASAPI_IAudioClient_GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod)  \
        ( (This)->lpVtbl->GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) )

    #define WASAPI_IAudioClient_Start(This)  \
        ( (This)->lpVtbl->Start(This) )

    #define WASAPI_IAudioClient_Stop(This) \
        ( (This)->lpVtbl->Stop(This) )

    #define WASAPI_IAudioClient_Reset(This) \
        ( (This)->lpVtbl->Reset(This) )

    #define WASAPI_IAudioClient_SetEventHandle(This,eventHandle) \
        ( (This)->lpVtbl->SetEventHandle(This,eventHandle) )

    #define WASAPI_IAudioClient_GetService(This,riid,ppv)  \
        ( (This)->lpVtbl->GetService(This,riid,ppv) )

#endif


/* IAudioClient2 */

#if defined(__cplusplus)

    #define WASAPI_IAudioClient2_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IAudioClient2_AddRef(This)  \
        ( (This)->AddRef() )

    #define WASAPI_IAudioClient2_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IAudioClient2_Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) \
        ( (This)->Initialize(ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) )

    #define WASAPI_IAudioClient2_GetBufferSize(This,pNumBufferFrames) \
        ( (This)->GetBufferSize(pNumBufferFrames) )

    #define WASAPI_IAudioClient2_GetStreamLatency(This,phnsLatency) \
        ( (This)->GetStreamLatency(phnsLatency) )

    #define WASAPI_IAudioClient2_GetCurrentPadding(This,pNumPaddingFrames) \
        ( (This)->GetCurrentPadding(pNumPaddingFrames) )

    #define WASAPI_IAudioClient2_IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch)  \
        ( (This)->IsFormatSupported(ShareMode,pFormat,ppClosestMatch) )

    #define WASAPI_IAudioClient2_GetMixFormat(This,ppDeviceFormat) \
        ( (This)->GetMixFormat(ppDeviceFormat) )

    #define WASAPI_IAudioClient2_GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) \
        ( (This)->GetDevicePeriod(phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) )

    #define WASAPI_IAudioClient2_Start(This) \
        ( (This)->Start() )

    #define WASAPI_IAudioClient2_Stop(This) \
        ( (This)->Stop() )

    #define WASAPI_IAudioClient2_Reset(This) \
        ( (This)->Reset() ) 

    #define WASAPI_IAudioClient2_SetEventHandle(This,eventHandle)  \
        ( (This)->SetEventHandle(eventHandle) )

    #define WASAPI_IAudioClient2_GetService(This,riid,ppv) \
        ( (This)->GetService(riid,ppv) )

    #define WASAPI_IAudioClient2_IsOffloadCapable(This,Category,pbOffloadCapable)  \
        ( (This)->IsOffloadCapable(Category,pbOffloadCapable) )

    #define WASAPI_IAudioClient2_SetClientProperties(This,pProperties) \
        ( (This)->SetClientProperties(pProperties) )

    #define WASAPI_IAudioClient2_GetBufferSizeLimits(This,pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration) \
        ( (This)->GetBufferSizeLimits(pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration) )

#else /* C interface */

    /* "726778CD-F60A-4eda-82DE-E47610CD78AA" */
    static const IID IID_IAudioClient2 = { 0x726778CD, 0xF60A, 0x4EDA, { 0x82, 0xDE, 0xE4, 0x76, 0x10, 0xCD, 0x78, 0xAA } };

    #define WASAPI_IAudioClient2_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IAudioClient2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IAudioClient2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IAudioClient2_Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) \
        ( (This)->lpVtbl->Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) )

    #define WASAPI_IAudioClient2_GetBufferSize(This,pNumBufferFrames)  \
        ( (This)->lpVtbl->GetBufferSize(This,pNumBufferFrames) )

    #define WASAPI_IAudioClient2_GetStreamLatency(This,phnsLatency) \
        ( (This)->lpVtbl->GetStreamLatency(This,phnsLatency) )

    #define WASAPI_IAudioClient2_GetCurrentPadding(This,pNumPaddingFrames) \
        ( (This)->lpVtbl->GetCurrentPadding(This,pNumPaddingFrames) )

    #define WASAPI_IAudioClient2_IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch) \
        ( (This)->lpVtbl->IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch) )

    #define WASAPI_IAudioClient2_GetMixFormat(This,ppDeviceFormat) \
        ( (This)->lpVtbl->GetMixFormat(This,ppDeviceFormat) )

    #define WASAPI_IAudioClient2_GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) \
        ( (This)->lpVtbl->GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) )

    #define WASAPI_IAudioClient2_Start(This) \
        ( (This)->lpVtbl->Start(This) )

    #define WASAPI_IAudioClient2_Stop(This)  \
        ( (This)->lpVtbl->Stop(This) )

    #define WASAPI_IAudioClient2_Reset(This) \
        ( (This)->lpVtbl->Reset(This) )

    #define WASAPI_IAudioClient2_SetEventHandle(This,eventHandle) \
        ( (This)->lpVtbl->SetEventHandle(This,eventHandle) )

    #define WASAPI_IAudioClient2_GetService(This,riid,ppv) \
        ( (This)->lpVtbl->GetService(This,riid,ppv) )

    #define WASAPI_IAudioClient2_IsOffloadCapable(This,Category,pbOffloadCapable)  \
        ( (This)->lpVtbl->IsOffloadCapable(This,Category,pbOffloadCapable) )

    #define WASAPI_IAudioClient2_SetClientProperties(This,pProperties) \
        ( (This)->lpVtbl->SetClientProperties(This,pProperties) )

    #define WASAPI_IAudioClient2_GetBufferSizeLimits(This,pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration) \
        ( (This)->lpVtbl->GetBufferSizeLimits(This,pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration) )

#endif


/* IAudioClient3 */

#if defined(__cplusplus)

    #define WASAPI_IAudioClient3_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IAudioClient3_AddRef(This) \
        ( (This)->AddRef() )

    #define WASAPI_IAudioClient3_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IAudioClient3_Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid)  \
        ( (This)->Initialize(ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) ) 

    #define WASAPI_IAudioClient3_GetBufferSize(This,pNumBufferFrames)  \
        ( (This)->GetBufferSize(pNumBufferFrames) )

    #define WASAPI_IAudioClient3_GetStreamLatency(This,phnsLatency)    \
        ( (This)->GetStreamLatency(phnsLatency) )

    #define WASAPI_IAudioClient3_GetCurrentPadding(This,pNumPaddingFrames) \
        ( (This)->GetCurrentPadding(pNumPaddingFrames) )

    #define WASAPI_IAudioClient3_IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch)  \
        ( (This)->IsFormatSupported(ShareMode,pFormat,ppClosestMatch) )

    #define WASAPI_IAudioClient3_GetMixFormat(This,ppDeviceFormat) \
        ( (This)->GetMixFormat(ppDeviceFormat) )

    #define WASAPI_IAudioClient3_GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) \
        ( (This)->GetDevicePeriod(phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) ) 

    #define WASAPI_IAudioClient3_Start(This)   \
        ( (This)->Start() )

    #define WASAPI_IAudioClient3_Stop(This)    \
        ( (This)->Stop() )

    #define WASAPI_IAudioClient3_Reset(This)   \
        ( (This)->Reset() )

    #define WASAPI_IAudioClient3_SetEventHandle(This,eventHandle)  \
        ( (This)->SetEventHandle(eventHandle) )

    #define WASAPI_IAudioClient3_GetService(This,riid,ppv) \
        ( (This)->GetService(riid,ppv) )

    #define WASAPI_IAudioClient3_IsOffloadCapable(This,Category,pbOffloadCapable)  \
        ( (This)->IsOffloadCapable(Category,pbOffloadCapable) )

    #define WASAPI_IAudioClient3_SetClientProperties(This,pProperties) \
        ( (This)->SetClientProperties(pProperties) )

    #define WASAPI_IAudioClient3_GetBufferSizeLimits(This,pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration)    \
        ( (This)->GetBufferSizeLimits(pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration) )

    #define WASAPI_IAudioClient3_GetSharedModeEnginePeriod(This,pFormat,pDefaultPeriodInFrames,pFundamentalPeriodInFrames,pMinPeriodInFrames,pMaxPeriodInFrames) \
        ( (This)->GetSharedModeEnginePeriod(pFormat,pDefaultPeriodInFrames,pFundamentalPeriodInFrames,pMinPeriodInFrames,pMaxPeriodInFrames) )

    #define WASAPI_IAudioClient3_GetCurrentSharedModeEnginePeriod(This,ppFormat,pCurrentPeriodInFrames) \
        ( (This)->GetCurrentSharedModeEnginePeriod(ppFormat,pCurrentPeriodInFrames) )

    #define WASAPI_IAudioClient3_InitializeSharedAudioStream(This,StreamFlags,PeriodInFrames,pFormat,AudioSessionGuid) \
        ( (This)->InitializeSharedAudioStream(StreamFlags,PeriodInFrames,pFormat,AudioSessionGuid) )

#else /* C interface */

    /* "7ED4EE07-8E67-4CD4-8C1A-2B7A5987AD42" */
    static const IID IID_IAudioClient3 = { 0x7ED4EE07, 0x8E67, 0x4CD4, { 0x8C, 0x1A, 0x2B, 0x7A, 0x59, 0x87, 0xAD, 0x42 } };

    #define WASAPI_IAudioClient3_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IAudioClient3_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IAudioClient3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IAudioClient3_Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid)  \
        ( (This)->lpVtbl->Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) )

    #define WASAPI_IAudioClient3_GetBufferSize(This,pNumBufferFrames)  \
        ( (This)->lpVtbl->GetBufferSize(This,pNumBufferFrames) )

    #define WASAPI_IAudioClient3_GetStreamLatency(This,phnsLatency)    \
        ( (This)->lpVtbl->GetStreamLatency(This,phnsLatency) )

    #define WASAPI_IAudioClient3_GetCurrentPadding(This,pNumPaddingFrames) \
        ( (This)->lpVtbl->GetCurrentPadding(This,pNumPaddingFrames) )

    #define WASAPI_IAudioClient3_IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch)  \
        ( (This)->lpVtbl->IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch) )

    #define WASAPI_IAudioClient3_GetMixFormat(This,ppDeviceFormat) \
        ( (This)->lpVtbl->GetMixFormat(This,ppDeviceFormat) )

    #define WASAPI_IAudioClient3_GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) \
        ( (This)->lpVtbl->GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) )

    #define WASAPI_IAudioClient3_Start(This)   \
        ( (This)->lpVtbl->Start(This) )

    #define WASAPI_IAudioClient3_Stop(This)    \
        ( (This)->lpVtbl->Stop(This) )

    #define WASAPI_IAudioClient3_Reset(This)   \
        ( (This)->lpVtbl->Reset(This) )

    #define WASAPI_IAudioClient3_SetEventHandle(This,eventHandle)  \
        ( (This)->lpVtbl->SetEventHandle(This,eventHandle) )

    #define WASAPI_IAudioClient3_GetService(This,riid,ppv) \
        ( (This)->lpVtbl->GetService(This,riid,ppv) )

    #define WASAPI_IAudioClient3_IsOffloadCapable(This,Category,pbOffloadCapable)  \
        ( (This)->lpVtbl->IsOffloadCapable(This,Category,pbOffloadCapable) )

    #define WASAPI_IAudioClient3_SetClientProperties(This,pProperties) \
        ( (This)->lpVtbl->SetClientProperties(This,pProperties) )

    #define WASAPI_IAudioClient3_GetBufferSizeLimits(This,pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration) \
        ( (This)->lpVtbl->GetBufferSizeLimits(This,pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration) )

    #define WASAPI_IAudioClient3_GetSharedModeEnginePeriod(This,pFormat,pDefaultPeriodInFrames,pFundamentalPeriodInFrames,pMinPeriodInFrames,pMaxPeriodInFrames) \
        ( (This)->lpVtbl->GetSharedModeEnginePeriod(This,pFormat,pDefaultPeriodInFrames,pFundamentalPeriodInFrames,pMinPeriodInFrames,pMaxPeriodInFrames) ) 

    #define WASAPI_IAudioClient3_GetCurrentSharedModeEnginePeriod(This,ppFormat,pCurrentPeriodInFrames) \
        ( (This)->lpVtbl->GetCurrentSharedModeEnginePeriod(This,ppFormat,pCurrentPeriodInFrames) )

    #define WASAPI_IAudioClient3_InitializeSharedAudioStream(This,StreamFlags,PeriodInFrames,pFormat,AudioSessionGuid) \
        ( (This)->lpVtbl->InitializeSharedAudioStream(This,StreamFlags,PeriodInFrames,pFormat,AudioSessionGuid) )

#endif

/////////////////////////////////////////////////////////////////////////////
// IAudioRenderClient

#if defined(__cplusplus)

    #define WASAPI_IAudioRenderClient_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IAudioRenderClient_AddRef(This) \
        ( (This)->AddRef() )

    #define WASAPI_IAudioRenderClient_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IAudioRenderClient_GetBuffer(This,NumFramesRequested,ppData)  \
        ( (This)->GetBuffer(NumFramesRequested,ppData) )

    #define WASAPI_IAudioRenderClient_ReleaseBuffer(This,NumFramesWritten,dwFlags) \
        ( (This)->ReleaseBuffer(NumFramesWritten,dwFlags) )

#else

    /* "F294ACFC-3146-4483-A7BF-ADDCA7C260E2" */
    static const IID IID_IAudioRenderClient = { 0xF294ACFC, 0x3146, 0x4483, { 0xA7, 0xBF, 0xAD, 0xDC, 0xA7, 0xC2, 0x60, 0xE2 } };

    #define WASAPI_IAudioRenderClient_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IAudioRenderClient_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IAudioRenderClient_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IAudioRenderClient_GetBuffer(This,NumFramesRequested,ppData) \
        ( (This)->lpVtbl->GetBuffer(This,NumFramesRequested,ppData) )

    #define WASAPI_IAudioRenderClient_ReleaseBuffer(This,NumFramesWritten,dwFlags) \
        ( (This)->lpVtbl->ReleaseBuffer(This,NumFramesWritten,dwFlags) ) 

#endif


/* IAudioCaptureClient */

#if defined(__cplusplus)

    #define WASAPI_IAudioCaptureClient_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IAudioCaptureClient_AddRef(This)  \
        ( (This)->AddRef() )

    #define WASAPI_IAudioCaptureClient_Release(This) \
        ( (This)->Release() )

    #define WASAPI_IAudioCaptureClient_GetBuffer(This,ppData,pNumFramesToRead,pdwFlags,pu64DevicePosition,pu64QPCPosition) \
        ( (This)->GetBuffer(ppData,pNumFramesToRead,pdwFlags,pu64DevicePosition,pu64QPCPosition) )

    #define WASAPI_IAudioCaptureClient_ReleaseBuffer(This,NumFramesRead)   \
        ( (This)->ReleaseBuffer(NumFramesRead) )

    #define WASAPI_IAudioCaptureClient_GetNextPacketSize(This,pNumFramesInNextPacket)  \
        ( (This)->GetNextPacketSize(pNumFramesInNextPacket) )

#else

    /* "C8ADBD64-E71E-48a0-A4DE-185C395CD317" */
    static const IID IID_IAudioCaptureClient = { 0xC8ADBD64, 0xE71E, 0x48A0, { 0xA4, 0xDE, 0x18, 0x5C, 0x39, 0x5C, 0xD3, 0x17 } };

    #define WASAPI_IAudioCaptureClient_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define WASAPI_IAudioCaptureClient_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IAudioCaptureClient_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IAudioCaptureClient_GetBuffer(This,ppData,pNumFramesToRead,pdwFlags,pu64DevicePosition,pu64QPCPosition) \
        ( (This)->lpVtbl->GetBuffer(This,ppData,pNumFramesToRead,pdwFlags,pu64DevicePosition,pu64QPCPosition) ) 

    #define WASAPI_IAudioCaptureClient_ReleaseBuffer(This,NumFramesRead)  \
        ( (This)->lpVtbl->ReleaseBuffer(This,NumFramesRead) )

    #define WASAPI_IAudioCaptureClient_GetNextPacketSize(This,pNumFramesInNextPacket)  \
        ( (This)->lpVtbl->GetNextPacketSize(This,pNumFramesInNextPacket) )

#endif


/* IAudioClock */

#if defined(__cplusplus)

    #define WASAPI_IAudioClock_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IAudioClock_AddRef(This)    \
        ( (This)->AddRef() )

    #define WASAPI_IAudioClock_Release(This)   \
        ( (This)->Release() )

    #define WASAPI_IAudioClock_GetFrequency(This,pu64Frequency)    \
        ( (This)->GetFrequency(pu64Frequency) )

    #define WASAPI_IAudioClock_GetPosition(This,pu64Position,pu64QPCPosition)  \
        ( (This)->GetPosition(pu64Position,pu64QPCPosition) )

    #define WASAPI_IAudioClock_GetCharacteristics(This,pdwCharacteristics) \
        ( (This)->GetCharacteristics(pdwCharacteristics) )

#else

    /* "CD63314F-3FBA-4a1b-812C-EF96358728E7" */
    static const IID IID_IAudioClock = { 0xCD63314F, 0x3FBA, 0x4A1B, { 0x81, 0x2C, 0xEF, 0x96, 0x35, 0x87, 0x28, 0xE7 } };

    #define WASAPI_IAudioClock_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IAudioClock_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IAudioClock_Release(This)   \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IAudioClock_GetFrequency(This,pu64Frequency)    \
        ( (This)->lpVtbl->GetFrequency(This,pu64Frequency) )

    #define WASAPI_IAudioClock_GetPosition(This,pu64Position,pu64QPCPosition)  \
        ( (This)->lpVtbl->GetPosition(This,pu64Position,pu64QPCPosition) )

    #define WASAPI_IAudioClock_GetCharacteristics(This,pdwCharacteristics) \
        ( (This)->lpVtbl->GetCharacteristics(This,pdwCharacteristics) )

#endif


/* IAudioClock2 */

#if defined(__cplusplus)

    #define WASAPI_IAudioClock2_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IAudioClock2_AddRef(This)   \
        ( (This)->AddRef() )

    #define WASAPI_IAudioClock2_Release(This)  \
        ( (This)->Release() )

    #define WASAPI_IAudioClock2_GetDevicePosition(This,DevicePosition,QPCPosition) \
        ( (This)->GetDevicePosition(DevicePosition,QPCPosition) )

#else

    /* "6f49ff73-6727-49ac-a008-d98cf5e70048" */
    static const IID IID_IAudioClock2 = { 0x6F49FF73, 0x6727, 0x49AC, { 0xA0, 0x08, 0xD9, 0x8C, 0xF5, 0xE7, 0x00, 0x48 } };

    #define WASAPI_IAudioClock2_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IAudioClock2_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IAudioClock2_Release(This)  \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IAudioClock2_GetDevicePosition(This,DevicePosition,QPCPosition) \
        ( (This)->lpVtbl->GetDevicePosition(This,DevicePosition,QPCPosition) )

#endif


/* IAudioClockAdjustment */

#if defined(__cplusplus)

    #define WASAPI_IAudioClockAdjustment_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define WASAPI_IAudioClockAdjustment_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define WASAPI_IAudioClockAdjustment_Release(This) \
        ( (This)->Release() ) 

    #define WASAPI_IAudioClockAdjustment_SetSampleRate(This,flSampleRate)  \
        ( (This)->SetSampleRate(flSampleRate) )

#else

    /* "f6e4c0a0-46d9-4fb8-be21-57a3ef2b626c" */
    static const IID IID_IAudioClockAdjustment = { 0xF6E4C0A0, 0x46D9, 0x4FB8, { 0xBE, 0x21, 0x57, 0xA3, 0xEF, 0x2B, 0x62, 0x6C } };

    #define WASAPI_IAudioClockAdjustment_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define WASAPI_IAudioClockAdjustment_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define WASAPI_IAudioClockAdjustment_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define WASAPI_IAudioClockAdjustment_SetSampleRate(This,flSampleRate)  \
        ( (This)->lpVtbl->SetSampleRate(This,flSampleRate) )

#endif


/* ISimpleAudioVolume */

#if defined(__cplusplus)

    #define WASAPI_ISimpleAudioVolume_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define WASAPI_ISimpleAudioVolume_AddRef(This) \
        ( (This)->AddRef() ) 

    #define WASAPI_ISimpleAudioVolume_Release(This)    \
        ( (This)->Release() ) 

    #define WASAPI_ISimpleAudioVolume_SetMasterVolume(This,fLevel,EventContext)    \
        ( (This)->SetMasterVolume(fLevel,EventContext) ) 

    #define WASAPI_ISimpleAudioVolume_GetMasterVolume(This,pfLevel)    \
        ( (This)->GetMasterVolume(pfLevel) ) 

    #define WASAPI_ISimpleAudioVolume_SetMute(This,bMute,EventContext) \
        ( (This)->SetMute(,bMute,EventContext) ) 

    #define WASAPI_ISimpleAudioVolume_GetMute(This,pbMute) \
        ( (This)->GetMute(,pbMute) )

#else

    /* "87CE5498-68D6-44E5-9215-6DA47EF883D" */
    static const IID IID_ISimpleAudioVolume = { 0x87CE5498, 0x68D6, 0x44E5, { 0x92, 0x15, 0x6D, 0xA4, 0x7E, 0xF8, 0x8, 0x3D } };

    #define WASAPI_ISimpleAudioVolume_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define WASAPI_ISimpleAudioVolume_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define WASAPI_ISimpleAudioVolume_Release(This)    \
        ( (This)->lpVtbl->Release(This) ) 

    #define WASAPI_ISimpleAudioVolume_SetMasterVolume(This,fLevel,EventContext)    \
        ( (This)->lpVtbl->SetMasterVolume(This,fLevel,EventContext) ) 

    #define WASAPI_ISimpleAudioVolume_GetMasterVolume(This,pfLevel)    \
        ( (This)->lpVtbl->GetMasterVolume(This,pfLevel) ) 

    #define WASAPI_ISimpleAudioVolume_SetMute(This,bMute,EventContext) \
        ( (This)->lpVtbl->SetMute(This,bMute,EventContext) ) 

    #define WASAPI_ISimpleAudioVolume_GetMute(This,pbMute) \
        ( (This)->lpVtbl->GetMute(This,pbMute) )

#endif


/* IAudioStreamVolume */

#if defined(__cplusplus)

    #define WASAPI_IAudioStreamVolume_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) )

    #define WASAPI_IAudioStreamVolume_AddRef(This) \
        ( (This)->AddRef() )

    #define WASAPI_IAudioStreamVolume_Release(This)    \
        ( (This)->Release() )

    #define WASAPI_IAudioStreamVolume_GetChannelCount(This,pdwCount)   \
        ( (This)->GetChannelCount(pdwCount) )

    #define WASAPI_IAudioStreamVolume_SetChannelVolume(This,dwIndex,fLevel)    \
        ( (This)->SetChannelVolume(dwIndex,fLevel) )

    #define WASAPI_IAudioStreamVolume_GetChannelVolume(This,dwIndex,pfLevel)   \
        ( (This)->GetChannelVolume(dwIndex,pfLevel) )

    #define WASAPI_IAudioStreamVolume_SetAllVolumes(This,dwCount,pfVolumes)    \
        ( (This)->SetAllVolumes(dwCount,pfVolumes) )

    #define WASAPI_IAudioStreamVolume_GetAllVolumes(This,dwCount,pfVolumes)    \
        ( (This)->GetAllVolumes(dwCount,pfVolumes) )

#else

    /* "93014887-242D-4068-8A15-CF5E93B90FE3" */
    static const IID IID_IAudioStreamVolume = { 0x93014887, 0x242D, 0x4068, { 0x8A, 0x15, 0xCF, 0x5E, 0x93, 0xB9, 0x0F, 0xE3 } };

    #define WASAPI_IAudioStreamVolume_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

    #define WASAPI_IAudioStreamVolume_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

    #define WASAPI_IAudioStreamVolume_Release(This) \
        ( (This)->lpVtbl->Release(This) )

    #define WASAPI_IAudioStreamVolume_GetChannelCount(This,pdwCount)   \
        ( (This)->lpVtbl->GetChannelCount(This,pdwCount) )

    #define WASAPI_IAudioStreamVolume_SetChannelVolume(This,dwIndex,fLevel)    \
        ( (This)->lpVtbl->SetChannelVolume(This,dwIndex,fLevel) )

    #define WASAPI_IAudioStreamVolume_GetChannelVolume(This,dwIndex,pfLevel)   \
        ( (This)->lpVtbl->GetChannelVolume(This,dwIndex,pfLevel) )

    #define WASAPI_IAudioStreamVolume_SetAllVolumes(This,dwCount,pfVolumes)    \
        ( (This)->lpVtbl->SetAllVolumes(This,dwCount,pfVolumes) )

    #define WASAPI_IAudioStreamVolume_GetAllVolumes(This,dwCount,pfVolumes)    \
        ( (This)->lpVtbl->GetAllVolumes(This,dwCount,pfVolumes) )

#endif


/* IAudioAmbisonicsControl */

#if defined(__cplusplus)

    #define WASAPI_IAudioAmbisonicsControl_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define WASAPI_IAudioAmbisonicsControl_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define WASAPI_IAudioAmbisonicsControl_Release(This)   \
        ( (This)->Release() ) 

    #define WASAPI_IAudioAmbisonicsControl_SetData(This,pAmbisonicsParams,cbAmbisonicsParams)  \
        ( (This)->SetData(pAmbisonicsParams,cbAmbisonicsParams) ) 

    #define WASAPI_IAudioAmbisonicsControl_SetHeadTracking(This,bEnableHeadTracking)   \
        ( (This)->SetHeadTracking(bEnableHeadTracking) ) 

    #define WASAPI_IAudioAmbisonicsControl_GetHeadTracking(This,pbEnableHeadTracking)  \
        ( (This)->GetHeadTracking(pbEnableHeadTracking) ) 

    #define WASAPI_IAudioAmbisonicsControl_SetRotation(This,X,Y,Z,W)   \
        ( (This)->SetRotation(X,Y,Z,W) )

#else

    /* "28724C91-DF35-4856-9F76-D6A26413F3DF"*/
    static const IID IID_IAudioAmbisonicsControl = { 0x28724C91, 0xDF35, 0x4856, { 0x9F, 0x76, 0xD6, 0xA2, 0x64, 0x13, 0xF3, 0xDF } };

    #define WASAPI_IAudioAmbisonicsControl_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define WASAPI_IAudioAmbisonicsControl_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define WASAPI_IAudioAmbisonicsControl_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define WASAPI_IAudioAmbisonicsControl_SetData(This,pAmbisonicsParams,cbAmbisonicsParams)  \
        ( (This)->lpVtbl->SetData(This,pAmbisonicsParams,cbAmbisonicsParams) ) 

    #define WASAPI_IAudioAmbisonicsControl_SetHeadTracking(This,bEnableHeadTracking)   \
        ( (This)->lpVtbl->SetHeadTracking(This,bEnableHeadTracking) ) 

    #define WASAPI_IAudioAmbisonicsControl_GetHeadTracking(This,pbEnableHeadTracking)  \
        ( (This)->lpVtbl->GetHeadTracking(This,pbEnableHeadTracking) ) 

    #define WASAPI_IAudioAmbisonicsControl_SetRotation(This,X,Y,Z,W)   \
        ( (This)->lpVtbl->SetRotation(This,X,Y,Z,W) )

#endif


/* IChannelAudioVolume */

#if defined(__cplusplus)

    #define WASAPI_IChannelAudioVolume_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define WASAPI_IChannelAudioVolume_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define WASAPI_IChannelAudioVolume_Release(This)   \
        ( (This)->Release() ) 

    #define WASAPI_IChannelAudioVolume_GetChannelCount(This,pdwCount)  \
        ( (This)->GetChannelCount(pdwCount) ) 

    #define WASAPI_IChannelAudioVolume_SetChannelVolume(This,dwIndex,fLevel,EventContext)  \
        ( (This)->SetChannelVolume(dwIndex,fLevel,EventContext) ) 

    #define WASAPI_IChannelAudioVolume_GetChannelVolume(This,dwIndex,pfLevel)  \
        ( (This)->GetChannelVolume(dwIndex,pfLevel) ) 

    #define WASAPI_IChannelAudioVolume_SetAllVolumes(This,dwCount,pfVolumes,EventContext)  \
        ( (This)->SetAllVolumes(dwCount,pfVolumes,EventContext) ) 

    #define WASAPI_IChannelAudioVolume_GetAllVolumes(This,dwCount,pfVolumes)   \
        ( (This)->GetAllVolumes(dwCount,pfVolumes) )

#else

    /* "1C158861-B533-4B30-B1CF-E853E51C59B8" */
    static const IID IID_IChannelAudioVolume = { 0x1C158861, 0xB533, 0x4B30, { 0xB1, 0xCF, 0xE8, 0x53, 0xE5, 0x1C, 0x59, 0xB8 } };

    #define WASAPI_IChannelAudioVolume_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define WASAPI_IChannelAudioVolume_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define WASAPI_IChannelAudioVolume_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define WASAPI_IChannelAudioVolume_GetChannelCount(This,pdwCount)  \
        ( (This)->lpVtbl->GetChannelCount(This,pdwCount) ) 

    #define WASAPI_IChannelAudioVolume_SetChannelVolume(This,dwIndex,fLevel,EventContext)  \
        ( (This)->lpVtbl->SetChannelVolume(This,dwIndex,fLevel,EventContext) ) 

    #define WASAPI_IChannelAudioVolume_GetChannelVolume(This,dwIndex,pfLevel)  \
        ( (This)->lpVtbl->GetChannelVolume(This,dwIndex,pfLevel) ) 

    #define WASAPI_IChannelAudioVolume_SetAllVolumes(This,dwCount,pfVolumes,EventContext)  \
        ( (This)->lpVtbl->SetAllVolumes(This,dwCount,pfVolumes,EventContext) ) 

    #define WASAPI_IChannelAudioVolume_GetAllVolumes(This,dwCount,pfVolumes)   \
        ( (This)->lpVtbl->GetAllVolumes(This,dwCount,pfVolumes) )

#endif


#if !defined(__cplusplus)

    /* "00000001-0000-0010-8000-00aa00389b71" */
    static const IID KSDATAFORMAT_SUBTYPE_PCM = { 0x00000001, 0x0000, 0x0010, { 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71 } };

    /* "00000003-0000-0010-8000-00aa00389b71" */
    static const IID KSDATAFORMAT_SUBTYPE_IEEE_FLOAT = { 0x00000003, 0x0000, 0x0010, { 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71 } };

#endif

/* IPropertyStore */

#if defined(__cplusplus)

    #define WASAPI_IPropertyStore_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define WASAPI_IPropertyStore_AddRef(This) \
        ( (This)->AddRef() ) 

    #define WASAPI_IPropertyStore_Release(This)    \
        ( (This)->Release() ) 

    #define WASAPI_IPropertyStore_GetCount(This,cProps)    \
        ( (This)->GetCount(cProps) ) 

    #define WASAPI_IPropertyStore_GetAt(This,iProp,pkey)   \
        ( (This)->GetAt(iProp,pkey) ) 

    #define WASAPI_IPropertyStore_GetValue(This,key,pv)    \
        ( (This)->GetValue(key,pv) ) 

    #define WASAPI_IPropertyStore_SetValue(This,key,propvar)   \
        ( (This)->SetValue(key,propvar) ) 

    #define WASAPI_IPropertyStore_Commit(This) \
        ( (This)->Commit() ) 

#else

    /* "886d8eeb-8cf2-4446-8d02-cdba1dbdcf99" */
    static const IID IID_IPropertyStore = { 0x886D8EEB, 0x8CF2, 0x4446, { 0x8D, 0x02, 0xCD, 0xBA, 0x1D, 0xBD, 0xCF, 0x99 } };

    #define WASAPI_IPropertyStore_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define WASAPI_IPropertyStore_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define WASAPI_IPropertyStore_Release(This)    \
        ( (This)->lpVtbl->Release(This) ) 

    #define WASAPI_IPropertyStore_GetCount(This,cProps)    \
        ( (This)->lpVtbl->GetCount(This,cProps) ) 

    #define WASAPI_IPropertyStore_GetAt(This,iProp,pkey)   \
        ( (This)->lpVtbl->GetAt(This,iProp,pkey) ) 

    #define WASAPI_IPropertyStore_GetValue(This,key,pv)    \
        ( (This)->lpVtbl->GetValue(This,key,pv) ) 

    #define WASAPI_IPropertyStore_SetValue(This,key,propvar)   \
        ( (This)->lpVtbl->SetValue(This,key,propvar) ) 

    #define WASAPI_IPropertyStore_Commit(This) \
        ( (This)->lpVtbl->Commit(This) ) 

#endif

#endif /* WIN32_WASAPI_H */
/* 
------------------------------------------------------------------------------
MIT License

Copyright (c) 2023 eaglenature

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
------------------------------------------------------------------------------
*/
