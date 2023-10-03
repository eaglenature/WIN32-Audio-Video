/*
------------------------------------------------------------------------------
    win32_d3d12 - v0.01 - public domain D3D12 C/C++ agnostic layer

    DO THIS:
        #include <d3d12.h>
        #include <dxgi1_6.h>
        #include <d3dcompiler.h>
        #include <d3d12sdklayers.h>
        #include "win32_dxgi.h"
        #include "win32_d3d12.h"

    LICENSE:
        See end of file for license information

------------------------------------------------------------------------------
*/
#ifndef WIN32_D3D12_H
#define WIN32_D3D12_H

#if !defined(__d3d12_h__)
    #error Include d3d12.h before this file
#endif

#if defined(__cplusplus)
    #define DX12_IID(x) (__uuidof(x))
#else
    #define DX12_IID(x) (&IID_##x)
#endif


/* ID3D12Debug */

#if defined(__cplusplus)

    #define DX12_ID3D12Debug_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Debug_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Debug_Release(This)   \
        ( (This)->Release() ) 

    #define DX12_ID3D12Debug_EnableDebugLayer(This)  \
        ( (This)->EnableDebugLayer() )

#else /* C interface */

    #define DX12_ID3D12Debug_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Debug_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Debug_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Debug_EnableDebugLayer(This)  \
        ( (This)->lpVtbl->EnableDebugLayer(This) )

#endif


/* ID3D12Debug1 */

#if defined(__cplusplus)

    #define DX12_ID3D12Debug1_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Debug1_AddRef(This)   \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Debug1_Release(This)  \
        ( (This)->Release() ) 

    #define DX12_ID3D12Debug1_EnableDebugLayer(This) \
        ( (This)->EnableDebugLayer() ) 

    #define DX12_ID3D12Debug1_SetEnableGPUBasedValidation(This,Enable)   \
        ( (This)->SetEnableGPUBasedValidation(Enable) ) 

    #define DX12_ID3D12Debug1_SetEnableSynchronizedCommandQueueValidation(This,Enable)   \
        ( (This)->SetEnableSynchronizedCommandQueueValidation(Enable) ) 

#else /* C interface */

    #define DX12_ID3D12Debug1_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Debug1_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Debug1_Release(This)  \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Debug1_EnableDebugLayer(This) \
        ( (This)->lpVtbl->EnableDebugLayer(This) ) 

    #define DX12_ID3D12Debug1_SetEnableGPUBasedValidation(This,Enable)   \
        ( (This)->lpVtbl->SetEnableGPUBasedValidation(This,Enable) ) 

    #define DX12_ID3D12Debug1_SetEnableSynchronizedCommandQueueValidation(This,Enable)   \
        ( (This)->lpVtbl->SetEnableSynchronizedCommandQueueValidation(This,Enable) ) 

#endif


/* ID3D12Debug2 */

#if defined(__cplusplus)

    #define DX12_ID3D12Debug2_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Debug2_AddRef(This)   \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Debug2_Release(This)  \
        ( (This)->Release() ) 

    #define DX12_ID3D12Debug2_SetGPUBasedValidationFlags(This,Flags) \
        ( (This)->SetGPUBasedValidationFlags(Flags) )

#else /* C interface */

    #define DX12_ID3D12Debug2_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Debug2_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Debug2_Release(This)  \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Debug2_SetGPUBasedValidationFlags(This,Flags) \
        ( (This)->lpVtbl->SetGPUBasedValidationFlags(This,Flags) )

#endif


/* ID3D12Debug3 */

#if defined(__cplusplus)

    #define DX12_ID3D12Debug3_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Debug3_AddRef(This)   \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Debug3_Release(This)  \
        ( (This)->Release() ) 

    #define DX12_ID3D12Debug3_EnableDebugLayer(This) \
        ( (This)->EnableDebugLayer() ) 

    #define DX12_ID3D12Debug3_SetEnableGPUBasedValidation(This,Enable)   \
        ( (This)->SetEnableGPUBasedValidation(Enable) ) 

    #define DX12_ID3D12Debug3_SetEnableSynchronizedCommandQueueValidation(This,Enable)   \
        ( (This)->SetEnableSynchronizedCommandQueueValidation(Enable) ) 

    #define DX12_ID3D12Debug3_SetGPUBasedValidationFlags(This,Flags) \
        ( (This)->SetGPUBasedValidationFlags(Flags) ) 

#else /* C interface */

    #define DX12_ID3D12Debug3_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Debug3_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Debug3_Release(This)  \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Debug3_EnableDebugLayer(This) \
        ( (This)->lpVtbl->EnableDebugLayer(This) ) 

    #define DX12_ID3D12Debug3_SetEnableGPUBasedValidation(This,Enable)   \
        ( (This)->lpVtbl->SetEnableGPUBasedValidation(This,Enable) ) 

    #define DX12_ID3D12Debug3_SetEnableSynchronizedCommandQueueValidation(This,Enable)   \
        ( (This)->lpVtbl->SetEnableSynchronizedCommandQueueValidation(This,Enable) ) 

    #define DX12_ID3D12Debug3_SetGPUBasedValidationFlags(This,Flags) \
        ( (This)->lpVtbl->SetGPUBasedValidationFlags(This,Flags) ) 

#endif


/* ID3D12DebugDevice1 */

