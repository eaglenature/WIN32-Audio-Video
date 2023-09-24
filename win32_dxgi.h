/*
------------------------------------------------------------------------------
    win32_dxgi - v0.01 - public domain DXGI C/C++ agnostic layer

    DO THIS:

        #include <dxgi1_6.h>
        #include "win32_win32_dxgi.h"

    LICENSE:
        See end of file for license information

------------------------------------------------------------------------------
*/
#ifndef WIN32_DXGI_H
#define WIN32_DXGI_H

/* IDXGIAdapter */

#if defined(__cplusplus)

    #define DXGI_IDXGIAdapter_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGIAdapter_AddRef(This)   \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGIAdapter_Release(This)  \
        ( (This)->Release() ) 

    #define DXGI_IDXGIAdapter_SetPrivateData(This,Name,DataSize,pData)   \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGIAdapter_SetPrivateDataInterface(This,Name,pUnknown)    \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGIAdapter_GetPrivateData(This,Name,pDataSize,pData)  \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGIAdapter_GetParent(This,riid,ppParent)  \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGIAdapter_EnumOutputs(This,Output,ppOutput)  \
        ( (This)->EnumOutputs(Output,ppOutput) ) 

    #define DXGI_IDXGIAdapter_GetDesc(This,pDesc)    \
        ( (This)->GetDesc(pDesc) ) 

    #define DXGI_IDXGIAdapter_CheckInterfaceSupport(This,InterfaceName,pUMDVersion)  \
        ( (This)->CheckInterfaceSupport(InterfaceName,pUMDVersion) ) 

#else /* C interface */

    #define DXGI_IDXGIAdapter_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGIAdapter_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGIAdapter_Release(This)  \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGIAdapter_SetPrivateData(This,Name,DataSize,pData)   \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGIAdapter_SetPrivateDataInterface(This,Name,pUnknown)    \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGIAdapter_GetPrivateData(This,Name,pDataSize,pData)  \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGIAdapter_GetParent(This,riid,ppParent)  \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGIAdapter_EnumOutputs(This,Output,ppOutput)  \
        ( (This)->lpVtbl->EnumOutputs(This,Output,ppOutput) ) 

    #define DXGI_IDXGIAdapter_GetDesc(This,pDesc)    \
        ( (This)->lpVtbl->GetDesc(This,pDesc) ) 

    #define DXGI_IDXGIAdapter_CheckInterfaceSupport(This,InterfaceName,pUMDVersion)  \
        ( (This)->lpVtbl->CheckInterfaceSupport(This,InterfaceName,pUMDVersion) ) 

#endif


/* IDXGISwapChain */

#if defined(__cplusplus)

    #define DXGI_IDXGISwapChain_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGISwapChain_AddRef(This) \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGISwapChain_Release(This)    \
        ( (This)->Release() ) 

    #define DXGI_IDXGISwapChain_SetPrivateData(This,Name,DataSize,pData) \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGISwapChain_SetPrivateDataInterface(This,Name,pUnknown)  \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGISwapChain_GetPrivateData(This,Name,pDataSize,pData)    \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGISwapChain_GetParent(This,riid,ppParent)    \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGISwapChain_GetDevice(This,riid,ppDevice)    \
        ( (This)->GetDevice(riid,ppDevice) ) 

    #define DXGI_IDXGISwapChain_Present(This,SyncInterval,Flags) \
        ( (This)->Present(SyncInterval,Flags) ) 

    #define DXGI_IDXGISwapChain_GetBuffer(This,Buffer,riid,ppSurface)    \
        ( (This)->GetBuffer(Buffer,riid,ppSurface) ) 

    #define DXGI_IDXGISwapChain_SetFullscreenState(This,Fullscreen,pTarget)  \
        ( (This)->SetFullscreenState(Fullscreen,pTarget) ) 

    #define DXGI_IDXGISwapChain_GetFullscreenState(This,pFullscreen,ppTarget)    \
        ( (This)->GetFullscreenState(pFullscreen,ppTarget) ) 

    #define DXGI_IDXGISwapChain_GetDesc(This,pDesc)  \
        ( (This)->GetDesc(pDesc) ) 

    #define DXGI_IDXGISwapChain_ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags)    \
        ( (This)->ResizeBuffers(BufferCount,Width,Height,NewFormat,SwapChainFlags) ) 

    #define DXGI_IDXGISwapChain_ResizeTarget(This,pNewTargetParameters)  \
        ( (This)->ResizeTarget(pNewTargetParameters) ) 

    #define DXGI_IDXGISwapChain_GetContainingOutput(This,ppOutput)   \
        ( (This)->GetContainingOutput(ppOutput) ) 

    #define DXGI_IDXGISwapChain_GetFrameStatistics(This,pStats)  \
        ( (This)->GetFrameStatistics(pStats) ) 

    #define DXGI_IDXGISwapChain_GetLastPresentCount(This,pLastPresentCount)  \
        ( (This)->GetLastPresentCount(pLastPresentCount) ) 

#else /* C interface */

    #define DXGI_IDXGISwapChain_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGISwapChain_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGISwapChain_Release(This)    \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGISwapChain_SetPrivateData(This,Name,DataSize,pData) \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGISwapChain_SetPrivateDataInterface(This,Name,pUnknown)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGISwapChain_GetPrivateData(This,Name,pDataSize,pData)    \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGISwapChain_GetParent(This,riid,ppParent)    \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGISwapChain_GetDevice(This,riid,ppDevice)    \
        ( (This)->lpVtbl->GetDevice(This,riid,ppDevice) ) 

    #define DXGI_IDXGISwapChain_Present(This,SyncInterval,Flags) \
        ( (This)->lpVtbl->Present(This,SyncInterval,Flags) ) 

    #define DXGI_IDXGISwapChain_GetBuffer(This,Buffer,riid,ppSurface)    \
        ( (This)->lpVtbl->GetBuffer(This,Buffer,riid,ppSurface) ) 

    #define DXGI_IDXGISwapChain_SetFullscreenState(This,Fullscreen,pTarget)  \
        ( (This)->lpVtbl->SetFullscreenState(This,Fullscreen,pTarget) ) 

    #define DXGI_IDXGISwapChain_GetFullscreenState(This,pFullscreen,ppTarget)    \
        ( (This)->lpVtbl->GetFullscreenState(This,pFullscreen,ppTarget) ) 

    #define DXGI_IDXGISwapChain_GetDesc(This,pDesc)  \
        ( (This)->lpVtbl->GetDesc(This,pDesc) ) 

    #define DXGI_IDXGISwapChain_ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags)    \
        ( (This)->lpVtbl->ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags) ) 

    #define DXGI_IDXGISwapChain_ResizeTarget(This,pNewTargetParameters)  \
        ( (This)->lpVtbl->ResizeTarget(This,pNewTargetParameters) ) 

    #define DXGI_IDXGISwapChain_GetContainingOutput(This,ppOutput)   \
        ( (This)->lpVtbl->GetContainingOutput(This,ppOutput) ) 

    #define DXGI_IDXGISwapChain_GetFrameStatistics(This,pStats)  \
        ( (This)->lpVtbl->GetFrameStatistics(This,pStats) ) 

    #define DXGI_IDXGISwapChain_GetLastPresentCount(This,pLastPresentCount)  \
        ( (This)->lpVtbl->GetLastPresentCount(This,pLastPresentCount) ) 

#endif


/* IDXGIFactory */

#if defined(__cplusplus)

    #define DXGI_IDXGIFactory_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGIFactory_AddRef(This)   \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGIFactory_Release(This)  \
        ( (This)->Release() ) 

    #define DXGI_IDXGIFactory_SetPrivateData(This,Name,DataSize,pData)   \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGIFactory_SetPrivateDataInterface(This,Name,pUnknown)    \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGIFactory_GetPrivateData(This,Name,pDataSize,pData)  \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGIFactory_GetParent(This,riid,ppParent)  \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGIFactory_EnumAdapters(This,Adapter,ppAdapter)   \
        ( (This)->EnumAdapters(Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory_MakeWindowAssociation(This,WindowHandle,Flags) \
        ( (This)->MakeWindowAssociation(WindowHandle,Flags) ) 

    #define DXGI_IDXGIFactory_GetWindowAssociation(This,pWindowHandle)   \
        ( (This)->GetWindowAssociation(pWindowHandle) ) 

    #define DXGI_IDXGIFactory_CreateSwapChain(This,pDevice,pDesc,ppSwapChain)    \
        ( (This)->CreateSwapChain(pDevice,pDesc,ppSwapChain) ) 

    #define DXGI_IDXGIFactory_CreateSoftwareAdapter(This,Module,ppAdapter)   \
        ( (This)->CreateSoftwareAdapter(Module,ppAdapter) ) 

#else /* C interface */

    #define DXGI_IDXGIFactory_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGIFactory_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGIFactory_Release(This)  \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGIFactory_SetPrivateData(This,Name,DataSize,pData)   \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGIFactory_SetPrivateDataInterface(This,Name,pUnknown)    \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGIFactory_GetPrivateData(This,Name,pDataSize,pData)  \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGIFactory_GetParent(This,riid,ppParent)  \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGIFactory_EnumAdapters(This,Adapter,ppAdapter)   \
        ( (This)->lpVtbl->EnumAdapters(This,Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory_MakeWindowAssociation(This,WindowHandle,Flags) \
        ( (This)->lpVtbl->MakeWindowAssociation(This,WindowHandle,Flags) ) 

    #define DXGI_IDXGIFactory_GetWindowAssociation(This,pWindowHandle)   \
        ( (This)->lpVtbl->GetWindowAssociation(This,pWindowHandle) ) 

    #define DXGI_IDXGIFactory_CreateSwapChain(This,pDevice,pDesc,ppSwapChain)    \
        ( (This)->lpVtbl->CreateSwapChain(This,pDevice,pDesc,ppSwapChain) ) 

    #define DXGI_IDXGIFactory_CreateSoftwareAdapter(This,Module,ppAdapter)   \
        ( (This)->lpVtbl->CreateSoftwareAdapter(This,Module,ppAdapter) ) 

#endif


/* IDXGIDevice */

#if defined(__cplusplus)

    #define DXGI_IDXGIDevice_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGIDevice_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGIDevice_Release(This)   \
        ( (This)->Release() ) 

    #define DXGI_IDXGIDevice_SetPrivateData(This,Name,DataSize,pData)    \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGIDevice_SetPrivateDataInterface(This,Name,pUnknown) \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGIDevice_GetPrivateData(This,Name,pDataSize,pData)   \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGIDevice_GetParent(This,riid,ppParent)   \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGIDevice_GetAdapter(This,pAdapter)   \
        ( (This)->GetAdapter(pAdapter) ) 

    #define DXGI_IDXGIDevice_CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface)   \
        ( (This)->CreateSurface(pDesc,NumSurfaces,Usage,pSharedResource,ppSurface) ) 

    #define DXGI_IDXGIDevice_QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources)  \
        ( (This)->QueryResourceResidency(ppResources,pResidencyStatus,NumResources) ) 

    #define DXGI_IDXGIDevice_SetGPUThreadPriority(This,Priority) \
        ( (This)->SetGPUThreadPriority(Priority) ) 

    #define DXGI_IDXGIDevice_GetGPUThreadPriority(This,pPriority)    \
        ( (This)->GetGPUThreadPriority(pPriority) ) 

#else /* C interface */

    #define DXGI_IDXGIDevice_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGIDevice_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGIDevice_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGIDevice_SetPrivateData(This,Name,DataSize,pData)    \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGIDevice_SetPrivateDataInterface(This,Name,pUnknown) \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGIDevice_GetPrivateData(This,Name,pDataSize,pData)   \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGIDevice_GetParent(This,riid,ppParent)   \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGIDevice_GetAdapter(This,pAdapter)   \
        ( (This)->lpVtbl->GetAdapter(This,pAdapter) ) 

    #define DXGI_IDXGIDevice_CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface)   \
        ( (This)->lpVtbl->CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface) ) 

    #define DXGI_IDXGIDevice_QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources)  \
        ( (This)->lpVtbl->QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources) ) 

    #define DXGI_IDXGIDevice_SetGPUThreadPriority(This,Priority) \
        ( (This)->lpVtbl->SetGPUThreadPriority(This,Priority) ) 

    #define DXGI_IDXGIDevice_GetGPUThreadPriority(This,pPriority)    \
        ( (This)->lpVtbl->GetGPUThreadPriority(This,pPriority) ) 

#endif


/* IDXGIFactory1 */

#if defined(__cplusplus)

    #define DXGI_IDXGIFactory1_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGIFactory1_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGIFactory1_Release(This) \
        ( (This)->Release() ) 

    #define DXGI_IDXGIFactory1_SetPrivateData(This,Name,DataSize,pData)  \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGIFactory1_SetPrivateDataInterface(This,Name,pUnknown)   \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGIFactory1_GetPrivateData(This,Name,pDataSize,pData) \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGIFactory1_GetParent(This,riid,ppParent) \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGIFactory1_EnumAdapters(This,Adapter,ppAdapter)  \
        ( (This)->EnumAdapters(Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory1_MakeWindowAssociation(This,WindowHandle,Flags)    \
        ( (This)->MakeWindowAssociation(WindowHandle,Flags) ) 

    #define DXGI_IDXGIFactory1_GetWindowAssociation(This,pWindowHandle)  \
        ( (This)->GetWindowAssociation(pWindowHandle) ) 

    #define DXGI_IDXGIFactory1_CreateSwapChain(This,pDevice,pDesc,ppSwapChain)   \
        ( (This)->CreateSwapChain(pDevice,pDesc,ppSwapChain) ) 

    #define DXGI_IDXGIFactory1_CreateSoftwareAdapter(This,Module,ppAdapter)  \
        ( (This)->CreateSoftwareAdapter(Module,ppAdapter) ) 

    #define DXGI_IDXGIFactory1_EnumAdapters1(This,Adapter,ppAdapter) \
        ( (This)->EnumAdapters1(Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory1_IsCurrent(This)   \
        ( (This)->IsCurrent() ) 

#else /* C interface */

    #define DXGI_IDXGIFactory1_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGIFactory1_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGIFactory1_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGIFactory1_SetPrivateData(This,Name,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGIFactory1_SetPrivateDataInterface(This,Name,pUnknown)   \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGIFactory1_GetPrivateData(This,Name,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGIFactory1_GetParent(This,riid,ppParent) \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGIFactory1_EnumAdapters(This,Adapter,ppAdapter)  \
        ( (This)->lpVtbl->EnumAdapters(This,Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory1_MakeWindowAssociation(This,WindowHandle,Flags)    \
        ( (This)->lpVtbl->MakeWindowAssociation(This,WindowHandle,Flags) ) 

    #define DXGI_IDXGIFactory1_GetWindowAssociation(This,pWindowHandle)  \
        ( (This)->lpVtbl->GetWindowAssociation(This,pWindowHandle) ) 

    #define DXGI_IDXGIFactory1_CreateSwapChain(This,pDevice,pDesc,ppSwapChain)   \
        ( (This)->lpVtbl->CreateSwapChain(This,pDevice,pDesc,ppSwapChain) ) 

    #define DXGI_IDXGIFactory1_CreateSoftwareAdapter(This,Module,ppAdapter)  \
        ( (This)->lpVtbl->CreateSoftwareAdapter(This,Module,ppAdapter) ) 

    #define DXGI_IDXGIFactory1_EnumAdapters1(This,Adapter,ppAdapter) \
        ( (This)->lpVtbl->EnumAdapters1(This,Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory1_IsCurrent(This)   \
        ( (This)->lpVtbl->IsCurrent(This) ) 

#endif


/* IDXGIAdapter1 */

#if defined(__cplusplus)

    #define DXGI_IDXGIAdapter1_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGIAdapter1_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGIAdapter1_Release(This) \
        ( (This)->Release() ) 

    #define DXGI_IDXGIAdapter1_SetPrivateData(This,Name,DataSize,pData)  \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGIAdapter1_SetPrivateDataInterface(This,Name,pUnknown)   \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGIAdapter1_GetPrivateData(This,Name,pDataSize,pData) \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGIAdapter1_GetParent(This,riid,ppParent) \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGIAdapter1_EnumOutputs(This,Output,ppOutput) \
        ( (This)->EnumOutputs(Output,ppOutput) ) 

    #define DXGI_IDXGIAdapter1_GetDesc(This,pDesc)   \
        ( (This)->GetDesc(pDesc) ) 

    #define DXGI_IDXGIAdapter1_CheckInterfaceSupport(This,InterfaceName,pUMDVersion) \
        ( (This)->CheckInterfaceSupport(InterfaceName,pUMDVersion) ) 

    #define DXGI_IDXGIAdapter1_GetDesc1(This,pDesc)  \
        ( (This)->GetDesc1(pDesc) ) 

#else /* C interface */

    #define DXGI_IDXGIAdapter1_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGIAdapter1_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGIAdapter1_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGIAdapter1_SetPrivateData(This,Name,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGIAdapter1_SetPrivateDataInterface(This,Name,pUnknown)   \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGIAdapter1_GetPrivateData(This,Name,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGIAdapter1_GetParent(This,riid,ppParent) \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGIAdapter1_EnumOutputs(This,Output,ppOutput) \
        ( (This)->lpVtbl->EnumOutputs(This,Output,ppOutput) ) 

    #define DXGI_IDXGIAdapter1_GetDesc(This,pDesc)   \
        ( (This)->lpVtbl->GetDesc(This,pDesc) ) 

    #define DXGI_IDXGIAdapter1_CheckInterfaceSupport(This,InterfaceName,pUMDVersion) \
        ( (This)->lpVtbl->CheckInterfaceSupport(This,InterfaceName,pUMDVersion) ) 

    #define DXGI_IDXGIAdapter1_GetDesc1(This,pDesc)  \
        ( (This)->lpVtbl->GetDesc1(This,pDesc) ) 

#endif


/* IDXGIDevice1 */

#if defined(__cplusplus)

    #define DXGI_IDXGIDevice1_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGIDevice1_AddRef(This)   \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGIDevice1_Release(This)  \
        ( (This)->Release() ) 

    #define DXGI_IDXGIDevice1_SetPrivateData(This,Name,DataSize,pData)   \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGIDevice1_SetPrivateDataInterface(This,Name,pUnknown)    \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGIDevice1_GetPrivateData(This,Name,pDataSize,pData)  \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGIDevice1_GetParent(This,riid,ppParent)  \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGIDevice1_GetAdapter(This,pAdapter)  \
        ( (This)->GetAdapter(pAdapter) ) 

    #define DXGI_IDXGIDevice1_CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface)  \
        ( (This)->CreateSurface(pDesc,NumSurfaces,Usage,pSharedResource,ppSurface) ) 

    #define DXGI_IDXGIDevice1_QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources) \
        ( (This)->QueryResourceResidency(ppResources,pResidencyStatus,NumResources) ) 

    #define DXGI_IDXGIDevice1_SetGPUThreadPriority(This,Priority)    \
        ( (This)->SetGPUThreadPriority(Priority) ) 

    #define DXGI_IDXGIDevice1_GetGPUThreadPriority(This,pPriority)   \
        ( (This)->GetGPUThreadPriority(pPriority) ) 

    #define DXGI_IDXGIDevice1_SetMaximumFrameLatency(This,MaxLatency)    \
        ( (This)->SetMaximumFrameLatency(MaxLatency) ) 

    #define DXGI_IDXGIDevice1_GetMaximumFrameLatency(This,pMaxLatency)   \
        ( (This)->GetMaximumFrameLatency(pMaxLatency) )

#else /* C interface */

    #define DXGI_IDXGIDevice1_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGIDevice1_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGIDevice1_Release(This)  \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGIDevice1_SetPrivateData(This,Name,DataSize,pData)   \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGIDevice1_SetPrivateDataInterface(This,Name,pUnknown)    \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGIDevice1_GetPrivateData(This,Name,pDataSize,pData)  \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGIDevice1_GetParent(This,riid,ppParent)  \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGIDevice1_GetAdapter(This,pAdapter)  \
        ( (This)->lpVtbl->GetAdapter(This,pAdapter) ) 

    #define DXGI_IDXGIDevice1_CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface)  \
        ( (This)->lpVtbl->CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface) ) 

    #define DXGI_IDXGIDevice1_QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources) \
        ( (This)->lpVtbl->QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources) ) 

    #define DXGI_IDXGIDevice1_SetGPUThreadPriority(This,Priority)    \
        ( (This)->lpVtbl->SetGPUThreadPriority(This,Priority) ) 

    #define DXGI_IDXGIDevice1_GetGPUThreadPriority(This,pPriority)   \
        ( (This)->lpVtbl->GetGPUThreadPriority(This,pPriority) ) 

    #define DXGI_IDXGIDevice1_SetMaximumFrameLatency(This,MaxLatency)    \
        ( (This)->lpVtbl->SetMaximumFrameLatency(This,MaxLatency) ) 

    #define DXGI_IDXGIDevice1_GetMaximumFrameLatency(This,pMaxLatency)   \
        ( (This)->lpVtbl->GetMaximumFrameLatency(This,pMaxLatency) )

#endif


/* IDXGIDevice2 */

#if defined(__cplusplus)

    #define DXGI_IDXGIDevice2_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGIDevice2_AddRef(This)   \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGIDevice2_Release(This)  \
        ( (This)->Release() ) 

    #define DXGI_IDXGIDevice2_SetPrivateData(This,Name,DataSize,pData)   \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGIDevice2_SetPrivateDataInterface(This,Name,pUnknown)    \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGIDevice2_GetPrivateData(This,Name,pDataSize,pData)  \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGIDevice2_GetParent(This,riid,ppParent)  \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGIDevice2_GetAdapter(This,pAdapter)  \
        ( (This)->GetAdapter(pAdapter) ) 

    #define DXGI_IDXGIDevice2_CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface)  \
        ( (This)->CreateSurface(pDesc,NumSurfaces,Usage,pSharedResource,ppSurface) ) 

    #define DXGI_IDXGIDevice2_QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources) \
        ( (This)->QueryResourceResidency(ppResources,pResidencyStatus,NumResources) ) 

    #define DXGI_IDXGIDevice2_SetGPUThreadPriority(This,Priority)    \
        ( (This)->SetGPUThreadPriority(Priority) ) 

    #define DXGI_IDXGIDevice2_GetGPUThreadPriority(This,pPriority)   \
        ( (This)->GetGPUThreadPriority(pPriority) ) 

    #define DXGI_IDXGIDevice2_SetMaximumFrameLatency(This,MaxLatency)    \
        ( (This)->SetMaximumFrameLatency(MaxLatency) ) 

    #define DXGI_IDXGIDevice2_GetMaximumFrameLatency(This,pMaxLatency)   \
        ( (This)->GetMaximumFrameLatency(pMaxLatency) ) 

    #define DXGI_IDXGIDevice2_OfferResources(This,NumResources,ppResources,Priority) \
        ( (This)->OfferResources(NumResources,ppResources,Priority) ) 

    #define DXGI_IDXGIDevice2_ReclaimResources(This,NumResources,ppResources,pDiscarded) \
        ( (This)->ReclaimResources(NumResources,ppResources,pDiscarded) ) 

    #define DXGI_IDXGIDevice2_EnqueueSetEvent(This,hEvent)   \
        ( (This)->EnqueueSetEvent(hEvent) ) 

#else /* C interface */

    #define DXGI_IDXGIDevice2_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGIDevice2_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGIDevice2_Release(This)  \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGIDevice2_SetPrivateData(This,Name,DataSize,pData)   \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGIDevice2_SetPrivateDataInterface(This,Name,pUnknown)    \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGIDevice2_GetPrivateData(This,Name,pDataSize,pData)  \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGIDevice2_GetParent(This,riid,ppParent)  \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGIDevice2_GetAdapter(This,pAdapter)  \
        ( (This)->lpVtbl->GetAdapter(This,pAdapter) ) 

    #define DXGI_IDXGIDevice2_CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface)  \
        ( (This)->lpVtbl->CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface) ) 

    #define DXGI_IDXGIDevice2_QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources) \
        ( (This)->lpVtbl->QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources) ) 

    #define DXGI_IDXGIDevice2_SetGPUThreadPriority(This,Priority)    \
        ( (This)->lpVtbl->SetGPUThreadPriority(This,Priority) ) 

    #define DXGI_IDXGIDevice2_GetGPUThreadPriority(This,pPriority)   \
        ( (This)->lpVtbl->GetGPUThreadPriority(This,pPriority) ) 

    #define DXGI_IDXGIDevice2_SetMaximumFrameLatency(This,MaxLatency)    \
        ( (This)->lpVtbl->SetMaximumFrameLatency(This,MaxLatency) ) 

    #define DXGI_IDXGIDevice2_GetMaximumFrameLatency(This,pMaxLatency)   \
        ( (This)->lpVtbl->GetMaximumFrameLatency(This,pMaxLatency) ) 

    #define DXGI_IDXGIDevice2_OfferResources(This,NumResources,ppResources,Priority) \
        ( (This)->lpVtbl->OfferResources(This,NumResources,ppResources,Priority) ) 

    #define DXGI_IDXGIDevice2_ReclaimResources(This,NumResources,ppResources,pDiscarded) \
        ( (This)->lpVtbl->ReclaimResources(This,NumResources,ppResources,pDiscarded) ) 

    #define DXGI_IDXGIDevice2_EnqueueSetEvent(This,hEvent)   \
        ( (This)->lpVtbl->EnqueueSetEvent(This,hEvent) ) 

#endif


/* IDXGISwapChain1 */

#if defined(__cplusplus)

    #define DXGI_IDXGISwapChain1_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGISwapChain1_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGISwapChain1_Release(This)   \
        ( (This)->Release() ) 

    #define DXGI_IDXGISwapChain1_SetPrivateData(This,Name,DataSize,pData)    \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGISwapChain1_SetPrivateDataInterface(This,Name,pUnknown) \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGISwapChain1_GetPrivateData(This,Name,pDataSize,pData)   \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGISwapChain1_GetParent(This,riid,ppParent)   \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGISwapChain1_GetDevice(This,riid,ppDevice)   \
        ( (This)->GetDevice(riid,ppDevice) ) 

    #define DXGI_IDXGISwapChain1_Present(This,SyncInterval,Flags)    \
        ( (This)->Present(SyncInterval,Flags) ) 

    #define DXGI_IDXGISwapChain1_GetBuffer(This,Buffer,riid,ppSurface)   \
        ( (This)->GetBuffer(Buffer,riid,ppSurface) ) 

    #define DXGI_IDXGISwapChain1_SetFullscreenState(This,Fullscreen,pTarget) \
        ( (This)->SetFullscreenState(Fullscreen,pTarget) ) 

    #define DXGI_IDXGISwapChain1_GetFullscreenState(This,pFullscreen,ppTarget)   \
        ( (This)->GetFullscreenState(pFullscreen,ppTarget) ) 

    #define DXGI_IDXGISwapChain1_GetDesc(This,pDesc) \
        ( (This)->GetDesc(pDesc) ) 

    #define DXGI_IDXGISwapChain1_ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags)   \
        ( (This)->ResizeBuffers(BufferCount,Width,Height,NewFormat,SwapChainFlags) ) 

    #define DXGI_IDXGISwapChain1_ResizeTarget(This,pNewTargetParameters) \
        ( (This)->ResizeTarget(pNewTargetParameters) ) 

    #define DXGI_IDXGISwapChain1_GetContainingOutput(This,ppOutput)  \
        ( (This)->GetContainingOutput(ppOutput) ) 

    #define DXGI_IDXGISwapChain1_GetFrameStatistics(This,pStats) \
        ( (This)->GetFrameStatistics(pStats) ) 

    #define DXGI_IDXGISwapChain1_GetLastPresentCount(This,pLastPresentCount) \
        ( (This)->GetLastPresentCount(pLastPresentCount) ) 

    #define DXGI_IDXGISwapChain1_GetDesc1(This,pDesc)    \
        ( (This)->GetDesc1(pDesc) ) 

    #define DXGI_IDXGISwapChain1_GetFullscreenDesc(This,pDesc)   \
        ( (This)->GetFullscreenDesc(pDesc) ) 

    #define DXGI_IDXGISwapChain1_GetHwnd(This,pHwnd) \
        ( (This)->GetHwnd(pHwnd) ) 

    #define DXGI_IDXGISwapChain1_GetCoreWindow(This,refiid,ppUnk)    \
        ( (This)->GetCoreWindow(refiid,ppUnk) ) 

    #define DXGI_IDXGISwapChain1_Present1(This,SyncInterval,PresentFlags,pPresentParameters) \
        ( (This)->Present1(SyncInterval,PresentFlags,pPresentParameters) ) 

    #define DXGI_IDXGISwapChain1_IsTemporaryMonoSupported(This)  \
        ( (This)->IsTemporaryMonoSupported() ) 

    #define DXGI_IDXGISwapChain1_GetRestrictToOutput(This,ppRestrictToOutput)    \
        ( (This)->GetRestrictToOutput(ppRestrictToOutput) ) 

    #define DXGI_IDXGISwapChain1_SetBackgroundColor(This,pColor) \
        ( (This)->SetBackgroundColor(pColor) ) 

    #define DXGI_IDXGISwapChain1_GetBackgroundColor(This,pColor) \
        ( (This)->GetBackgroundColor(pColor) ) 

    #define DXGI_IDXGISwapChain1_SetRotation(This,Rotation)  \
        ( (This)->SetRotation(Rotation) ) 

    #define DXGI_IDXGISwapChain1_GetRotation(This,pRotation) \
        ( (This)->GetRotation(pRotation) ) 

#else /* C interface */

    #define DXGI_IDXGISwapChain1_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGISwapChain1_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGISwapChain1_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGISwapChain1_SetPrivateData(This,Name,DataSize,pData)    \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGISwapChain1_SetPrivateDataInterface(This,Name,pUnknown) \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGISwapChain1_GetPrivateData(This,Name,pDataSize,pData)   \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGISwapChain1_GetParent(This,riid,ppParent)   \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGISwapChain1_GetDevice(This,riid,ppDevice)   \
        ( (This)->lpVtbl->GetDevice(This,riid,ppDevice) ) 

    #define DXGI_IDXGISwapChain1_Present(This,SyncInterval,Flags)    \
        ( (This)->lpVtbl->Present(This,SyncInterval,Flags) ) 

    #define DXGI_IDXGISwapChain1_GetBuffer(This,Buffer,riid,ppSurface)   \
        ( (This)->lpVtbl->GetBuffer(This,Buffer,riid,ppSurface) ) 

    #define DXGI_IDXGISwapChain1_SetFullscreenState(This,Fullscreen,pTarget) \
        ( (This)->lpVtbl->SetFullscreenState(This,Fullscreen,pTarget) ) 

    #define DXGI_IDXGISwapChain1_GetFullscreenState(This,pFullscreen,ppTarget)   \
        ( (This)->lpVtbl->GetFullscreenState(This,pFullscreen,ppTarget) ) 

    #define DXGI_IDXGISwapChain1_GetDesc(This,pDesc) \
        ( (This)->lpVtbl->GetDesc(This,pDesc) ) 

    #define DXGI_IDXGISwapChain1_ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags)   \
        ( (This)->lpVtbl->ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags) ) 

    #define DXGI_IDXGISwapChain1_ResizeTarget(This,pNewTargetParameters) \
        ( (This)->lpVtbl->ResizeTarget(This,pNewTargetParameters) ) 

    #define DXGI_IDXGISwapChain1_GetContainingOutput(This,ppOutput)  \
        ( (This)->lpVtbl->GetContainingOutput(This,ppOutput) ) 

    #define DXGI_IDXGISwapChain1_GetFrameStatistics(This,pStats) \
        ( (This)->lpVtbl->GetFrameStatistics(This,pStats) ) 

    #define DXGI_IDXGISwapChain1_GetLastPresentCount(This,pLastPresentCount) \
        ( (This)->lpVtbl->GetLastPresentCount(This,pLastPresentCount) ) 

    #define DXGI_IDXGISwapChain1_GetDesc1(This,pDesc)    \
        ( (This)->lpVtbl->GetDesc1(This,pDesc) ) 

    #define DXGI_IDXGISwapChain1_GetFullscreenDesc(This,pDesc)   \
        ( (This)->lpVtbl->GetFullscreenDesc(This,pDesc) ) 

    #define DXGI_IDXGISwapChain1_GetHwnd(This,pHwnd) \
        ( (This)->lpVtbl->GetHwnd(This,pHwnd) ) 

    #define DXGI_IDXGISwapChain1_GetCoreWindow(This,refiid,ppUnk)    \
        ( (This)->lpVtbl->GetCoreWindow(This,refiid,ppUnk) ) 

    #define DXGI_IDXGISwapChain1_Present1(This,SyncInterval,PresentFlags,pPresentParameters) \
        ( (This)->lpVtbl->Present1(This,SyncInterval,PresentFlags,pPresentParameters) ) 

    #define DXGI_IDXGISwapChain1_IsTemporaryMonoSupported(This)  \
        ( (This)->lpVtbl->IsTemporaryMonoSupported(This) ) 

    #define DXGI_IDXGISwapChain1_GetRestrictToOutput(This,ppRestrictToOutput)    \
        ( (This)->lpVtbl->GetRestrictToOutput(This,ppRestrictToOutput) ) 

    #define DXGI_IDXGISwapChain1_SetBackgroundColor(This,pColor) \
        ( (This)->lpVtbl->SetBackgroundColor(This,pColor) ) 

    #define DXGI_IDXGISwapChain1_GetBackgroundColor(This,pColor) \
        ( (This)->lpVtbl->GetBackgroundColor(This,pColor) ) 

    #define DXGI_IDXGISwapChain1_SetRotation(This,Rotation)  \
        ( (This)->lpVtbl->SetRotation(This,Rotation) ) 

    #define DXGI_IDXGISwapChain1_GetRotation(This,pRotation) \
        ( (This)->lpVtbl->GetRotation(This,pRotation) ) 

#endif


/* IDXGIFactory2 */

#if defined(__cplusplus)

    #define DXGI_IDXGIFactory2_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGIFactory2_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGIFactory2_Release(This) \
        ( (This)->Release() ) 

    #define DXGI_IDXGIFactory2_SetPrivateData(This,Name,DataSize,pData)  \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGIFactory2_SetPrivateDataInterface(This,Name,pUnknown)   \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGIFactory2_GetPrivateData(This,Name,pDataSize,pData) \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGIFactory2_GetParent(This,riid,ppParent) \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGIFactory2_EnumAdapters(This,Adapter,ppAdapter)  \
        ( (This)->EnumAdapters(Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory2_MakeWindowAssociation(This,WindowHandle,Flags)    \
        ( (This)->MakeWindowAssociation(WindowHandle,Flags) ) 

    #define DXGI_IDXGIFactory2_GetWindowAssociation(This,pWindowHandle)  \
        ( (This)->GetWindowAssociation(pWindowHandle) ) 

    #define DXGI_IDXGIFactory2_CreateSwapChain(This,pDevice,pDesc,ppSwapChain)   \
        ( (This)->CreateSwapChain(pDevice,pDesc,ppSwapChain) ) 

    #define DXGI_IDXGIFactory2_CreateSoftwareAdapter(This,Module,ppAdapter)  \
        ( (This)->CreateSoftwareAdapter(Module,ppAdapter) ) 

    #define DXGI_IDXGIFactory2_EnumAdapters1(This,Adapter,ppAdapter) \
        ( (This)->EnumAdapters1(Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory2_IsCurrent(This)   \
        ( (This)->IsCurrent() ) 

    #define DXGI_IDXGIFactory2_IsWindowedStereoEnabled(This) \
        ( (This)->IsWindowedStereoEnabled() ) 

    #define DXGI_IDXGIFactory2_CreateSwapChainForHwnd(This,pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) \
        ( (This)->CreateSwapChainForHwnd(pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory2_CreateSwapChainForCoreWindow(This,pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain)    \
        ( (This)->CreateSwapChainForCoreWindow(pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory2_GetSharedResourceAdapterLuid(This,hResource,pLuid)    \
        ( (This)->GetSharedResourceAdapterLuid(hResource,pLuid) ) 

    #define DXGI_IDXGIFactory2_RegisterStereoStatusWindow(This,WindowHandle,wMsg,pdwCookie)  \
        ( (This)->RegisterStereoStatusWindow(WindowHandle,wMsg,pdwCookie) ) 

    #define DXGI_IDXGIFactory2_RegisterStereoStatusEvent(This,hEvent,pdwCookie)  \
        ( (This)->RegisterStereoStatusEvent(hEvent,pdwCookie) ) 

    #define DXGI_IDXGIFactory2_UnregisterStereoStatus(This,dwCookie) \
        ( (This)->UnregisterStereoStatus(dwCookie) ) 

    #define DXGI_IDXGIFactory2_RegisterOcclusionStatusWindow(This,WindowHandle,wMsg,pdwCookie)   \
        ( (This)->RegisterOcclusionStatusWindow(WindowHandle,wMsg,pdwCookie) ) 

    #define DXGI_IDXGIFactory2_RegisterOcclusionStatusEvent(This,hEvent,pdwCookie)   \
        ( (This)->RegisterOcclusionStatusEvent(hEvent,pdwCookie) ) 

    #define DXGI_IDXGIFactory2_UnregisterOcclusionStatus(This,dwCookie)  \
        ( (This)->UnregisterOcclusionStatus(dwCookie) ) 

    #define DXGI_IDXGIFactory2_CreateSwapChainForComposition(This,pDevice,pDesc,pRestrictToOutput,ppSwapChain)   \
        ( (This)->CreateSwapChainForComposition(pDevice,pDesc,pRestrictToOutput,ppSwapChain) ) 

#else /* C interface */

    #define DXGI_IDXGIFactory2_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGIFactory2_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGIFactory2_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGIFactory2_SetPrivateData(This,Name,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGIFactory2_SetPrivateDataInterface(This,Name,pUnknown)   \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGIFactory2_GetPrivateData(This,Name,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGIFactory2_GetParent(This,riid,ppParent) \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGIFactory2_EnumAdapters(This,Adapter,ppAdapter)  \
        ( (This)->lpVtbl->EnumAdapters(This,Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory2_MakeWindowAssociation(This,WindowHandle,Flags)    \
        ( (This)->lpVtbl->MakeWindowAssociation(This,WindowHandle,Flags) ) 

    #define DXGI_IDXGIFactory2_GetWindowAssociation(This,pWindowHandle)  \
        ( (This)->lpVtbl->GetWindowAssociation(This,pWindowHandle) ) 

    #define DXGI_IDXGIFactory2_CreateSwapChain(This,pDevice,pDesc,ppSwapChain)   \
        ( (This)->lpVtbl->CreateSwapChain(This,pDevice,pDesc,ppSwapChain) ) 

    #define DXGI_IDXGIFactory2_CreateSoftwareAdapter(This,Module,ppAdapter)  \
        ( (This)->lpVtbl->CreateSoftwareAdapter(This,Module,ppAdapter) ) 

    #define DXGI_IDXGIFactory2_EnumAdapters1(This,Adapter,ppAdapter) \
        ( (This)->lpVtbl->EnumAdapters1(This,Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory2_IsCurrent(This)   \
        ( (This)->lpVtbl->IsCurrent(This) ) 

    #define DXGI_IDXGIFactory2_IsWindowedStereoEnabled(This) \
        ( (This)->lpVtbl->IsWindowedStereoEnabled(This) ) 

    #define DXGI_IDXGIFactory2_CreateSwapChainForHwnd(This,pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) \
        ( (This)->lpVtbl->CreateSwapChainForHwnd(This,pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory2_CreateSwapChainForCoreWindow(This,pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain)    \
        ( (This)->lpVtbl->CreateSwapChainForCoreWindow(This,pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory2_GetSharedResourceAdapterLuid(This,hResource,pLuid)    \
        ( (This)->lpVtbl->GetSharedResourceAdapterLuid(This,hResource,pLuid) ) 

    #define DXGI_IDXGIFactory2_RegisterStereoStatusWindow(This,WindowHandle,wMsg,pdwCookie)  \
        ( (This)->lpVtbl->RegisterStereoStatusWindow(This,WindowHandle,wMsg,pdwCookie) ) 

    #define DXGI_IDXGIFactory2_RegisterStereoStatusEvent(This,hEvent,pdwCookie)  \
        ( (This)->lpVtbl->RegisterStereoStatusEvent(This,hEvent,pdwCookie) ) 

    #define DXGI_IDXGIFactory2_UnregisterStereoStatus(This,dwCookie) \
        ( (This)->lpVtbl->UnregisterStereoStatus(This,dwCookie) ) 

    #define DXGI_IDXGIFactory2_RegisterOcclusionStatusWindow(This,WindowHandle,wMsg,pdwCookie)   \
        ( (This)->lpVtbl->RegisterOcclusionStatusWindow(This,WindowHandle,wMsg,pdwCookie) ) 

    #define DXGI_IDXGIFactory2_RegisterOcclusionStatusEvent(This,hEvent,pdwCookie)   \
        ( (This)->lpVtbl->RegisterOcclusionStatusEvent(This,hEvent,pdwCookie) ) 

    #define DXGI_IDXGIFactory2_UnregisterOcclusionStatus(This,dwCookie)  \
        ( (This)->lpVtbl->UnregisterOcclusionStatus(This,dwCookie) ) 

    #define DXGI_IDXGIFactory2_CreateSwapChainForComposition(This,pDevice,pDesc,pRestrictToOutput,ppSwapChain)   \
        ( (This)->lpVtbl->CreateSwapChainForComposition(This,pDevice,pDesc,pRestrictToOutput,ppSwapChain) ) 

#endif


/* IDXGISwapChain3 */

#if defined(__cplusplus)

    #define DXGI_IDXGISwapChain3_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGISwapChain3_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGISwapChain3_Release(This)   \
        ( (This)->Release() ) 

    #define DXGI_IDXGISwapChain3_SetPrivateData(This,Name,DataSize,pData)    \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGISwapChain3_SetPrivateDataInterface(This,Name,pUnknown) \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGISwapChain3_GetPrivateData(This,Name,pDataSize,pData)   \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGISwapChain3_GetParent(This,riid,ppParent)   \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGISwapChain3_GetDevice(This,riid,ppDevice)   \
        ( (This)->GetDevice(riid,ppDevice) ) 

    #define DXGI_IDXGISwapChain3_Present(This,SyncInterval,Flags)    \
        ( (This)->Present(SyncInterval,Flags) ) 

    #define DXGI_IDXGISwapChain3_GetBuffer(This,Buffer,riid,ppSurface)   \
        ( (This)->GetBuffer(Buffer,riid,ppSurface) ) 

    #define DXGI_IDXGISwapChain3_SetFullscreenState(This,Fullscreen,pTarget) \
        ( (This)->SetFullscreenState(Fullscreen,pTarget) ) 

    #define DXGI_IDXGISwapChain3_GetFullscreenState(This,pFullscreen,ppTarget)   \
        ( (This)->GetFullscreenState(pFullscreen,ppTarget) ) 

    #define DXGI_IDXGISwapChain3_GetDesc(This,pDesc) \
        ( (This)->GetDesc(pDesc) ) 

    #define DXGI_IDXGISwapChain3_ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags)   \
        ( (This)->ResizeBuffers(BufferCount,Width,Height,NewFormat,SwapChainFlags) ) 

    #define DXGI_IDXGISwapChain3_ResizeTarget(This,pNewTargetParameters) \
        ( (This)->ResizeTarget(pNewTargetParameters) ) 

    #define DXGI_IDXGISwapChain3_GetContainingOutput(This,ppOutput)  \
        ( (This)->GetContainingOutput(ppOutput) ) 

    #define DXGI_IDXGISwapChain3_GetFrameStatistics(This,pStats) \
        ( (This)->GetFrameStatistics(pStats) ) 

    #define DXGI_IDXGISwapChain3_GetLastPresentCount(This,pLastPresentCount) \
        ( (This)->GetLastPresentCount(pLastPresentCount) ) 

    #define DXGI_IDXGISwapChain3_GetDesc1(This,pDesc)    \
        ( (This)->GetDesc1(pDesc) ) 

    #define DXGI_IDXGISwapChain3_GetFullscreenDesc(This,pDesc)   \
        ( (This)->GetFullscreenDesc(pDesc) ) 

    #define DXGI_IDXGISwapChain3_GetHwnd(This,pHwnd) \
        ( (This)->GetHwnd(pHwnd) ) 

    #define DXGI_IDXGISwapChain3_GetCoreWindow(This,refiid,ppUnk)    \
        ( (This)->GetCoreWindow(refiid,ppUnk) ) 

    #define DXGI_IDXGISwapChain3_Present1(This,SyncInterval,PresentFlags,pPresentParameters) \
        ( (This)->Present1(SyncInterval,PresentFlags,pPresentParameters) ) 

    #define DXGI_IDXGISwapChain3_IsTemporaryMonoSupported(This)  \
        ( (This)->IsTemporaryMonoSupported() ) 

    #define DXGI_IDXGISwapChain3_GetRestrictToOutput(This,ppRestrictToOutput)    \
        ( (This)->GetRestrictToOutput(ppRestrictToOutput) ) 

    #define DXGI_IDXGISwapChain3_SetBackgroundColor(This,pColor) \
        ( (This)->SetBackgroundColor(pColor) ) 

    #define DXGI_IDXGISwapChain3_GetBackgroundColor(This,pColor) \
        ( (This)->GetBackgroundColor(pColor) ) 

    #define DXGI_IDXGISwapChain3_SetRotation(This,Rotation)  \
        ( (This)->SetRotation(Rotation) ) 

    #define DXGI_IDXGISwapChain3_GetRotation(This,pRotation) \
        ( (This)->GetRotation(pRotation) ) 

    #define DXGI_IDXGISwapChain3_SetSourceSize(This,Width,Height)    \
        ( (This)->SetSourceSize(Width,Height) ) 

    #define DXGI_IDXGISwapChain3_GetSourceSize(This,pWidth,pHeight)  \
        ( (This)->GetSourceSize(pWidth,pHeight) ) 

    #define DXGI_IDXGISwapChain3_SetMaximumFrameLatency(This,MaxLatency) \
        ( (This)->SetMaximumFrameLatency(MaxLatency) ) 

    #define DXGI_IDXGISwapChain3_GetMaximumFrameLatency(This,pMaxLatency)    \
        ( (This)->GetMaximumFrameLatency(pMaxLatency) ) 

    #define DXGI_IDXGISwapChain3_GetFrameLatencyWaitableObject(This) \
        ( (This)->GetFrameLatencyWaitableObject() ) 

    #define DXGI_IDXGISwapChain3_SetMatrixTransform(This,pMatrix)    \
        ( (This)->SetMatrixTransform(pMatrix) ) 

    #define DXGI_IDXGISwapChain3_GetMatrixTransform(This,pMatrix)    \
        ( (This)->GetMatrixTransform(pMatrix) ) 

    #define DXGI_IDXGISwapChain3_GetCurrentBackBufferIndex(This) \
        ( (This)->GetCurrentBackBufferIndex() ) 

    #define DXGI_IDXGISwapChain3_CheckColorSpaceSupport(This,ColorSpace,pColorSpaceSupport)  \
        ( (This)->CheckColorSpaceSupport(ColorSpace,pColorSpaceSupport) ) 

    #define DXGI_IDXGISwapChain3_SetColorSpace1(This,ColorSpace) \
        ( (This)->SetColorSpace1(ColorSpace) ) 

    #define DXGI_IDXGISwapChain3_ResizeBuffers1(This,BufferCount,Width,Height,Format,SwapChainFlags,pCreationNodeMask,ppPresentQueue)    \
        ( (This)->ResizeBuffers1(BufferCount,Width,Height,Format,SwapChainFlags,pCreationNodeMask,ppPresentQueue) )

#else

    #define DXGI_IDXGISwapChain3_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGISwapChain3_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGISwapChain3_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGISwapChain3_SetPrivateData(This,Name,DataSize,pData)    \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGISwapChain3_SetPrivateDataInterface(This,Name,pUnknown) \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGISwapChain3_GetPrivateData(This,Name,pDataSize,pData)   \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGISwapChain3_GetParent(This,riid,ppParent)   \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGISwapChain3_GetDevice(This,riid,ppDevice)   \
        ( (This)->lpVtbl->GetDevice(This,riid,ppDevice) ) 

    #define DXGI_IDXGISwapChain3_Present(This,SyncInterval,Flags)    \
        ( (This)->lpVtbl->Present(This,SyncInterval,Flags) ) 

    #define DXGI_IDXGISwapChain3_GetBuffer(This,Buffer,riid,ppSurface)   \
        ( (This)->lpVtbl->GetBuffer(This,Buffer,riid,ppSurface) ) 

    #define DXGI_IDXGISwapChain3_SetFullscreenState(This,Fullscreen,pTarget) \
        ( (This)->lpVtbl->SetFullscreenState(This,Fullscreen,pTarget) ) 

    #define DXGI_IDXGISwapChain3_GetFullscreenState(This,pFullscreen,ppTarget)   \
        ( (This)->lpVtbl->GetFullscreenState(This,pFullscreen,ppTarget) ) 

    #define DXGI_IDXGISwapChain3_GetDesc(This,pDesc) \
        ( (This)->lpVtbl->GetDesc(This,pDesc) ) 

    #define DXGI_IDXGISwapChain3_ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags)   \
        ( (This)->lpVtbl->ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags) ) 

    #define DXGI_IDXGISwapChain3_ResizeTarget(This,pNewTargetParameters) \
        ( (This)->lpVtbl->ResizeTarget(This,pNewTargetParameters) ) 

    #define DXGI_IDXGISwapChain3_GetContainingOutput(This,ppOutput)  \
        ( (This)->lpVtbl->GetContainingOutput(This,ppOutput) ) 

    #define DXGI_IDXGISwapChain3_GetFrameStatistics(This,pStats) \
        ( (This)->lpVtbl->GetFrameStatistics(This,pStats) ) 

    #define DXGI_IDXGISwapChain3_GetLastPresentCount(This,pLastPresentCount) \
        ( (This)->lpVtbl->GetLastPresentCount(This,pLastPresentCount) ) 

    #define DXGI_IDXGISwapChain3_GetDesc1(This,pDesc)    \
        ( (This)->lpVtbl->GetDesc1(This,pDesc) ) 

    #define DXGI_IDXGISwapChain3_GetFullscreenDesc(This,pDesc)   \
        ( (This)->lpVtbl->GetFullscreenDesc(This,pDesc) ) 

    #define DXGI_IDXGISwapChain3_GetHwnd(This,pHwnd) \
        ( (This)->lpVtbl->GetHwnd(This,pHwnd) ) 

    #define DXGI_IDXGISwapChain3_GetCoreWindow(This,refiid,ppUnk)    \
        ( (This)->lpVtbl->GetCoreWindow(This,refiid,ppUnk) ) 

    #define DXGI_IDXGISwapChain3_Present1(This,SyncInterval,PresentFlags,pPresentParameters) \
        ( (This)->lpVtbl->Present1(This,SyncInterval,PresentFlags,pPresentParameters) ) 

    #define DXGI_IDXGISwapChain3_IsTemporaryMonoSupported(This)  \
        ( (This)->lpVtbl->IsTemporaryMonoSupported(This) ) 

    #define DXGI_IDXGISwapChain3_GetRestrictToOutput(This,ppRestrictToOutput)    \
        ( (This)->lpVtbl->GetRestrictToOutput(This,ppRestrictToOutput) ) 

    #define DXGI_IDXGISwapChain3_SetBackgroundColor(This,pColor) \
        ( (This)->lpVtbl->SetBackgroundColor(This,pColor) ) 

    #define DXGI_IDXGISwapChain3_GetBackgroundColor(This,pColor) \
        ( (This)->lpVtbl->GetBackgroundColor(This,pColor) ) 

    #define DXGI_IDXGISwapChain3_SetRotation(This,Rotation)  \
        ( (This)->lpVtbl->SetRotation(This,Rotation) ) 

    #define DXGI_IDXGISwapChain3_GetRotation(This,pRotation) \
        ( (This)->lpVtbl->GetRotation(This,pRotation) ) 

    #define DXGI_IDXGISwapChain3_SetSourceSize(This,Width,Height)    \
        ( (This)->lpVtbl->SetSourceSize(This,Width,Height) ) 

    #define DXGI_IDXGISwapChain3_GetSourceSize(This,pWidth,pHeight)  \
        ( (This)->lpVtbl->GetSourceSize(This,pWidth,pHeight) ) 

    #define DXGI_IDXGISwapChain3_SetMaximumFrameLatency(This,MaxLatency) \
        ( (This)->lpVtbl->SetMaximumFrameLatency(This,MaxLatency) ) 

    #define DXGI_IDXGISwapChain3_GetMaximumFrameLatency(This,pMaxLatency)    \
        ( (This)->lpVtbl->GetMaximumFrameLatency(This,pMaxLatency) ) 

    #define DXGI_IDXGISwapChain3_GetFrameLatencyWaitableObject(This) \
        ( (This)->lpVtbl->GetFrameLatencyWaitableObject(This) ) 

    #define DXGI_IDXGISwapChain3_SetMatrixTransform(This,pMatrix)    \
        ( (This)->lpVtbl->SetMatrixTransform(This,pMatrix) ) 

    #define DXGI_IDXGISwapChain3_GetMatrixTransform(This,pMatrix)    \
        ( (This)->lpVtbl->GetMatrixTransform(This,pMatrix) ) 

    #define DXGI_IDXGISwapChain3_GetCurrentBackBufferIndex(This) \
        ( (This)->lpVtbl->GetCurrentBackBufferIndex(This) ) 

    #define DXGI_IDXGISwapChain3_CheckColorSpaceSupport(This,ColorSpace,pColorSpaceSupport)  \
        ( (This)->lpVtbl->CheckColorSpaceSupport(This,ColorSpace,pColorSpaceSupport) ) 

    #define DXGI_IDXGISwapChain3_SetColorSpace1(This,ColorSpace) \
        ( (This)->lpVtbl->SetColorSpace1(This,ColorSpace) ) 

    #define DXGI_IDXGISwapChain3_ResizeBuffers1(This,BufferCount,Width,Height,Format,SwapChainFlags,pCreationNodeMask,ppPresentQueue)    \
        ( (This)->lpVtbl->ResizeBuffers1(This,BufferCount,Width,Height,Format,SwapChainFlags,pCreationNodeMask,ppPresentQueue) )

#endif


/* IDXGIFactory4 */

#if defined(__cplusplus)

    #define DXGI_IDXGIFactory4_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DXGI_IDXGIFactory4_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DXGI_IDXGIFactory4_Release(This) \
        ( (This)->Release() ) 

    #define DXGI_IDXGIFactory4_SetPrivateData(This,Name,DataSize,pData)  \
        ( (This)->SetPrivateData(Name,DataSize,pData) ) 

    #define DXGI_IDXGIFactory4_SetPrivateDataInterface(This,Name,pUnknown)   \
        ( (This)->SetPrivateDataInterface(Name,pUnknown) ) 

    #define DXGI_IDXGIFactory4_GetPrivateData(This,Name,pDataSize,pData) \
        ( (This)->GetPrivateData(Name,pDataSize,pData) ) 

    #define DXGI_IDXGIFactory4_GetParent(This,riid,ppParent) \
        ( (This)->GetParent(riid,ppParent) ) 

    #define DXGI_IDXGIFactory4_EnumAdapters(This,Adapter,ppAdapter)  \
        ( (This)->EnumAdapters(Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory4_MakeWindowAssociation(This,WindowHandle,Flags)    \
        ( (This)->MakeWindowAssociation(WindowHandle,Flags) ) 

    #define DXGI_IDXGIFactory4_GetWindowAssociation(This,pWindowHandle)  \
        ( (This)->GetWindowAssociation(pWindowHandle) ) 

    #define DXGI_IDXGIFactory4_CreateSwapChain(This,pDevice,pDesc,ppSwapChain)   \
        ( (This)->CreateSwapChain(pDevice,pDesc,ppSwapChain) ) 

    #define DXGI_IDXGIFactory4_CreateSoftwareAdapter(This,Module,ppAdapter)  \
        ( (This)->CreateSoftwareAdapter(Module,ppAdapter) ) 

    #define DXGI_IDXGIFactory4_EnumAdapters1(This,Adapter,ppAdapter) \
        ( (This)->EnumAdapters1(Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory4_IsCurrent(This)   \
        ( (This)->IsCurrent() ) 

    #define DXGI_IDXGIFactory4_IsWindowedStereoEnabled(This) \
        ( (This)->IsWindowedStereoEnabled() ) 

    #define DXGI_IDXGIFactory4_CreateSwapChainForHwnd(This,pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) \
        ( (This)->CreateSwapChainForHwnd(pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory4_CreateSwapChainForCoreWindow(This,pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain)    \
        ( (This)->CreateSwapChainForCoreWindow(pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory4_GetSharedResourceAdapterLuid(This,hResource,pLuid)    \
        ( (This)->GetSharedResourceAdapterLuid(hResource,pLuid) ) 

    #define DXGI_IDXGIFactory4_RegisterStereoStatusWindow(This,WindowHandle,wMsg,pdwCookie)  \
        ( (This)->RegisterStereoStatusWindow(WindowHandle,wMsg,pdwCookie) ) 

    #define DXGI_IDXGIFactory4_RegisterStereoStatusEvent(This,hEvent,pdwCookie)  \
        ( (This)->RegisterStereoStatusEvent(hEvent,pdwCookie) ) 

    #define DXGI_IDXGIFactory4_UnregisterStereoStatus(This,dwCookie) \
        ( (This)->UnregisterStereoStatus(dwCookie) ) 

    #define DXGI_IDXGIFactory4_RegisterOcclusionStatusWindow(This,WindowHandle,wMsg,pdwCookie)   \
        ( (This)->RegisterOcclusionStatusWindow(WindowHandle,wMsg,pdwCookie) ) 

    #define DXGI_IDXGIFactory4_RegisterOcclusionStatusEvent(This,hEvent,pdwCookie)   \
        ( (This)->RegisterOcclusionStatusEvent(hEvent,pdwCookie) ) 

    #define DXGI_IDXGIFactory4_UnregisterOcclusionStatus(This,dwCookie)  \
        ( (This)->UnregisterOcclusionStatus(dwCookie) ) 

    #define DXGI_IDXGIFactory4_CreateSwapChainForComposition(This,pDevice,pDesc,pRestrictToOutput,ppSwapChain)   \
        ( (This)->CreateSwapChainForComposition(pDevice,pDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory4_GetCreationFlags(This)    \
        ( (This)->GetCreationFlags() ) 

    #define DXGI_IDXGIFactory4_EnumAdapterByLuid(This,AdapterLuid,riid,ppvAdapter)   \
        ( (This)->EnumAdapterByLuid(AdapterLuid,riid,ppvAdapter) ) 

    #define DXGI_IDXGIFactory4_EnumWarpAdapter(This,riid,ppvAdapter) \
        ( (This)->EnumWarpAdapter(riid,ppvAdapter) )

#else

    #define DXGI_IDXGIFactory4_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DXGI_IDXGIFactory4_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DXGI_IDXGIFactory4_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DXGI_IDXGIFactory4_SetPrivateData(This,Name,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,Name,DataSize,pData) ) 

    #define DXGI_IDXGIFactory4_SetPrivateDataInterface(This,Name,pUnknown)   \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,Name,pUnknown) ) 

    #define DXGI_IDXGIFactory4_GetPrivateData(This,Name,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,Name,pDataSize,pData) ) 

    #define DXGI_IDXGIFactory4_GetParent(This,riid,ppParent) \
        ( (This)->lpVtbl->GetParent(This,riid,ppParent) ) 

    #define DXGI_IDXGIFactory4_EnumAdapters(This,Adapter,ppAdapter)  \
        ( (This)->lpVtbl->EnumAdapters(This,Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory4_MakeWindowAssociation(This,WindowHandle,Flags)    \
        ( (This)->lpVtbl->MakeWindowAssociation(This,WindowHandle,Flags) ) 

    #define DXGI_IDXGIFactory4_GetWindowAssociation(This,pWindowHandle)  \
        ( (This)->lpVtbl->GetWindowAssociation(This,pWindowHandle) ) 

    #define DXGI_IDXGIFactory4_CreateSwapChain(This,pDevice,pDesc,ppSwapChain)   \
        ( (This)->lpVtbl->CreateSwapChain(This,pDevice,pDesc,ppSwapChain) ) 

    #define DXGI_IDXGIFactory4_CreateSoftwareAdapter(This,Module,ppAdapter)  \
        ( (This)->lpVtbl->CreateSoftwareAdapter(This,Module,ppAdapter) ) 

    #define DXGI_IDXGIFactory4_EnumAdapters1(This,Adapter,ppAdapter) \
        ( (This)->lpVtbl->EnumAdapters1(This,Adapter,ppAdapter) ) 

    #define DXGI_IDXGIFactory4_IsCurrent(This)   \
        ( (This)->lpVtbl->IsCurrent(This) ) 

    #define DXGI_IDXGIFactory4_IsWindowedStereoEnabled(This) \
        ( (This)->lpVtbl->IsWindowedStereoEnabled(This) ) 

    #define DXGI_IDXGIFactory4_CreateSwapChainForHwnd(This,pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) \
        ( (This)->lpVtbl->CreateSwapChainForHwnd(This,pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory4_CreateSwapChainForCoreWindow(This,pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain)    \
        ( (This)->lpVtbl->CreateSwapChainForCoreWindow(This,pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory4_GetSharedResourceAdapterLuid(This,hResource,pLuid)    \
        ( (This)->lpVtbl->GetSharedResourceAdapterLuid(This,hResource,pLuid) ) 

    #define DXGI_IDXGIFactory4_RegisterStereoStatusWindow(This,WindowHandle,wMsg,pdwCookie)  \
        ( (This)->lpVtbl->RegisterStereoStatusWindow(This,WindowHandle,wMsg,pdwCookie) ) 

    #define DXGI_IDXGIFactory4_RegisterStereoStatusEvent(This,hEvent,pdwCookie)  \
        ( (This)->lpVtbl->RegisterStereoStatusEvent(This,hEvent,pdwCookie) ) 

    #define DXGI_IDXGIFactory4_UnregisterStereoStatus(This,dwCookie) \
        ( (This)->lpVtbl->UnregisterStereoStatus(This,dwCookie) ) 

    #define DXGI_IDXGIFactory4_RegisterOcclusionStatusWindow(This,WindowHandle,wMsg,pdwCookie)   \
        ( (This)->lpVtbl->RegisterOcclusionStatusWindow(This,WindowHandle,wMsg,pdwCookie) ) 

    #define DXGI_IDXGIFactory4_RegisterOcclusionStatusEvent(This,hEvent,pdwCookie)   \
        ( (This)->lpVtbl->RegisterOcclusionStatusEvent(This,hEvent,pdwCookie) ) 

    #define DXGI_IDXGIFactory4_UnregisterOcclusionStatus(This,dwCookie)  \
        ( (This)->lpVtbl->UnregisterOcclusionStatus(This,dwCookie) ) 

    #define DXGI_IDXGIFactory4_CreateSwapChainForComposition(This,pDevice,pDesc,pRestrictToOutput,ppSwapChain)   \
        ( (This)->lpVtbl->CreateSwapChainForComposition(This,pDevice,pDesc,pRestrictToOutput,ppSwapChain) ) 

    #define DXGI_IDXGIFactory4_GetCreationFlags(This)    \
        ( (This)->lpVtbl->GetCreationFlags(This) ) 

    #define DXGI_IDXGIFactory4_EnumAdapterByLuid(This,AdapterLuid,riid,ppvAdapter)   \
        ( (This)->lpVtbl->EnumAdapterByLuid(This,AdapterLuid,riid,ppvAdapter) ) 

    #define DXGI_IDXGIFactory4_EnumWarpAdapter(This,riid,ppvAdapter) \
        ( (This)->lpVtbl->EnumWarpAdapter(This,riid,ppvAdapter) )

#endif

#endif /* WIN32_DXGI_H */
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