#if defined(__cplusplus)

    #define DX12_ID3D12DebugDevice1_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12DebugDevice1_AddRef(This) \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12DebugDevice1_Release(This)    \
        ( (This)->Release() ) 

    #define DX12_ID3D12DebugDevice1_SetDebugParameter(This,Type,pData,DataSize)  \
        ( (This)->SetDebugParameter(Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugDevice1_GetDebugParameter(This,Type,pData,DataSize)  \
        ( (This)->GetDebugParameter(Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugDevice1_ReportLiveDeviceObjects(This,Flags)  \
        ( (This)->ReportLiveDeviceObjects(Flags) )

#else /* C interface */

    #define DX12_ID3D12DebugDevice1_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12DebugDevice1_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12DebugDevice1_Release(This)    \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12DebugDevice1_SetDebugParameter(This,Type,pData,DataSize)  \
        ( (This)->lpVtbl->SetDebugParameter(This,Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugDevice1_GetDebugParameter(This,Type,pData,DataSize)  \
        ( (This)->lpVtbl->GetDebugParameter(This,Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugDevice1_ReportLiveDeviceObjects(This,Flags)  \
        ( (This)->lpVtbl->ReportLiveDeviceObjects(This,Flags) ) 

#endif


/* ID3D12DebugDevice */

#if defined(__cplusplus)

    #define DX12_ID3D12DebugDevice_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12DebugDevice_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12DebugDevice_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12DebugDevice_SetFeatureMask(This,Mask) \
        ( (This)->SetFeatureMask(Mask) ) 

    #define DX12_ID3D12DebugDevice_GetFeatureMask(This)  \
        ( (This)->GetFeatureMask() ) 

    #define DX12_ID3D12DebugDevice_ReportLiveDeviceObjects(This,Flags)   \
        ( (This)->ReportLiveDeviceObjects(Flags) )

#else /* C interface */

    #define DX12_ID3D12DebugDevice_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12DebugDevice_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12DebugDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12DebugDevice_SetFeatureMask(This,Mask) \
        ( (This)->lpVtbl->SetFeatureMask(This,Mask) ) 

    #define DX12_ID3D12DebugDevice_GetFeatureMask(This)  \
        ( (This)->lpVtbl->GetFeatureMask(This) ) 

    #define DX12_ID3D12DebugDevice_ReportLiveDeviceObjects(This,Flags)   \
        ( (This)->lpVtbl->ReportLiveDeviceObjects(This,Flags) ) 

#endif


/* ID3D12DebugDevice2 */

#if defined(__cplusplus)

    #define DX12_ID3D12DebugDevice2_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12DebugDevice2_AddRef(This) \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12DebugDevice2_Release(This)    \
        ( (This)->Release() ) 

    #define DX12_ID3D12DebugDevice2_SetFeatureMask(This,Mask)    \
        ( (This)->SetFeatureMask(Mask) ) 

    #define DX12_ID3D12DebugDevice2_GetFeatureMask(This) \
        ( (This)->GetFeatureMask() ) 

    #define DX12_ID3D12DebugDevice2_ReportLiveDeviceObjects(This,Flags)  \
        ( (This)->ReportLiveDeviceObjects(Flags) ) 

    #define DX12_ID3D12DebugDevice2_SetDebugParameter(This,Type,pData,DataSize)  \
        ( (This)->SetDebugParameter(Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugDevice2_GetDebugParameter(This,Type,pData,DataSize)  \
        ( (This)->GetDebugParameter(Type,pData,DataSize) ) 

#else /* C interface */

    #define DX12_ID3D12DebugDevice2_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12DebugDevice2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12DebugDevice2_Release(This)    \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12DebugDevice2_SetFeatureMask(This,Mask)    \
        ( (This)->lpVtbl->SetFeatureMask(This,Mask) ) 

    #define DX12_ID3D12DebugDevice2_GetFeatureMask(This) \
        ( (This)->lpVtbl->GetFeatureMask(This) ) 

    #define DX12_ID3D12DebugDevice2_ReportLiveDeviceObjects(This,Flags)  \
        ( (This)->lpVtbl->ReportLiveDeviceObjects(This,Flags) ) 

    #define DX12_ID3D12DebugDevice2_SetDebugParameter(This,Type,pData,DataSize)  \
        ( (This)->lpVtbl->SetDebugParameter(This,Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugDevice2_GetDebugParameter(This,Type,pData,DataSize)  \
        ( (This)->lpVtbl->GetDebugParameter(This,Type,pData,DataSize) ) 

#endif


/* ID3D12DebugCommandQueue */

#if defined(__cplusplus)

    #define DX12_ID3D12DebugCommandQueue_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12DebugCommandQueue_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12DebugCommandQueue_Release(This)   \
        ( (This)->Release() ) 

    #define DX12_ID3D12DebugCommandQueue_AssertResourceState(This,pResource,Subresource,State)   \
        ( (This)->AssertResourceState(pResource,Subresource,State) )

#else /* C interface */

    #define DX12_ID3D12DebugCommandQueue_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12DebugCommandQueue_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12DebugCommandQueue_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12DebugCommandQueue_AssertResourceState(This,pResource,Subresource,State)   \
        ( (This)->lpVtbl->AssertResourceState(This,pResource,Subresource,State) )

#endif


/* ID3D12DebugCommandList1 */

#if defined(__cplusplus)

    #define DX12_ID3D12DebugCommandList1_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12DebugCommandList1_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12DebugCommandList1_Release(This)   \
        ( (This)->Release() ) 

    #define DX12_ID3D12DebugCommandList1_AssertResourceState(This,pResource,Subresource,State)   \
        ( (This)->AssertResourceState(pResource,Subresource,State) ) 

    #define DX12_ID3D12DebugCommandList1_SetDebugParameter(This,Type,pData,DataSize) \
        ( (This)->SetDebugParameter(Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugCommandList1_GetDebugParameter(This,Type,pData,DataSize) \
        ( (This)->GetDebugParameter(Type,pData,DataSize) ) 

#else /* C interface */

    #define DX12_ID3D12DebugCommandList1_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12DebugCommandList1_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12DebugCommandList1_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12DebugCommandList1_AssertResourceState(This,pResource,Subresource,State)   \
        ( (This)->lpVtbl->AssertResourceState(This,pResource,Subresource,State) ) 

    #define DX12_ID3D12DebugCommandList1_SetDebugParameter(This,Type,pData,DataSize) \
        ( (This)->lpVtbl->SetDebugParameter(This,Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugCommandList1_GetDebugParameter(This,Type,pData,DataSize) \
        ( (This)->lpVtbl->GetDebugParameter(This,Type,pData,DataSize) ) 

#endif


/* ID3D12DebugCommandList */

#if defined(__cplusplus)

    #define DX12_ID3D12DebugCommandList_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12DebugCommandList_AddRef(This) \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12DebugCommandList_Release(This)    \
        ( (This)->Release() ) 

    #define DX12_ID3D12DebugCommandList_AssertResourceState(This,pResource,Subresource,State)    \
        ( (This)->AssertResourceState(pResource,Subresource,State) ) 

    #define DX12_ID3D12DebugCommandList_SetFeatureMask(This,Mask)    \
        ( (This)->SetFeatureMask(Mask) ) 

    #define DX12_ID3D12DebugCommandList_GetFeatureMask(This) \
        ( (This)->GetFeatureMask() )

#else /* C interface */

    #define DX12_ID3D12DebugCommandList_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12DebugCommandList_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12DebugCommandList_Release(This)    \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12DebugCommandList_AssertResourceState(This,pResource,Subresource,State)    \
        ( (This)->lpVtbl->AssertResourceState(This,pResource,Subresource,State) ) 

    #define DX12_ID3D12DebugCommandList_SetFeatureMask(This,Mask)    \
        ( (This)->lpVtbl->SetFeatureMask(This,Mask) ) 

    #define DX12_ID3D12DebugCommandList_GetFeatureMask(This) \
        ( (This)->lpVtbl->GetFeatureMask(This) ) 

#endif


/* ID3D12DebugCommandList2 */

#if defined(__cplusplus)

    #define DX12_ID3D12DebugCommandList2_QueryInterface(This,riid,ppvObject)  \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12DebugCommandList2_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12DebugCommandList2_Release(This)   \
        ( (This)->Release() ) 

    #define DX12_ID3D12DebugCommandList2_AssertResourceState(This,pResource,Subresource,State)   \
        ( (This)->AssertResourceState(pResource,Subresource,State) ) 

    #define DX12_ID3D12DebugCommandList2_SetFeatureMask(This,Mask)   \
        ( (This)->SetFeatureMask(Mask) ) 

    #define DX12_ID3D12DebugCommandList2_GetFeatureMask(This)    \
        ( (This)->GetFeatureMask() ) 

    #define DX12_ID3D12DebugCommandList2_SetDebugParameter(This,Type,pData,DataSize) \
        ( (This)->SetDebugParameter(Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugCommandList2_GetDebugParameter(This,Type,pData,DataSize) \
        ( (This)->GetDebugParameter(Type,pData,DataSize) ) 

#else /* C interface */

    #define DX12_ID3D12DebugCommandList2_QueryInterface(This,riid,ppvObject)  \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12DebugCommandList2_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12DebugCommandList2_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12DebugCommandList2_AssertResourceState(This,pResource,Subresource,State)   \
        ( (This)->lpVtbl->AssertResourceState(This,pResource,Subresource,State) ) 

    #define DX12_ID3D12DebugCommandList2_SetFeatureMask(This,Mask)   \
        ( (This)->lpVtbl->SetFeatureMask(This,Mask) ) 

    #define DX12_ID3D12DebugCommandList2_GetFeatureMask(This)    \
        ( (This)->lpVtbl->GetFeatureMask(This) ) 

    #define DX12_ID3D12DebugCommandList2_SetDebugParameter(This,Type,pData,DataSize) \
        ( (This)->lpVtbl->SetDebugParameter(This,Type,pData,DataSize) ) 

    #define DX12_ID3D12DebugCommandList2_GetDebugParameter(This,Type,pData,DataSize) \
        ( (This)->lpVtbl->GetDebugParameter(This,Type,pData,DataSize) ) 

#endif


/* ID3D12SharingContract */

#if defined(__cplusplus)

    #define DX12_ID3D12SharingContract_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12SharingContract_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12SharingContract_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12SharingContract_Present(This,pResource,Subresource,window)    \
        ( (This)->Present(pResource,Subresource,window) ) 

    #define DX12_ID3D12SharingContract_SharedFenceSignal(This,pFence,FenceValue) \
        ( (This)->SharedFenceSignal(pFence,FenceValue) ) 

    #define DX12_ID3D12SharingContract_BeginCapturableWork(This,guid)    \
        ( (This)->BeginCapturableWork(guid) ) 

    #define DX12_ID3D12SharingContract_EndCapturableWork(This,guid)  \
        ( (This)->EndCapturableWork(guid) ) 

#else /* C interface */

    #define DX12_ID3D12SharingContract_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12SharingContract_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12SharingContract_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12SharingContract_Present(This,pResource,Subresource,window)    \
        ( (This)->lpVtbl->Present(This,pResource,Subresource,window) ) 

    #define DX12_ID3D12SharingContract_SharedFenceSignal(This,pFence,FenceValue) \
        ( (This)->lpVtbl->SharedFenceSignal(This,pFence,FenceValue) ) 

    #define DX12_ID3D12SharingContract_BeginCapturableWork(This,guid)    \
        ( (This)->lpVtbl->BeginCapturableWork(This,guid) ) 

    #define DX12_ID3D12SharingContract_EndCapturableWork(This,guid)  \
        ( (This)->lpVtbl->EndCapturableWork(This,guid) ) 

#endif


/* ID3D12InfoQueue */

#if defined(__cplusplus)

    #define DX12_ID3D12InfoQueue_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12InfoQueue_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12InfoQueue_Release(This)   \
        ( (This)->Release() ) 

    #define DX12_ID3D12InfoQueue_SetMessageCountLimit(This,MessageCountLimit)    \
        ( (This)->SetMessageCountLimit(MessageCountLimit) ) 

    #define DX12_ID3D12InfoQueue_ClearStoredMessages(This)   \
        ( (This)->ClearStoredMessages() ) 

    #define DX12_ID3D12InfoQueue_GetMessage(This,MessageIndex,pMessage,pMessageByteLength)   \
        ( (This)->GetMessage(MessageIndex,pMessage,pMessageByteLength) ) 

    #define DX12_ID3D12InfoQueue_GetNumMessagesAllowedByStorageFilter(This)  \
        ( (This)->GetNumMessagesAllowedByStorageFilter() ) 

    #define DX12_ID3D12InfoQueue_GetNumMessagesDeniedByStorageFilter(This)   \
        ( (This)->GetNumMessagesDeniedByStorageFilter() ) 

    #define DX12_ID3D12InfoQueue_GetNumStoredMessages(This)  \
        ( (This)->GetNumStoredMessages() ) 

    #define DX12_ID3D12InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(This)  \
        ( (This)->GetNumStoredMessagesAllowedByRetrievalFilter() ) 

    #define DX12_ID3D12InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(This)    \
        ( (This)->GetNumMessagesDiscardedByMessageCountLimit() ) 

    #define DX12_ID3D12InfoQueue_GetMessageCountLimit(This)  \
        ( (This)->GetMessageCountLimit() ) 

    #define DX12_ID3D12InfoQueue_AddStorageFilterEntries(This,pFilter)   \
        ( (This)->AddStorageFilterEntries(pFilter) ) 

    #define DX12_ID3D12InfoQueue_GetStorageFilter(This,pFilter,pFilterByteLength)    \
        ( (This)->GetStorageFilter(pFilter,pFilterByteLength) ) 

    #define DX12_ID3D12InfoQueue_ClearStorageFilter(This)    \
        ( (This)->ClearStorageFilter() ) 

    #define DX12_ID3D12InfoQueue_PushEmptyStorageFilter(This)    \
        ( (This)->PushEmptyStorageFilter() ) 

    #define DX12_ID3D12InfoQueue_PushCopyOfStorageFilter(This)   \
        ( (This)->PushCopyOfStorageFilter() ) 

    #define DX12_ID3D12InfoQueue_PushStorageFilter(This,pFilter) \
        ( (This)->PushStorageFilter(pFilter) ) 

    #define DX12_ID3D12InfoQueue_PopStorageFilter(This)  \
        ( (This)->PopStorageFilter() ) 

    #define DX12_ID3D12InfoQueue_GetStorageFilterStackSize(This) \
        ( (This)->GetStorageFilterStackSize() ) 

    #define DX12_ID3D12InfoQueue_AddRetrievalFilterEntries(This,pFilter) \
        ( (This)->AddRetrievalFilterEntries(pFilter) ) 

    #define DX12_ID3D12InfoQueue_GetRetrievalFilter(This,pFilter,pFilterByteLength)  \
        ( (This)->GetRetrievalFilter(pFilter,pFilterByteLength) ) 

    #define DX12_ID3D12InfoQueue_ClearRetrievalFilter(This)  \
        ( (This)->ClearRetrievalFilter() ) 

    #define DX12_ID3D12InfoQueue_PushEmptyRetrievalFilter(This)  \
        ( (This)->PushEmptyRetrievalFilter() ) 

    #define DX12_ID3D12InfoQueue_PushCopyOfRetrievalFilter(This) \
        ( (This)->PushCopyOfRetrievalFilter() ) 

    #define DX12_ID3D12InfoQueue_PushRetrievalFilter(This,pFilter)   \
        ( (This)->PushRetrievalFilter(pFilter) ) 

    #define DX12_ID3D12InfoQueue_PopRetrievalFilter(This)    \
        ( (This)->PopRetrievalFilter() ) 

    #define DX12_ID3D12InfoQueue_GetRetrievalFilterStackSize(This)   \
        ( (This)->GetRetrievalFilterStackSize() ) 

    #define DX12_ID3D12InfoQueue_AddMessage(This,Category,Severity,ID,pDescription)  \
        ( (This)->AddMessage(Category,Severity,ID,pDescription) ) 

    #define DX12_ID3D12InfoQueue_AddApplicationMessage(This,Severity,pDescription)   \
        ( (This)->AddApplicationMessage(Severity,pDescription) ) 

    #define DX12_ID3D12InfoQueue_SetBreakOnCategory(This,Category,bEnable)   \
        ( (This)->SetBreakOnCategory(Category,bEnable) ) 

    #define DX12_ID3D12InfoQueue_SetBreakOnSeverity(This,Severity,bEnable)   \
        ( (This)->SetBreakOnSeverity(Severity,bEnable) ) 

    #define DX12_ID3D12InfoQueue_SetBreakOnID(This,ID,bEnable)   \
        ( (This)->SetBreakOnID(ID,bEnable) ) 

    #define DX12_ID3D12InfoQueue_GetBreakOnCategory(This,Category)   \
        ( (This)->GetBreakOnCategory(Category) ) 

    #define DX12_ID3D12InfoQueue_GetBreakOnSeverity(This,Severity)   \
        ( (This)->GetBreakOnSeverity(Severity) ) 

    #define DX12_ID3D12InfoQueue_GetBreakOnID(This,ID)   \
        ( (This)->GetBreakOnID(ID) ) 

    #define DX12_ID3D12InfoQueue_SetMuteDebugOutput(This,bMute)  \
        ( (This)->SetMuteDebugOutput(bMute) ) 

    #define DX12_ID3D12InfoQueue_GetMuteDebugOutput(This)    \
        ( (This)->GetMuteDebugOutput() ) 

#else /* C interface */

    #define DX12_ID3D12InfoQueue_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12InfoQueue_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12InfoQueue_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12InfoQueue_SetMessageCountLimit(This,MessageCountLimit)    \
        ( (This)->lpVtbl->SetMessageCountLimit(This,MessageCountLimit) ) 

    #define DX12_ID3D12InfoQueue_ClearStoredMessages(This)   \
        ( (This)->lpVtbl->ClearStoredMessages(This) ) 

    #define DX12_ID3D12InfoQueue_GetMessage(This,MessageIndex,pMessage,pMessageByteLength)   \
        ( (This)->lpVtbl->GetMessage(This,MessageIndex,pMessage,pMessageByteLength) ) 

    #define DX12_ID3D12InfoQueue_GetNumMessagesAllowedByStorageFilter(This)  \
        ( (This)->lpVtbl->GetNumMessagesAllowedByStorageFilter(This) ) 

    #define DX12_ID3D12InfoQueue_GetNumMessagesDeniedByStorageFilter(This)   \
        ( (This)->lpVtbl->GetNumMessagesDeniedByStorageFilter(This) ) 

    #define DX12_ID3D12InfoQueue_GetNumStoredMessages(This)  \
        ( (This)->lpVtbl->GetNumStoredMessages(This) ) 

    #define DX12_ID3D12InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(This)  \
        ( (This)->lpVtbl->GetNumStoredMessagesAllowedByRetrievalFilter(This) ) 

    #define DX12_ID3D12InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(This)    \
        ( (This)->lpVtbl->GetNumMessagesDiscardedByMessageCountLimit(This) ) 

    #define DX12_ID3D12InfoQueue_GetMessageCountLimit(This)  \
        ( (This)->lpVtbl->GetMessageCountLimit(This) ) 

    #define DX12_ID3D12InfoQueue_AddStorageFilterEntries(This,pFilter)   \
        ( (This)->lpVtbl->AddStorageFilterEntries(This,pFilter) ) 

    #define DX12_ID3D12InfoQueue_GetStorageFilter(This,pFilter,pFilterByteLength)    \
        ( (This)->lpVtbl->GetStorageFilter(This,pFilter,pFilterByteLength) ) 

    #define DX12_ID3D12InfoQueue_ClearStorageFilter(This)    \
        ( (This)->lpVtbl->ClearStorageFilter(This) ) 

    #define DX12_ID3D12InfoQueue_PushEmptyStorageFilter(This)    \
        ( (This)->lpVtbl->PushEmptyStorageFilter(This) ) 

    #define DX12_ID3D12InfoQueue_PushCopyOfStorageFilter(This)   \
        ( (This)->lpVtbl->PushCopyOfStorageFilter(This) ) 

    #define DX12_ID3D12InfoQueue_PushStorageFilter(This,pFilter) \
        ( (This)->lpVtbl->PushStorageFilter(This,pFilter) ) 

    #define DX12_ID3D12InfoQueue_PopStorageFilter(This)  \
        ( (This)->lpVtbl->PopStorageFilter(This) ) 

    #define DX12_ID3D12InfoQueue_GetStorageFilterStackSize(This) \
        ( (This)->lpVtbl->GetStorageFilterStackSize(This) ) 

    #define DX12_ID3D12InfoQueue_AddRetrievalFilterEntries(This,pFilter) \
        ( (This)->lpVtbl->AddRetrievalFilterEntries(This,pFilter) ) 

    #define DX12_ID3D12InfoQueue_GetRetrievalFilter(This,pFilter,pFilterByteLength)  \
        ( (This)->lpVtbl->GetRetrievalFilter(This,pFilter,pFilterByteLength) ) 

    #define DX12_ID3D12InfoQueue_ClearRetrievalFilter(This)  \
        ( (This)->lpVtbl->ClearRetrievalFilter(This) ) 

    #define DX12_ID3D12InfoQueue_PushEmptyRetrievalFilter(This)  \
        ( (This)->lpVtbl->PushEmptyRetrievalFilter(This) ) 

    #define DX12_ID3D12InfoQueue_PushCopyOfRetrievalFilter(This) \
        ( (This)->lpVtbl->PushCopyOfRetrievalFilter(This) ) 

    #define DX12_ID3D12InfoQueue_PushRetrievalFilter(This,pFilter)   \
        ( (This)->lpVtbl->PushRetrievalFilter(This,pFilter) ) 

    #define DX12_ID3D12InfoQueue_PopRetrievalFilter(This)    \
        ( (This)->lpVtbl->PopRetrievalFilter(This) ) 

    #define DX12_ID3D12InfoQueue_GetRetrievalFilterStackSize(This)   \
        ( (This)->lpVtbl->GetRetrievalFilterStackSize(This) ) 

    #define DX12_ID3D12InfoQueue_AddMessage(This,Category,Severity,ID,pDescription)  \
        ( (This)->lpVtbl->AddMessage(This,Category,Severity,ID,pDescription) ) 

    #define DX12_ID3D12InfoQueue_AddApplicationMessage(This,Severity,pDescription)   \
        ( (This)->lpVtbl->AddApplicationMessage(This,Severity,pDescription) ) 

    #define DX12_ID3D12InfoQueue_SetBreakOnCategory(This,Category,bEnable)   \
        ( (This)->lpVtbl->SetBreakOnCategory(This,Category,bEnable) ) 

    #define DX12_ID3D12InfoQueue_SetBreakOnSeverity(This,Severity,bEnable)   \
        ( (This)->lpVtbl->SetBreakOnSeverity(This,Severity,bEnable) ) 

    #define DX12_ID3D12InfoQueue_SetBreakOnID(This,ID,bEnable)   \
        ( (This)->lpVtbl->SetBreakOnID(This,ID,bEnable) ) 

    #define DX12_ID3D12InfoQueue_GetBreakOnCategory(This,Category)   \
        ( (This)->lpVtbl->GetBreakOnCategory(This,Category) ) 

    #define DX12_ID3D12InfoQueue_GetBreakOnSeverity(This,Severity)   \
        ( (This)->lpVtbl->GetBreakOnSeverity(This,Severity) ) 

    #define DX12_ID3D12InfoQueue_GetBreakOnID(This,ID)   \
        ( (This)->lpVtbl->GetBreakOnID(This,ID) ) 

    #define DX12_ID3D12InfoQueue_SetMuteDebugOutput(This,bMute)  \
        ( (This)->lpVtbl->SetMuteDebugOutput(This,bMute) ) 

    #define DX12_ID3D12InfoQueue_GetMuteDebugOutput(This)    \
        ( (This)->lpVtbl->GetMuteDebugOutput(This) ) 

#endif


/* ID3D12Device */

#if defined(__cplusplus)

    #define DX12_ID3D12Device_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device_AddRef(This)   \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device_Release(This)  \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device_GetPrivateData(This,guid,pDataSize,pData)  \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device_SetPrivateData(This,guid,DataSize,pData)   \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device_SetPrivateDataInterface(This,guid,pData)   \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device_SetName(This,Name) \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device_GetNodeCount(This) \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device_CreateCommandQueue(This,pDesc,riid,ppCommandQueue) \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device_CreateCommandAllocator(This,type,riid,ppCommandAllocator)  \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)    \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)   \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)   \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)    \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device_GetDescriptorHandleIncrementSize(This,DescriptorHeapType)  \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature)  \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device_CreateConstantBufferView(This,pDesc,DestDescriptor)    \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor)  \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)    \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)    \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)    \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateSampler(This,pDesc,DestDescriptor)   \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)   \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)    \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)    \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device_GetCustomHeapProperties(This,nodeMask,heapType)    \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)   \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device_CreateHeap(This,pDesc,riid,ppvHeap)    \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)   \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)   \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device_OpenSharedHandle(This,NTHandle,riid,ppvObj)    \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device_OpenSharedHandleByName(This,Name,Access,pNTHandle) \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device_MakeResident(This,NumObjects,ppObjects)    \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device_Evict(This,NumObjects,ppObjects)   \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device_CreateFence(This,InitialValue,Flags,riid,ppFence)  \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device_GetDeviceRemovedReason(This)   \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)    \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device_CreateQueryHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device_SetStablePowerState(This,Enable)   \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device_GetAdapterLuid(This)   \
        ( (This)->GetAdapterLuid() ) 

#else /* C interface */

    #define DX12_ID3D12Device_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device_Release(This)  \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device_GetPrivateData(This,guid,pDataSize,pData)  \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device_SetPrivateData(This,guid,DataSize,pData)   \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device_SetPrivateDataInterface(This,guid,pData)   \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device_SetName(This,Name) \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device_GetNodeCount(This) \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device_CreateCommandQueue(This,pDesc,riid,ppCommandQueue) \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device_CreateCommandAllocator(This,type,riid,ppCommandAllocator)  \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)    \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)   \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)   \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)    \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device_GetDescriptorHandleIncrementSize(This,DescriptorHeapType)  \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature)  \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device_CreateConstantBufferView(This,pDesc,DestDescriptor)    \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)    \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)    \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)    \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CreateSampler(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)    \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)    \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device_GetCustomHeapProperties(This,nodeMask,heapType)    \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)   \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device_CreateHeap(This,pDesc,riid,ppvHeap)    \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)   \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)   \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device_OpenSharedHandle(This,NTHandle,riid,ppvObj)    \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device_OpenSharedHandleByName(This,Name,Access,pNTHandle) \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device_MakeResident(This,NumObjects,ppObjects)    \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device_Evict(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device_CreateFence(This,InitialValue,Flags,riid,ppFence)  \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device_GetDeviceRemovedReason(This)   \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)    \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device_CreateQueryHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device_SetStablePowerState(This,Enable)   \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device_GetAdapterLuid(This)   \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

#endif


/* ID3D12Device1 */

#if defined(__cplusplus)

    #define DX12_ID3D12Device1_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device1_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device1_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device1_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device1_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device1_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device1_SetName(This,Name)    \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device1_GetNodeCount(This)    \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device1_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device1_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device1_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device1_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device1_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device1_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device1_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device1_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device1_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device1_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device1_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device1_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device1_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device1_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device1_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device1_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device1_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device1_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device1_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device1_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device1_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device1_Evict(This,NumObjects,ppObjects)  \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device1_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device1_GetDeviceRemovedReason(This)  \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device1_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device1_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device1_SetStablePowerState(This,Enable)  \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device1_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device1_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device1_GetAdapterLuid(This)  \
        ( (This)->GetAdapterLuid() ) 

    #define DX12_ID3D12Device1_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->CreatePipelineLibrary(pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device1_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->SetEventOnMultipleFenceCompletion(ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device1_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->SetResidencyPriority(NumObjects,ppObjects,pPriorities) ) 

#else /* C interface */

    #define DX12_ID3D12Device1_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device1_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device1_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device1_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device1_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device1_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device1_SetName(This,Name)    \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device1_GetNodeCount(This)    \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device1_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device1_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device1_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device1_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device1_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device1_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device1_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device1_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device1_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device1_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device1_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device1_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device1_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device1_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device1_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device1_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device1_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device1_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device1_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device1_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device1_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device1_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device1_Evict(This,NumObjects,ppObjects)  \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device1_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device1_GetDeviceRemovedReason(This)  \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device1_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device1_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device1_SetStablePowerState(This,Enable)  \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device1_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device1_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device1_GetAdapterLuid(This)  \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

    #define DX12_ID3D12Device1_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->lpVtbl->CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device1_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->lpVtbl->SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device1_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->lpVtbl->SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) ) 

#endif


/* ID3D12Device2 */

#if defined(__cplusplus)

    #define DX12_ID3D12Device2_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device2_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device2_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device2_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device2_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device2_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device2_SetName(This,Name)    \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device2_GetNodeCount(This)    \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device2_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device2_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device2_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device2_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device2_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device2_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device2_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device2_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device2_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device2_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device2_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device2_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device2_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device2_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device2_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device2_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device2_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device2_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device2_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device2_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device2_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device2_Evict(This,NumObjects,ppObjects)  \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device2_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device2_GetDeviceRemovedReason(This)  \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device2_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device2_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device2_SetStablePowerState(This,Enable)  \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device2_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device2_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device2_GetAdapterLuid(This)  \
        ( (This)->GetAdapterLuid() ) 

    #define DX12_ID3D12Device2_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->CreatePipelineLibrary(pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device2_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->SetEventOnMultipleFenceCompletion(ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device2_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->SetResidencyPriority(NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device2_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreatePipelineState(pDesc,riid,ppPipelineState) ) 

#else /* C interface */

    #define DX12_ID3D12Device2_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device2_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device2_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device2_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device2_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device2_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device2_SetName(This,Name)    \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device2_GetNodeCount(This)    \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device2_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device2_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device2_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device2_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device2_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device2_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device2_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device2_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device2_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device2_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device2_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device2_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device2_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device2_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device2_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device2_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device2_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device2_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device2_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device2_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device2_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device2_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device2_Evict(This,NumObjects,ppObjects)  \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device2_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device2_GetDeviceRemovedReason(This)  \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device2_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device2_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device2_SetStablePowerState(This,Enable)  \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device2_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device2_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device2_GetAdapterLuid(This)  \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

    #define DX12_ID3D12Device2_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->lpVtbl->CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device2_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->lpVtbl->SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device2_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->lpVtbl->SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device2_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreatePipelineState(This,pDesc,riid,ppPipelineState) ) 

#endif


/* ID3D12Device3 */

#if defined(__cplusplus)

    #define DX12_ID3D12Device3_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device3_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device3_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device3_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device3_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device3_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device3_SetName(This,Name)    \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device3_GetNodeCount(This)    \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device3_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device3_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device3_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device3_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device3_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device3_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device3_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device3_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device3_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device3_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device3_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device3_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device3_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device3_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device3_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device3_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device3_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device3_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device3_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device3_Evict(This,NumObjects,ppObjects)  \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device3_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device3_GetDeviceRemovedReason(This)  \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device3_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device3_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_SetStablePowerState(This,Enable)  \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device3_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device3_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device3_GetAdapterLuid(This)  \
        ( (This)->GetAdapterLuid() ) 

    #define DX12_ID3D12Device3_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->CreatePipelineLibrary(pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device3_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->SetEventOnMultipleFenceCompletion(ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device3_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->SetResidencyPriority(NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device3_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreatePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device3_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromAddress(pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromFileMapping(hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->EnqueueMakeResident(Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

#else /* C interface */

    #define DX12_ID3D12Device3_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device3_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device3_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device3_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device3_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device3_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device3_SetName(This,Name)    \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device3_GetNodeCount(This)    \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device3_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device3_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device3_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device3_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device3_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device3_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device3_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device3_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device3_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device3_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device3_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device3_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device3_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device3_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device3_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device3_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device3_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device3_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device3_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device3_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device3_Evict(This,NumObjects,ppObjects)  \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device3_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device3_GetDeviceRemovedReason(This)  \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device3_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device3_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_SetStablePowerState(This,Enable)  \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device3_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device3_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device3_GetAdapterLuid(This)  \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

    #define DX12_ID3D12Device3_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->lpVtbl->CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device3_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->lpVtbl->SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device3_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->lpVtbl->SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device3_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreatePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device3_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device3_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->lpVtbl->EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

#endif


/* ID3D12Device4 */

#if defined(__cplusplus)

    #define DX12_ID3D12Device4_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device4_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device4_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device4_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device4_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device4_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device4_SetName(This,Name)    \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device4_GetNodeCount(This)    \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device4_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device4_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device4_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device4_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device4_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device4_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device4_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device4_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device4_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device4_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device4_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device4_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device4_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device4_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device4_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device4_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device4_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device4_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device4_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device4_Evict(This,NumObjects,ppObjects)  \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device4_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device4_GetDeviceRemovedReason(This)  \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device4_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device4_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_SetStablePowerState(This,Enable)  \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device4_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device4_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device4_GetAdapterLuid(This)  \
        ( (This)->GetAdapterLuid() ) 

    #define DX12_ID3D12Device4_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->CreatePipelineLibrary(pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device4_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->SetEventOnMultipleFenceCompletion(ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device4_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->SetResidencyPriority(NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device4_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreatePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device4_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromAddress(pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromFileMapping(hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->EnqueueMakeResident(Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device4_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->CreateCommandList1(nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device4_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->CreateProtectedResourceSession(pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device4_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->CreateCommittedResource1(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device4_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->CreateHeap1(pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->CreateReservedResource1(pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device4_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->GetResourceAllocationInfo1(visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

#else /* C interface */

    #define DX12_ID3D12Device4_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device4_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device4_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device4_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device4_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device4_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device4_SetName(This,Name)    \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device4_GetNodeCount(This)    \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device4_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device4_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device4_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device4_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device4_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device4_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device4_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device4_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device4_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device4_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device4_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device4_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device4_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device4_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device4_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device4_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device4_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device4_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device4_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device4_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device4_Evict(This,NumObjects,ppObjects)  \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device4_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device4_GetDeviceRemovedReason(This)  \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device4_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device4_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_SetStablePowerState(This,Enable)  \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device4_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device4_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device4_GetAdapterLuid(This)  \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

    #define DX12_ID3D12Device4_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->lpVtbl->CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device4_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->lpVtbl->SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device4_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->lpVtbl->SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device4_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreatePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device4_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->lpVtbl->EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device4_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->lpVtbl->CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device4_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->lpVtbl->CreateProtectedResourceSession(This,pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device4_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->lpVtbl->CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device4_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->lpVtbl->CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device4_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->lpVtbl->CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device4_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->lpVtbl->GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

#endif


/* ID3D12Device5 */

#if defined(__cplusplus)

    #define DX12_ID3D12Device5_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device5_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device5_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device5_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device5_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device5_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device5_SetName(This,Name)    \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device5_GetNodeCount(This)    \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device5_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device5_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device5_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device5_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device5_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device5_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device5_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device5_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device5_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device5_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device5_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device5_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device5_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device5_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device5_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device5_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device5_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device5_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device5_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device5_Evict(This,NumObjects,ppObjects)  \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device5_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device5_GetDeviceRemovedReason(This)  \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device5_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device5_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_SetStablePowerState(This,Enable)  \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device5_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device5_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device5_GetAdapterLuid(This)  \
        ( (This)->GetAdapterLuid() ) 

    #define DX12_ID3D12Device5_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->CreatePipelineLibrary(pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device5_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->SetEventOnMultipleFenceCompletion(ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device5_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->SetResidencyPriority(NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device5_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreatePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device5_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromAddress(pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromFileMapping(hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->EnqueueMakeResident(Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device5_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->CreateCommandList1(nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device5_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->CreateProtectedResourceSession(pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device5_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->CreateCommittedResource1(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device5_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->CreateHeap1(pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->CreateReservedResource1(pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device5_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->GetResourceAllocationInfo1(visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device5_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->CreateLifetimeTracker(pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device5_RemoveDevice(This)    \
        ( (This)->RemoveDevice() ) 

    #define DX12_ID3D12Device5_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->EnumerateMetaCommands(pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device5_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->EnumerateMetaCommandParameters(CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device5_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->CreateMetaCommand(CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device5_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->CreateStateObject(pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->GetRaytracingAccelerationStructurePrebuildInfo(pDesc,pInfo) ) 

    #define DX12_ID3D12Device5_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->CheckDriverMatchingIdentifier(SerializedDataType,pIdentifierToCheck) )

#else /* C interface */

    #define DX12_ID3D12Device5_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device5_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device5_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device5_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device5_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device5_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device5_SetName(This,Name)    \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device5_GetNodeCount(This)    \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device5_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device5_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device5_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device5_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device5_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device5_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device5_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device5_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device5_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device5_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device5_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device5_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device5_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device5_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device5_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device5_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device5_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device5_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device5_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device5_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device5_Evict(This,NumObjects,ppObjects)  \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device5_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device5_GetDeviceRemovedReason(This)  \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device5_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device5_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_SetStablePowerState(This,Enable)  \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device5_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device5_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device5_GetAdapterLuid(This)  \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

    #define DX12_ID3D12Device5_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->lpVtbl->CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device5_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->lpVtbl->SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device5_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->lpVtbl->SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device5_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreatePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device5_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->lpVtbl->EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device5_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->lpVtbl->CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device5_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->lpVtbl->CreateProtectedResourceSession(This,pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device5_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->lpVtbl->CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device5_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->lpVtbl->CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device5_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->lpVtbl->CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device5_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->lpVtbl->GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device5_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->lpVtbl->CreateLifetimeTracker(This,pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device5_RemoveDevice(This)    \
        ( (This)->lpVtbl->RemoveDevice(This) ) 

    #define DX12_ID3D12Device5_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommands(This,pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device5_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device5_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->lpVtbl->CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device5_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->lpVtbl->CreateStateObject(This,pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device5_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->lpVtbl->GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo) ) 

    #define DX12_ID3D12Device5_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->lpVtbl->CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) ) 

#endif


/* ID3D12Device6 */

#if defined(__cplusplus)

    #define DX12_ID3D12Device6_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device6_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device6_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device6_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device6_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device6_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device6_SetName(This,Name)    \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device6_GetNodeCount(This)    \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device6_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device6_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device6_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device6_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device6_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device6_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device6_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device6_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device6_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device6_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device6_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device6_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device6_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device6_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device6_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device6_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device6_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device6_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device6_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device6_Evict(This,NumObjects,ppObjects)  \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device6_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device6_GetDeviceRemovedReason(This)  \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device6_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device6_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_SetStablePowerState(This,Enable)  \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device6_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device6_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device6_GetAdapterLuid(This)  \
        ( (This)->GetAdapterLuid() ) 

    #define DX12_ID3D12Device6_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->CreatePipelineLibrary(pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device6_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->SetEventOnMultipleFenceCompletion(ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device6_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->SetResidencyPriority(NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device6_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreatePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device6_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromAddress(pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromFileMapping(hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->EnqueueMakeResident(Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device6_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->CreateCommandList1(nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device6_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->CreateProtectedResourceSession(pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device6_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->CreateCommittedResource1(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device6_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->CreateHeap1(pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->CreateReservedResource1(pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device6_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->GetResourceAllocationInfo1(visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device6_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->CreateLifetimeTracker(pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device6_RemoveDevice(This)    \
        ( (This)->RemoveDevice() ) 

    #define DX12_ID3D12Device6_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->EnumerateMetaCommands(pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device6_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->EnumerateMetaCommandParameters(CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device6_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->CreateMetaCommand(CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device6_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->CreateStateObject(pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device6_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->GetRaytracingAccelerationStructurePrebuildInfo(pDesc,pInfo) ) 

    #define DX12_ID3D12Device6_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->CheckDriverMatchingIdentifier(SerializedDataType,pIdentifierToCheck) )

    #define DX12_ID3D12Device6_SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired)   \
        ( (This)->SetBackgroundProcessingMode(Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired) ) 

#else /* C interface */

    #define DX12_ID3D12Device6_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device6_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device6_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device6_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device6_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device6_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device6_SetName(This,Name)    \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device6_GetNodeCount(This)    \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device6_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device6_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device6_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device6_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device6_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device6_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device6_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device6_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device6_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device6_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device6_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device6_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device6_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device6_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device6_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device6_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device6_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device6_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device6_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device6_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device6_Evict(This,NumObjects,ppObjects)  \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device6_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device6_GetDeviceRemovedReason(This)  \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device6_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device6_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_SetStablePowerState(This,Enable)  \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device6_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device6_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device6_GetAdapterLuid(This)  \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

    #define DX12_ID3D12Device6_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->lpVtbl->CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device6_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->lpVtbl->SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device6_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->lpVtbl->SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device6_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreatePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device6_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->lpVtbl->EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device6_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->lpVtbl->CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device6_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->lpVtbl->CreateProtectedResourceSession(This,pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device6_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->lpVtbl->CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device6_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->lpVtbl->CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device6_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->lpVtbl->CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device6_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->lpVtbl->GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device6_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->lpVtbl->CreateLifetimeTracker(This,pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device6_RemoveDevice(This)    \
        ( (This)->lpVtbl->RemoveDevice(This) ) 

    #define DX12_ID3D12Device6_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommands(This,pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device6_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device6_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->lpVtbl->CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device6_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->lpVtbl->CreateStateObject(This,pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device6_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->lpVtbl->GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo) ) 

    #define DX12_ID3D12Device6_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->lpVtbl->CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) ) 

    #define DX12_ID3D12Device6_SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired)   \
        ( (This)->lpVtbl->SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired) ) 

#endif


/* ID3D12Device7 */

#if defined(__cplusplus)

    #define DX12_ID3D12Device8_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device7_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device7_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device7_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device7_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device7_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device7_SetName(This,Name)    \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device7_GetNodeCount(This)    \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device7_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device7_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device7_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device7_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device7_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device7_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device7_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device7_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device7_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device7_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device7_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device7_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device7_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device7_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device7_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device7_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device7_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device7_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device7_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device7_Evict(This,NumObjects,ppObjects)  \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device7_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device7_GetDeviceRemovedReason(This)  \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device7_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device7_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_SetStablePowerState(This,Enable)  \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device7_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device7_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device7_GetAdapterLuid(This)  \
        ( (This)->GetAdapterLuid() ) 

    #define DX12_ID3D12Device7_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->CreatePipelineLibrary(pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device7_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->SetEventOnMultipleFenceCompletion(ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device7_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->SetResidencyPriority(NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device7_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreatePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device7_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromAddress(pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromFileMapping(hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->EnqueueMakeResident(Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device7_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->CreateCommandList1(nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device7_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->CreateProtectedResourceSession(pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device7_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->CreateCommittedResource1(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device7_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->CreateHeap1(pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->CreateReservedResource1(pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device7_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->GetResourceAllocationInfo1(visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device7_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->CreateLifetimeTracker(pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device7_RemoveDevice(This)    \
        ( (This)->RemoveDevice() ) 

    #define DX12_ID3D12Device7_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->EnumerateMetaCommands(pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device7_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->EnumerateMetaCommandParameters(CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device7_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->CreateMetaCommand(CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device7_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->CreateStateObject(pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device7_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->GetRaytracingAccelerationStructurePrebuildInfo(pDesc,pInfo) ) 

    #define DX12_ID3D12Device7_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->CheckDriverMatchingIdentifier(SerializedDataType,pIdentifierToCheck) )

    #define DX12_ID3D12Device7_SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired)   \
        ( (This)->SetBackgroundProcessingMode(Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired) ) 

    #define DX12_ID3D12Device7_AddToStateObject(This,pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) \
        ( (This)->AddToStateObject(pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) ) 

    #define DX12_ID3D12Device7_CreateProtectedResourceSession1(This,pDesc,riid,ppSession)    \
        ( (This)->CreateProtectedResourceSession1(pDesc,riid,ppSession) )

#else /* C interface */

    #define DX12_ID3D12Device7_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device7_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device7_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device7_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device7_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device7_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device7_SetName(This,Name)    \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device7_GetNodeCount(This)    \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device7_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device7_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device7_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device7_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device7_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device7_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device7_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device7_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device7_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device7_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device7_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device7_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device7_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device7_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device7_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device7_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device7_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device7_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device7_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device7_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device7_Evict(This,NumObjects,ppObjects)  \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device7_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device7_GetDeviceRemovedReason(This)  \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device7_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device7_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_SetStablePowerState(This,Enable)  \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device7_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device7_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device7_GetAdapterLuid(This)  \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

    #define DX12_ID3D12Device7_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->lpVtbl->CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device7_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->lpVtbl->SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device7_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->lpVtbl->SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device7_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreatePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device7_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->lpVtbl->EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device7_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->lpVtbl->CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device7_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->lpVtbl->CreateProtectedResourceSession(This,pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device7_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->lpVtbl->CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device7_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->lpVtbl->CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device7_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->lpVtbl->CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device7_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->lpVtbl->GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device7_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->lpVtbl->CreateLifetimeTracker(This,pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device7_RemoveDevice(This)    \
        ( (This)->lpVtbl->RemoveDevice(This) ) 

    #define DX12_ID3D12Device7_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommands(This,pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device7_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device7_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->lpVtbl->CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device7_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->lpVtbl->CreateStateObject(This,pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device7_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->lpVtbl->GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo) ) 

    #define DX12_ID3D12Device7_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->lpVtbl->CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) ) 

    #define DX12_ID3D12Device7_SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired)   \
        ( (This)->lpVtbl->SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired) ) 

    #define DX12_ID3D12Device7_AddToStateObject(This,pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) \
        ( (This)->lpVtbl->AddToStateObject(This,pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) ) 

    #define DX12_ID3D12Device7_CreateProtectedResourceSession1(This,pDesc,riid,ppSession)    \
        ( (This)->lpVtbl->CreateProtectedResourceSession1(This,pDesc,riid,ppSession) )

#endif


/* ID3D12Device8 */

#if defined(__cplusplus)

    #define DX12_ID3D12Device8_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device8_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device8_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device8_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device8_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device8_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device8_SetName(This,Name)    \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device8_GetNodeCount(This)    \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device8_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device8_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device8_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device8_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device8_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device8_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device8_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device8_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device8_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device8_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device8_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device8_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device8_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device8_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device8_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device8_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device8_Evict(This,NumObjects,ppObjects)  \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device8_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device8_GetDeviceRemovedReason(This)  \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device8_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device8_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_SetStablePowerState(This,Enable)  \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device8_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device8_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device8_GetAdapterLuid(This)  \
        ( (This)->GetAdapterLuid() ) 

    #define DX12_ID3D12Device8_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->CreatePipelineLibrary(pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device8_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->SetEventOnMultipleFenceCompletion(ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device8_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->SetResidencyPriority(NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device8_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreatePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device8_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromAddress(pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromFileMapping(hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->EnqueueMakeResident(Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device8_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->CreateCommandList1(nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device8_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->CreateProtectedResourceSession(pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device8_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->CreateCommittedResource1(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->CreateHeap1(pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->CreateReservedResource1(pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device8_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->GetResourceAllocationInfo1(visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device8_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->CreateLifetimeTracker(pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device8_RemoveDevice(This)    \
        ( (This)->RemoveDevice() ) 

    #define DX12_ID3D12Device8_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->EnumerateMetaCommands(pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device8_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->EnumerateMetaCommandParameters(CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device8_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->CreateMetaCommand(CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device8_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->CreateStateObject(pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device8_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->GetRaytracingAccelerationStructurePrebuildInfo(pDesc,pInfo) ) 

    #define DX12_ID3D12Device8_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->CheckDriverMatchingIdentifier(SerializedDataType,pIdentifierToCheck) )

    #define DX12_ID3D12Device8_SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired)   \
        ( (This)->SetBackgroundProcessingMode(Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired) ) 

    #define DX12_ID3D12Device8_AddToStateObject(This,pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) \
        ( (This)->AddToStateObject(pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) ) 

    #define DX12_ID3D12Device8_CreateProtectedResourceSession1(This,pDesc,riid,ppSession)    \
        ( (This)->CreateProtectedResourceSession1(pDesc,riid,ppSession) )

    #define DX12_ID3D12Device8_GetResourceAllocationInfo2(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->GetResourceAllocationInfo2(visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device8_CreateCommittedResource2(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->CreateCommittedResource2(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device8_CreatePlacedResource1(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreatePlacedResource1(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView(This,pTargetedResource,pFeedbackResource,DestDescriptor) \
        ( (This)->CreateSamplerFeedbackUnorderedAccessView(pTargetedResource,pFeedbackResource,DestDescriptor) ) 

    #define DX12_ID3D12Device8_GetCopyableFootprints1(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)  \
        ( (This)->GetCopyableFootprints1(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) )         

#else /* C interface */

    #define DX12_ID3D12Device8_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device8_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device8_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device8_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device8_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device8_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device8_SetName(This,Name)    \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device8_GetNodeCount(This)    \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device8_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device8_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device8_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device8_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device8_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device8_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device8_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device8_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device8_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device8_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device8_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device8_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device8_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device8_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device8_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device8_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device8_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device8_Evict(This,NumObjects,ppObjects)  \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device8_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device8_GetDeviceRemovedReason(This)  \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device8_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device8_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_SetStablePowerState(This,Enable)  \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device8_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device8_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device8_GetAdapterLuid(This)  \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

    #define DX12_ID3D12Device8_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->lpVtbl->CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device8_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->lpVtbl->SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device8_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->lpVtbl->SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device8_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreatePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device8_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->lpVtbl->EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device8_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->lpVtbl->CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device8_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->lpVtbl->CreateProtectedResourceSession(This,pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device8_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->lpVtbl->CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->lpVtbl->CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device8_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->lpVtbl->CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device8_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->lpVtbl->GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device8_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->lpVtbl->CreateLifetimeTracker(This,pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device8_RemoveDevice(This)    \
        ( (This)->lpVtbl->RemoveDevice(This) ) 

    #define DX12_ID3D12Device8_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommands(This,pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device8_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device8_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->lpVtbl->CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device8_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->lpVtbl->CreateStateObject(This,pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device8_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->lpVtbl->GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo) ) 

    #define DX12_ID3D12Device8_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->lpVtbl->CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) ) 

    #define DX12_ID3D12Device8_SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired)   \
        ( (This)->lpVtbl->SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired) ) 

    #define DX12_ID3D12Device8_AddToStateObject(This,pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) \
        ( (This)->lpVtbl->AddToStateObject(This,pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) ) 

    #define DX12_ID3D12Device8_CreateProtectedResourceSession1(This,pDesc,riid,ppSession)    \
        ( (This)->lpVtbl->CreateProtectedResourceSession1(This,pDesc,riid,ppSession) )

    #define DX12_ID3D12Device8_GetResourceAllocationInfo2(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->lpVtbl->GetResourceAllocationInfo2(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device8_CreateCommittedResource2(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->lpVtbl->CreateCommittedResource2(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device8_CreatePlacedResource1(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreatePlacedResource1(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device8_CreateSamplerFeedbackUnorderedAccessView(This,pTargetedResource,pFeedbackResource,DestDescriptor) \
        ( (This)->lpVtbl->CreateSamplerFeedbackUnorderedAccessView(This,pTargetedResource,pFeedbackResource,DestDescriptor) ) 

    #define DX12_ID3D12Device8_GetCopyableFootprints1(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)  \
        ( (This)->lpVtbl->GetCopyableFootprints1(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

#endif



/* ID3D12Device9 */

#if defined(__cplusplus)

    #define DX12_ID3D12Device9_QueryInterface(This,riid,ppvObject)   \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX12_ID3D12Device9_AddRef(This)  \
        ( (This)->AddRef() ) 

    #define DX12_ID3D12Device9_Release(This) \
        ( (This)->Release() ) 

    #define DX12_ID3D12Device9_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device9_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX12_ID3D12Device9_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX12_ID3D12Device9_SetName(This,Name)    \
        ( (This)->SetName(Name) ) 

    #define DX12_ID3D12Device9_GetNodeCount(This)    \
        ( (This)->GetNodeCount() ) 

    #define DX12_ID3D12Device9_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->CreateCommandQueue(pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device9_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->CreateCommandAllocator(type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device9_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreateGraphicsPipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device9_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->CreateComputePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device9_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->CreateCommandList(nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device9_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device9_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->CreateDescriptorHeap(pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->GetDescriptorHandleIncrementSize(DescriptorHeapType) ) 

    #define DX12_ID3D12Device9_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->CreateRootSignature(nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device9_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->CreateConstantBufferView(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->CreateShaderResourceView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->CreateUnorderedAccessView(pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateRenderTargetView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->CreateDepthStencilView(pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->CreateSampler(pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->CopyDescriptors(NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device9_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->CopyDescriptorsSimple(NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device9_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->GetResourceAllocationInfo(visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device9_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->GetCustomHeapProperties(nodeMask,heapType) ) 

    #define DX12_ID3D12Device9_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->CreateCommittedResource(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->CreateHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->CreatePlacedResource(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreateReservedResource(pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->CreateSharedHandle(pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device9_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->OpenSharedHandle(NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device9_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->OpenSharedHandleByName(Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device9_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->MakeResident(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device9_Evict(This,NumObjects,ppObjects)  \
        ( (This)->Evict(NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device9_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->CreateFence(InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device9_GetDeviceRemovedReason(This)  \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX12_ID3D12Device9_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->GetCopyableFootprints(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device9_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->CreateQueryHeap(pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_SetStablePowerState(This,Enable)  \
        ( (This)->SetStablePowerState(Enable) ) 

    #define DX12_ID3D12Device9_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->CreateCommandSignature(pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device9_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->GetResourceTiling(pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device9_GetAdapterLuid(This)  \
        ( (This)->GetAdapterLuid() ) 

    #define DX12_ID3D12Device9_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->CreatePipelineLibrary(pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device9_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->SetEventOnMultipleFenceCompletion(ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device9_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->SetResidencyPriority(NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device9_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->CreatePipelineState(pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device9_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromAddress(pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->OpenExistingHeapFromFileMapping(hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->EnqueueMakeResident(Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device9_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->CreateCommandList1(nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device9_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->CreateProtectedResourceSession(pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device9_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->CreateCommittedResource1(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->CreateHeap1(pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->CreateReservedResource1(pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device9_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->GetResourceAllocationInfo1(visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device9_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->CreateLifetimeTracker(pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device9_RemoveDevice(This)    \
        ( (This)->RemoveDevice() ) 

    #define DX12_ID3D12Device9_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->EnumerateMetaCommands(pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device9_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->EnumerateMetaCommandParameters(CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device9_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->CreateMetaCommand(CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device9_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->CreateStateObject(pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device9_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->GetRaytracingAccelerationStructurePrebuildInfo(pDesc,pInfo) ) 

    #define DX12_ID3D12Device9_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->CheckDriverMatchingIdentifier(SerializedDataType,pIdentifierToCheck) )

    #define DX12_ID3D12Device9_SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired)   \
        ( (This)->SetBackgroundProcessingMode(Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired) ) 

    #define DX12_ID3D12Device9_AddToStateObject(This,pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) \
        ( (This)->AddToStateObject(pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) ) 

    #define DX12_ID3D12Device9_CreateProtectedResourceSession1(This,pDesc,riid,ppSession)    \
        ( (This)->CreateProtectedResourceSession1(pDesc,riid,ppSession) )

    #define DX12_ID3D12Device9_GetResourceAllocationInfo2(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->GetResourceAllocationInfo2(visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device9_CreateCommittedResource2(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->CreateCommittedResource2(pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device9_CreatePlacedResource1(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->CreatePlacedResource1(pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateSamplerFeedbackUnorderedAccessView(This,pTargetedResource,pFeedbackResource,DestDescriptor) \
        ( (This)->CreateSamplerFeedbackUnorderedAccessView(pTargetedResource,pFeedbackResource,DestDescriptor) ) 

    #define DX12_ID3D12Device9_GetCopyableFootprints1(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)  \
        ( (This)->GetCopyableFootprints1(pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) )         

   #define DX12_ID3D12Device9_CreateCommandQueue1(This,pResourceDesc,CreatorID,riid,ppCommandQueue)  \
        ( (This)->CreateCommandQueue1(pResourceDesc,CreatorID,riid,ppCommandQueue) ) 

   #define DX12_ID3D12Device9_CreateShaderCacheSession(This,pResourceDesc,riid,ppvSession)  \
        ( (This)->CreateShaderCacheSession(pResourceDesc,riid,ppvSession) ) 

   #define DX12_ID3D12Device9_ShaderCacheControl(This,Kinds,Control)  \
        ( (This)->ShaderCacheControl(Kinds,Control) ) 

#else /* C interface */

    #define DX12_ID3D12Device9_QueryInterface(This,riid,ppvObject)   \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX12_ID3D12Device9_AddRef(This)  \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX12_ID3D12Device9_Release(This) \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX12_ID3D12Device9_GetPrivateData(This,guid,pDataSize,pData) \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX12_ID3D12Device9_SetPrivateData(This,guid,DataSize,pData)  \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX12_ID3D12Device9_SetPrivateDataInterface(This,guid,pData)  \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX12_ID3D12Device9_SetName(This,Name)    \
        ( (This)->lpVtbl->SetName(This,Name) ) 

    #define DX12_ID3D12Device9_GetNodeCount(This)    \
        ( (This)->lpVtbl->GetNodeCount(This) ) 

    #define DX12_ID3D12Device9_CreateCommandQueue(This,pDesc,riid,ppCommandQueue)    \
        ( (This)->lpVtbl->CreateCommandQueue(This,pDesc,riid,ppCommandQueue) ) 

    #define DX12_ID3D12Device9_CreateCommandAllocator(This,type,riid,ppCommandAllocator) \
        ( (This)->lpVtbl->CreateCommandAllocator(This,type,riid,ppCommandAllocator) ) 

    #define DX12_ID3D12Device9_CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device9_CreateComputePipelineState(This,pDesc,riid,ppPipelineState)   \
        ( (This)->lpVtbl->CreateComputePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device9_CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList)  \
        ( (This)->lpVtbl->CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) ) 

    #define DX12_ID3D12Device9_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)  \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX12_ID3D12Device9_CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_GetDescriptorHandleIncrementSize(This,DescriptorHeapType) \
        ( (This)->lpVtbl->GetDescriptorHandleIncrementSize(This,DescriptorHeapType) ) 

    #define DX12_ID3D12Device9_CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) \
        ( (This)->lpVtbl->CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) ) 

    #define DX12_ID3D12Device9_CreateConstantBufferView(This,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateConstantBufferView(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateRenderTargetView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateDepthStencilView(This,pResource,pDesc,DestDescriptor)   \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CreateSampler(This,pDesc,DestDescriptor)  \
        ( (This)->lpVtbl->CreateSampler(This,pDesc,DestDescriptor) ) 

    #define DX12_ID3D12Device9_CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType)  \
        ( (This)->lpVtbl->CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device9_CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType)   \
        ( (This)->lpVtbl->CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) ) 

    #define DX12_ID3D12Device9_GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs)   \
        ( (This)->lpVtbl->GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) ) 

    #define DX12_ID3D12Device9_GetCustomHeapProperties(This,nodeMask,heapType)   \
        ( (This)->lpVtbl->GetCustomHeapProperties(This,nodeMask,heapType) ) 

    #define DX12_ID3D12Device9_CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource)  \
        ( (This)->lpVtbl->CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateHeap(This,pDesc,riid,ppvHeap)   \
        ( (This)->lpVtbl->CreateHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource)  \
        ( (This)->lpVtbl->CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle)  \
        ( (This)->lpVtbl->CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) ) 

    #define DX12_ID3D12Device9_OpenSharedHandle(This,NTHandle,riid,ppvObj)   \
        ( (This)->lpVtbl->OpenSharedHandle(This,NTHandle,riid,ppvObj) ) 

    #define DX12_ID3D12Device9_OpenSharedHandleByName(This,Name,Access,pNTHandle)    \
        ( (This)->lpVtbl->OpenSharedHandleByName(This,Name,Access,pNTHandle) ) 

    #define DX12_ID3D12Device9_MakeResident(This,NumObjects,ppObjects)   \
        ( (This)->lpVtbl->MakeResident(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device9_Evict(This,NumObjects,ppObjects)  \
        ( (This)->lpVtbl->Evict(This,NumObjects,ppObjects) ) 

    #define DX12_ID3D12Device9_CreateFence(This,InitialValue,Flags,riid,ppFence) \
        ( (This)->lpVtbl->CreateFence(This,InitialValue,Flags,riid,ppFence) ) 

    #define DX12_ID3D12Device9_GetDeviceRemovedReason(This)  \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX12_ID3D12Device9_GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)   \
        ( (This)->lpVtbl->GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

    #define DX12_ID3D12Device9_CreateQueryHeap(This,pDesc,riid,ppvHeap)  \
        ( (This)->lpVtbl->CreateQueryHeap(This,pDesc,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_SetStablePowerState(This,Enable)  \
        ( (This)->lpVtbl->SetStablePowerState(This,Enable) ) 

    #define DX12_ID3D12Device9_CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature)    \
        ( (This)->lpVtbl->CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) ) 

    #define DX12_ID3D12Device9_GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips)    \
        ( (This)->lpVtbl->GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) ) 

    #define DX12_ID3D12Device9_GetAdapterLuid(This)  \
        ( (This)->lpVtbl->GetAdapterLuid(This) ) 

    #define DX12_ID3D12Device9_CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary)    \
        ( (This)->lpVtbl->CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) ) 

    #define DX12_ID3D12Device9_SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent)  \
        ( (This)->lpVtbl->SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) ) 

    #define DX12_ID3D12Device9_SetResidencyPriority(This,NumObjects,ppObjects,pPriorities)   \
        ( (This)->lpVtbl->SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) ) 

    #define DX12_ID3D12Device9_CreatePipelineState(This,pDesc,riid,ppPipelineState)  \
        ( (This)->lpVtbl->CreatePipelineState(This,pDesc,riid,ppPipelineState) ) 

    #define DX12_ID3D12Device9_OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap)   \
        ( (This)->lpVtbl->OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal)    \
        ( (This)->lpVtbl->EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) ) 

    #define DX12_ID3D12Device9_CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList)   \
        ( (This)->lpVtbl->CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList) ) 

    #define DX12_ID3D12Device9_CreateProtectedResourceSession(This,pDesc,riid,ppSession) \
        ( (This)->lpVtbl->CreateProtectedResourceSession(This,pDesc,riid,ppSession) ) 

    #define DX12_ID3D12Device9_CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->lpVtbl->CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap)    \
        ( (This)->lpVtbl->CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap) ) 

    #define DX12_ID3D12Device9_CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource)  \
        ( (This)->lpVtbl->CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) ) 

    #define DX12_ID3D12Device9_GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->lpVtbl->GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device9_CreateLifetimeTracker(This,pOwner,riid,ppvTracker)    \
        ( (This)->lpVtbl->CreateLifetimeTracker(This,pOwner,riid,ppvTracker) ) 

    #define DX12_ID3D12Device9_RemoveDevice(This)    \
        ( (This)->lpVtbl->RemoveDevice(This) ) 

    #define DX12_ID3D12Device9_EnumerateMetaCommands(This,pNumMetaCommands,pDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommands(This,pNumMetaCommands,pDescs) ) 

    #define DX12_ID3D12Device9_EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs)   \
        ( (This)->lpVtbl->EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) ) 

    #define DX12_ID3D12Device9_CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand)   \
        ( (This)->lpVtbl->CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) ) 

    #define DX12_ID3D12Device9_CreateStateObject(This,pDesc,riid,ppStateObject)  \
        ( (This)->lpVtbl->CreateStateObject(This,pDesc,riid,ppStateObject) ) 

    #define DX12_ID3D12Device9_GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo)  \
        ( (This)->lpVtbl->GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo) ) 

    #define DX12_ID3D12Device9_CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) \
        ( (This)->lpVtbl->CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) ) 

    #define DX12_ID3D12Device9_SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired)   \
        ( (This)->lpVtbl->SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired) ) 

    #define DX12_ID3D12Device9_AddToStateObject(This,pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) \
        ( (This)->lpVtbl->AddToStateObject(This,pAddition,pStateObjectToGrowFrom,riid,ppNewStateObject) ) 

    #define DX12_ID3D12Device9_CreateProtectedResourceSession1(This,pDesc,riid,ppSession)    \
        ( (This)->lpVtbl->CreateProtectedResourceSession1(This,pDesc,riid,ppSession) )

    #define DX12_ID3D12Device9_GetResourceAllocationInfo2(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) \
        ( (This)->lpVtbl->GetResourceAllocationInfo2(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) ) 

    #define DX12_ID3D12Device9_CreateCommittedResource2(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource)   \
        ( (This)->lpVtbl->CreateCommittedResource2(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) ) 

    #define DX12_ID3D12Device9_CreatePlacedResource1(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) \
        ( (This)->lpVtbl->CreatePlacedResource1(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) ) 

    #define DX12_ID3D12Device9_CreateSamplerFeedbackUnorderedAccessView(This,pTargetedResource,pFeedbackResource,DestDescriptor) \
        ( (This)->lpVtbl->CreateSamplerFeedbackUnorderedAccessView(This,pTargetedResource,pFeedbackResource,DestDescriptor) ) 

    #define DX12_ID3D12Device9_GetCopyableFootprints1(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes)  \
        ( (This)->lpVtbl->GetCopyableFootprints1(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) ) 

   #define DX12_ID3D12Device9_CreateCommandQueue1(This,pResourceDesc,CreatorID,riid,ppCommandQueue)  \
        ( (This)->lpVtbl->CreateCommandQueue1(This,pResourceDesc,CreatorID,riid,ppCommandQueue) ) 

   #define DX12_ID3D12Device9_CreateShaderCacheSession(This,pResourceDesc,riid,ppvSession)  \
        ( (This)->lpVtbl->CreateShaderCacheSession(This,pResourceDesc,riid,ppvSession) ) 

   #define DX12_ID3D12Device9_ShaderCacheControl(This,Kinds,Control)  \
        ( (This)->lpVtbl->ShaderCacheControl(This,Kinds,Control) ) 

#endif

#endif /* WIN32_D3D12_H */
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
