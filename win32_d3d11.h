/*
------------------------------------------------------------------------------
    win32_d3d11 - v0.01 - public domain D3D11 C/C++ agnostic layer

    DO THIS:
        #include <d3d11.h>
        #include <dxgi1_6.h>
        #include <d3dcompiler.h>
        #include "win32_dxgi.h"
        #include "win32_d3d11.h"

    LICENSE:
        See end of file for license information

------------------------------------------------------------------------------
*/
#ifndef WIN32_D3D11_H
#define WIN32_D3D11_H

#if defined(__cplusplus)
    #define DX11_IID(x) (__uuidof(x))
#else
    #define DX11_IID(x) (&IID_##x)
#endif


/* ID3D11Device */

#if defined(__cplusplus)

    #define DX11_ID3D11Device_QueryInterface(This,riid,ppvObject)    \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX11_ID3D11Device_AddRef(This)   \
        ( (This)->AddRef() ) 

    #define DX11_ID3D11Device_Release(This)  \
        ( (This)->Release() ) 

    #define DX11_ID3D11Device_CreateBuffer(This,pDesc,pInitialData,ppBuffer) \
        ( (This)->CreateBuffer(pDesc,pInitialData,ppBuffer) ) 

    #define DX11_ID3D11Device_CreateTexture1D(This,pDesc,pInitialData,ppTexture1D)   \
        ( (This)->CreateTexture1D(pDesc,pInitialData,ppTexture1D) ) 

    #define DX11_ID3D11Device_CreateTexture2D(This,pDesc,pInitialData,ppTexture2D)   \
        ( (This)->CreateTexture2D(,pDesc,pInitialData,ppTexture2D) ) 

    #define DX11_ID3D11Device_CreateTexture3D(This,pDesc,pInitialData,ppTexture3D)   \
        ( (This)->CreateTexture3D(,pDesc,pInitialData,ppTexture3D) ) 

    #define DX11_ID3D11Device_CreateShaderResourceView(This,pResource,pDesc,ppSRView)    \
        ( (This)->CreateShaderResourceView(,pResource,pDesc,ppSRView) ) 

    #define DX11_ID3D11Device_CreateUnorderedAccessView(This,pResource,pDesc,ppUAView)   \
        ( (This)->CreateUnorderedAccessView(,pResource,pDesc,ppUAView) ) 

    #define DX11_ID3D11Device_CreateRenderTargetView(This,pResource,pDesc,ppRTView)  \
        ( (This)->CreateRenderTargetView(,pResource,pDesc,ppRTView) ) 

    #define DX11_ID3D11Device_CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView)    \
        ( (This)->CreateDepthStencilView(pResource,pDesc,ppDepthStencilView) ) 

    #define DX11_ID3D11Device_CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout)  \
        ( (This)->CreateInputLayout(pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout) ) 

    #define DX11_ID3D11Device_CreateVertexShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppVertexShader)   \
        ( (This)->CreateVertexShader(pShaderBytecode,BytecodeLength,pClassLinkage,ppVertexShader) ) 

    #define DX11_ID3D11Device_CreateGeometryShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppGeometryShader)   \
        ( (This)->CreateGeometryShader(pShaderBytecode,BytecodeLength,pClassLinkage,ppGeometryShader) ) 

    #define DX11_ID3D11Device_CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,pBufferStrides,NumStrides,RasterizedStream,pClassLinkage,ppGeometryShader)  \
        ( (This)->CreateGeometryShaderWithStreamOutput(pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,pBufferStrides,NumStrides,RasterizedStream,pClassLinkage,ppGeometryShader) ) 

    #define DX11_ID3D11Device_CreatePixelShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppPixelShader) \
        ( (This)->CreatePixelShader(pShaderBytecode,BytecodeLength,pClassLinkage,ppPixelShader) ) 

    #define DX11_ID3D11Device_CreateHullShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppHullShader)   \
        ( (This)->CreateHullShader(pShaderBytecode,BytecodeLength,pClassLinkage,ppHullShader) ) 

    #define DX11_ID3D11Device_CreateDomainShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppDomainShader)   \
        ( (This)->CreateDomainShader(pShaderBytecode,BytecodeLength,pClassLinkage,ppDomainShader) ) 

    #define DX11_ID3D11Device_CreateComputeShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppComputeShader) \
        ( (This)->CreateComputeShader(pShaderBytecode,BytecodeLength,pClassLinkage,ppComputeShader) ) 

    #define DX11_ID3D11Device_CreateClassLinkage(This,ppLinkage) \
        ( (This)->CreateClassLinkage(ppLinkage) ) 

    #define DX11_ID3D11Device_CreateBlendState(This,pBlendStateDesc,ppBlendState)    \
        ( (This)->CreateBlendState(pBlendStateDesc,ppBlendState) ) 

    #define DX11_ID3D11Device_CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState)    \
        ( (This)->CreateDepthStencilState(pDepthStencilDesc,ppDepthStencilState) ) 

    #define DX11_ID3D11Device_CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState)  \
        ( (This)->CreateRasterizerState(pRasterizerDesc,ppRasterizerState) ) 

    #define DX11_ID3D11Device_CreateSamplerState(This,pSamplerDesc,ppSamplerState)   \
        ( (This)->CreateSamplerState(pSamplerDesc,ppSamplerState) ) 

    #define DX11_ID3D11Device_CreateQuery(This,pQueryDesc,ppQuery)   \
        ( (This)->CreateQuery(pQueryDesc,ppQuery) ) 

    #define DX11_ID3D11Device_CreatePredicate(This,pPredicateDesc,ppPredicate)   \
        ( (This)->CreatePredicate(pPredicateDesc,ppPredicate) ) 

    #define DX11_ID3D11Device_CreateCounter(This,pCounterDesc,ppCounter) \
        ( (This)->CreateCounter(pCounterDesc,ppCounter) ) 

    #define DX11_ID3D11Device_CreateDeferredContext(This,ContextFlags,ppDeferredContext) \
        ( (This)->CreateDeferredContext(ContextFlags,ppDeferredContext) ) 

    #define DX11_ID3D11Device_OpenSharedResource(This,hResource,ReturnedInterface,ppResource)    \
        ( (This)->OpenSharedResource(hResource,ReturnedInterface,ppResource) ) 

    #define DX11_ID3D11Device_CheckFormatSupport(This,Format,pFormatSupport) \
        ( (This)->CheckFormatSupport(Format,pFormatSupport) ) 

    #define DX11_ID3D11Device_CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels)   \
        ( (This)->CheckMultisampleQualityLevels(Format,SampleCount,pNumQualityLevels) ) 

    #define DX11_ID3D11Device_CheckCounterInfo(This,pCounterInfo)    \
        ( (This)->CheckCounterInfo(pCounterInfo) ) 

    #define DX11_ID3D11Device_CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength)    \
        ( (This)->CheckCounter(pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength) ) 

    #define DX11_ID3D11Device_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)   \
        ( (This)->CheckFeatureSupport(Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX11_ID3D11Device_GetPrivateData(This,guid,pDataSize,pData)  \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX11_ID3D11Device_SetPrivateData(This,guid,DataSize,pData)   \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX11_ID3D11Device_SetPrivateDataInterface(This,guid,pData)   \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX11_ID3D11Device_GetFeatureLevel(This)  \
        ( (This)->GetFeatureLevel() ) 

    #define DX11_ID3D11Device_GetCreationFlags(This) \
        ( (This)->GetCreationFlags() ) 

    #define DX11_ID3D11Device_GetDeviceRemovedReason(This)   \
        ( (This)->GetDeviceRemovedReason() ) 

    #define DX11_ID3D11Device_GetImmediateContext(This,ppImmediateContext)   \
        ( (This)->GetImmediateContext(ppImmediateContext) ) 

    #define DX11_ID3D11Device_SetExceptionMode(This,RaiseFlags)  \
        ( (This)->SetExceptionMode(RaiseFlags) ) 

    #define DX11_ID3D11Device_GetExceptionMode(This) \
        ( (This)->GetExceptionMode() ) 

#else /* C interface */

    #define DX11_ID3D11Device_QueryInterface(This,riid,ppvObject)    \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX11_ID3D11Device_AddRef(This)   \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX11_ID3D11Device_Release(This)  \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX11_ID3D11Device_CreateBuffer(This,pDesc,pInitialData,ppBuffer) \
        ( (This)->lpVtbl->CreateBuffer(This,pDesc,pInitialData,ppBuffer) ) 

    #define DX11_ID3D11Device_CreateTexture1D(This,pDesc,pInitialData,ppTexture1D)   \
        ( (This)->lpVtbl->CreateTexture1D(This,pDesc,pInitialData,ppTexture1D) ) 

    #define DX11_ID3D11Device_CreateTexture2D(This,pDesc,pInitialData,ppTexture2D)   \
        ( (This)->lpVtbl->CreateTexture2D(This,pDesc,pInitialData,ppTexture2D) ) 

    #define DX11_ID3D11Device_CreateTexture3D(This,pDesc,pInitialData,ppTexture3D)   \
        ( (This)->lpVtbl->CreateTexture3D(This,pDesc,pInitialData,ppTexture3D) ) 

    #define DX11_ID3D11Device_CreateShaderResourceView(This,pResource,pDesc,ppSRView)    \
        ( (This)->lpVtbl->CreateShaderResourceView(This,pResource,pDesc,ppSRView) ) 

    #define DX11_ID3D11Device_CreateUnorderedAccessView(This,pResource,pDesc,ppUAView)   \
        ( (This)->lpVtbl->CreateUnorderedAccessView(This,pResource,pDesc,ppUAView) ) 

    #define DX11_ID3D11Device_CreateRenderTargetView(This,pResource,pDesc,ppRTView)  \
        ( (This)->lpVtbl->CreateRenderTargetView(This,pResource,pDesc,ppRTView) ) 

    #define DX11_ID3D11Device_CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView)    \
        ( (This)->lpVtbl->CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView) ) 

    #define DX11_ID3D11Device_CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout)  \
        ( (This)->lpVtbl->CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout) ) 

    #define DX11_ID3D11Device_CreateVertexShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppVertexShader)   \
        ( (This)->lpVtbl->CreateVertexShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppVertexShader) ) 

    #define DX11_ID3D11Device_CreateGeometryShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppGeometryShader)   \
        ( (This)->lpVtbl->CreateGeometryShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppGeometryShader) ) 

    #define DX11_ID3D11Device_CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,pBufferStrides,NumStrides,RasterizedStream,pClassLinkage,ppGeometryShader)  \
        ( (This)->lpVtbl->CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,pBufferStrides,NumStrides,RasterizedStream,pClassLinkage,ppGeometryShader) ) 

    #define DX11_ID3D11Device_CreatePixelShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppPixelShader) \
        ( (This)->lpVtbl->CreatePixelShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppPixelShader) ) 

    #define DX11_ID3D11Device_CreateHullShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppHullShader)   \
        ( (This)->lpVtbl->CreateHullShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppHullShader) ) 

    #define DX11_ID3D11Device_CreateDomainShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppDomainShader)   \
        ( (This)->lpVtbl->CreateDomainShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppDomainShader) ) 

    #define DX11_ID3D11Device_CreateComputeShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppComputeShader) \
        ( (This)->lpVtbl->CreateComputeShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppComputeShader) ) 

    #define DX11_ID3D11Device_CreateClassLinkage(This,ppLinkage) \
        ( (This)->lpVtbl->CreateClassLinkage(This,ppLinkage) ) 

    #define DX11_ID3D11Device_CreateBlendState(This,pBlendStateDesc,ppBlendState)    \
        ( (This)->lpVtbl->CreateBlendState(This,pBlendStateDesc,ppBlendState) ) 

    #define DX11_ID3D11Device_CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState)    \
        ( (This)->lpVtbl->CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState) ) 

    #define DX11_ID3D11Device_CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState)  \
        ( (This)->lpVtbl->CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState) ) 

    #define DX11_ID3D11Device_CreateSamplerState(This,pSamplerDesc,ppSamplerState)   \
        ( (This)->lpVtbl->CreateSamplerState(This,pSamplerDesc,ppSamplerState) ) 

    #define DX11_ID3D11Device_CreateQuery(This,pQueryDesc,ppQuery)   \
        ( (This)->lpVtbl->CreateQuery(This,pQueryDesc,ppQuery) ) 

    #define DX11_ID3D11Device_CreatePredicate(This,pPredicateDesc,ppPredicate)   \
        ( (This)->lpVtbl->CreatePredicate(This,pPredicateDesc,ppPredicate) ) 

    #define DX11_ID3D11Device_CreateCounter(This,pCounterDesc,ppCounter) \
        ( (This)->lpVtbl->CreateCounter(This,pCounterDesc,ppCounter) ) 

    #define DX11_ID3D11Device_CreateDeferredContext(This,ContextFlags,ppDeferredContext) \
        ( (This)->lpVtbl->CreateDeferredContext(This,ContextFlags,ppDeferredContext) ) 

    #define DX11_ID3D11Device_OpenSharedResource(This,hResource,ReturnedInterface,ppResource)    \
        ( (This)->lpVtbl->OpenSharedResource(This,hResource,ReturnedInterface,ppResource) ) 

    #define DX11_ID3D11Device_CheckFormatSupport(This,Format,pFormatSupport) \
        ( (This)->lpVtbl->CheckFormatSupport(This,Format,pFormatSupport) ) 

    #define DX11_ID3D11Device_CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels)   \
        ( (This)->lpVtbl->CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels) ) 

    #define DX11_ID3D11Device_CheckCounterInfo(This,pCounterInfo)    \
        ( (This)->lpVtbl->CheckCounterInfo(This,pCounterInfo) ) 

    #define DX11_ID3D11Device_CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength)    \
        ( (This)->lpVtbl->CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength) ) 

    #define DX11_ID3D11Device_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)   \
        ( (This)->lpVtbl->CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

    #define DX11_ID3D11Device_GetPrivateData(This,guid,pDataSize,pData)  \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX11_ID3D11Device_SetPrivateData(This,guid,DataSize,pData)   \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX11_ID3D11Device_SetPrivateDataInterface(This,guid,pData)   \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX11_ID3D11Device_GetFeatureLevel(This)  \
        ( (This)->lpVtbl->GetFeatureLevel(This) ) 

    #define DX11_ID3D11Device_GetCreationFlags(This) \
        ( (This)->lpVtbl->GetCreationFlags(This) ) 

    #define DX11_ID3D11Device_GetDeviceRemovedReason(This)   \
        ( (This)->lpVtbl->GetDeviceRemovedReason(This) ) 

    #define DX11_ID3D11Device_GetImmediateContext(This,ppImmediateContext)   \
        ( (This)->lpVtbl->GetImmediateContext(This,ppImmediateContext) ) 

    #define DX11_ID3D11Device_SetExceptionMode(This,RaiseFlags)  \
        ( (This)->lpVtbl->SetExceptionMode(This,RaiseFlags) ) 

    #define DX11_ID3D11Device_GetExceptionMode(This) \
        ( (This)->lpVtbl->GetExceptionMode(This) ) 

#endif


/* ID3D11InfoQueue */

#if defined(__cplusplus)

    #define DX11_ID3D11InfoQueue_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX11_ID3D11InfoQueue_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DX11_ID3D11InfoQueue_Release(This)   \
        ( (This)->Release() ) 

    #define DX11_ID3D11InfoQueue_SetMessageCountLimit(This,MessageCountLimit)    \
        ( (This)->SetMessageCountLimit(MessageCountLimit) ) 

    #define DX11_ID3D11InfoQueue_ClearStoredMessages(This)   \
        ( (This)->ClearStoredMessages() ) 

    #define DX11_ID3D11InfoQueue_GetMessage(This,MessageIndex,pMessage,pMessageByteLength)   \
        ( (This)->GetMessage(MessageIndex,pMessage,pMessageByteLength) ) 

    #define DX11_ID3D11InfoQueue_GetNumMessagesAllowedByStorageFilter(This)  \
        ( (This)->GetNumMessagesAllowedByStorageFilter() ) 

    #define DX11_ID3D11InfoQueue_GetNumMessagesDeniedByStorageFilter(This)   \
        ( (This)->GetNumMessagesDeniedByStorageFilter() ) 

    #define DX11_ID3D11InfoQueue_GetNumStoredMessages(This)  \
        ( (This)->GetNumStoredMessages() ) 

    #define DX11_ID3D11InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(This)  \
        ( (This)->GetNumStoredMessagesAllowedByRetrievalFilter() ) 

    #define DX11_ID3D11InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(This)    \
        ( (This)->GetNumMessagesDiscardedByMessageCountLimit() ) 

    #define DX11_ID3D11InfoQueue_GetMessageCountLimit(This)  \
        ( (This)->GetMessageCountLimit() ) 

    #define DX11_ID3D11InfoQueue_AddStorageFilterEntries(This,pFilter)   \
        ( (This)->AddStorageFilterEntries(pFilter) ) 

    #define DX11_ID3D11InfoQueue_GetStorageFilter(This,pFilter,pFilterByteLength)    \
        ( (This)->GetStorageFilter(pFilter,pFilterByteLength) ) 

    #define DX11_ID3D11InfoQueue_ClearStorageFilter(This)    \
        ( (This)->ClearStorageFilter() ) 

    #define DX11_ID3D11InfoQueue_PushEmptyStorageFilter(This)    \
        ( (This)->PushEmptyStorageFilter() ) 

    #define DX11_ID3D11InfoQueue_PushCopyOfStorageFilter(This)   \
        ( (This)->PushCopyOfStorageFilter() ) 

    #define DX11_ID3D11InfoQueue_PushStorageFilter(This,pFilter) \
        ( (This)->PushStorageFilter(pFilter) ) 

    #define DX11_ID3D11InfoQueue_PopStorageFilter(This)  \
        ( (This)->PopStorageFilter() ) 

    #define DX11_ID3D11InfoQueue_GetStorageFilterStackSize(This) \
        ( (This)->GetStorageFilterStackSize() ) 

    #define DX11_ID3D11InfoQueue_AddRetrievalFilterEntries(This,pFilter) \
        ( (This)->AddRetrievalFilterEntries(pFilter) ) 

    #define DX11_ID3D11InfoQueue_GetRetrievalFilter(This,pFilter,pFilterByteLength)  \
        ( (This)->GetRetrievalFilter(pFilter,pFilterByteLength) ) 

    #define DX11_ID3D11InfoQueue_ClearRetrievalFilter(This)  \
        ( (This)->ClearRetrievalFilter() ) 

    #define DX11_ID3D11InfoQueue_PushEmptyRetrievalFilter(This)  \
        ( (This)->PushEmptyRetrievalFilter() ) 

    #define DX11_ID3D11InfoQueue_PushCopyOfRetrievalFilter(This) \
        ( (This)->PushCopyOfRetrievalFilter() ) 

    #define DX11_ID3D11InfoQueue_PushRetrievalFilter(This,pFilter)   \
        ( (This)->PushRetrievalFilter(pFilter) ) 

    #define DX11_ID3D11InfoQueue_PopRetrievalFilter(This)    \
        ( (This)->PopRetrievalFilter() ) 

    #define DX11_ID3D11InfoQueue_GetRetrievalFilterStackSize(This)   \
        ( (This)->GetRetrievalFilterStackSize() ) 

    #define DX11_ID3D11InfoQueue_AddMessage(This,Category,Severity,ID,pDescription)  \
        ( (This)->AddMessage(Category,Severity,ID,pDescription) ) 

    #define DX11_ID3D11InfoQueue_AddApplicationMessage(This,Severity,pDescription)   \
        ( (This)->AddApplicationMessage(Severity,pDescription) ) 

    #define DX11_ID3D11InfoQueue_SetBreakOnCategory(This,Category,bEnable)   \
        ( (This)->SetBreakOnCategory(Category,bEnable) ) 

    #define DX11_ID3D11InfoQueue_SetBreakOnSeverity(This,Severity,bEnable)   \
        ( (This)->SetBreakOnSeverity(Severity,bEnable) ) 

    #define DX11_ID3D11InfoQueue_SetBreakOnID(This,ID,bEnable)   \
        ( (This)->SetBreakOnID(ID,bEnable) ) 

    #define DX11_ID3D11InfoQueue_GetBreakOnCategory(This,Category)   \
        ( (This)->GetBreakOnCategory(Category) ) 

    #define DX11_ID3D11InfoQueue_GetBreakOnSeverity(This,Severity)   \
        ( (This)->GetBreakOnSeverity(Severity) ) 

    #define DX11_ID3D11InfoQueue_GetBreakOnID(This,ID)   \
        ( (This)->GetBreakOnID(ID) ) 

    #define DX11_ID3D11InfoQueue_SetMuteDebugOutput(This,bMute)  \
        ( (This)->SetMuteDebugOutput(bMute) ) 

    #define DX11_ID3D11InfoQueue_GetMuteDebugOutput(This)    \
        ( (This)->GetMuteDebugOutput() ) 

#else /* C interface */

    #define DX11_ID3D11InfoQueue_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX11_ID3D11InfoQueue_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX11_ID3D11InfoQueue_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX11_ID3D11InfoQueue_SetMessageCountLimit(This,MessageCountLimit)    \
        ( (This)->lpVtbl->SetMessageCountLimit(This,MessageCountLimit) ) 

    #define DX11_ID3D11InfoQueue_ClearStoredMessages(This)   \
        ( (This)->lpVtbl->ClearStoredMessages(This) ) 

    #define DX11_ID3D11InfoQueue_GetMessage(This,MessageIndex,pMessage,pMessageByteLength)   \
        ( (This)->lpVtbl->GetMessage(This,MessageIndex,pMessage,pMessageByteLength) ) 

    #define DX11_ID3D11InfoQueue_GetNumMessagesAllowedByStorageFilter(This)  \
        ( (This)->lpVtbl->GetNumMessagesAllowedByStorageFilter(This) ) 

    #define DX11_ID3D11InfoQueue_GetNumMessagesDeniedByStorageFilter(This)   \
        ( (This)->lpVtbl->GetNumMessagesDeniedByStorageFilter(This) ) 

    #define DX11_ID3D11InfoQueue_GetNumStoredMessages(This)  \
        ( (This)->lpVtbl->GetNumStoredMessages(This) ) 

    #define DX11_ID3D11InfoQueue_GetNumStoredMessagesAllowedByRetrievalFilter(This)  \
        ( (This)->lpVtbl->GetNumStoredMessagesAllowedByRetrievalFilter(This) ) 

    #define DX11_ID3D11InfoQueue_GetNumMessagesDiscardedByMessageCountLimit(This)    \
        ( (This)->lpVtbl->GetNumMessagesDiscardedByMessageCountLimit(This) ) 

    #define DX11_ID3D11InfoQueue_GetMessageCountLimit(This)  \
        ( (This)->lpVtbl->GetMessageCountLimit(This) ) 

    #define DX11_ID3D11InfoQueue_AddStorageFilterEntries(This,pFilter)   \
        ( (This)->lpVtbl->AddStorageFilterEntries(This,pFilter) ) 

    #define DX11_ID3D11InfoQueue_GetStorageFilter(This,pFilter,pFilterByteLength)    \
        ( (This)->lpVtbl->GetStorageFilter(This,pFilter,pFilterByteLength) ) 

    #define DX11_ID3D11InfoQueue_ClearStorageFilter(This)    \
        ( (This)->lpVtbl->ClearStorageFilter(This) ) 

    #define DX11_ID3D11InfoQueue_PushEmptyStorageFilter(This)    \
        ( (This)->lpVtbl->PushEmptyStorageFilter(This) ) 

    #define DX11_ID3D11InfoQueue_PushCopyOfStorageFilter(This)   \
        ( (This)->lpVtbl->PushCopyOfStorageFilter(This) ) 

    #define DX11_ID3D11InfoQueue_PushStorageFilter(This,pFilter) \
        ( (This)->lpVtbl->PushStorageFilter(This,pFilter) ) 

    #define DX11_ID3D11InfoQueue_PopStorageFilter(This)  \
        ( (This)->lpVtbl->PopStorageFilter(This) ) 

    #define DX11_ID3D11InfoQueue_GetStorageFilterStackSize(This) \
        ( (This)->lpVtbl->GetStorageFilterStackSize(This) ) 

    #define DX11_ID3D11InfoQueue_AddRetrievalFilterEntries(This,pFilter) \
        ( (This)->lpVtbl->AddRetrievalFilterEntries(This,pFilter) ) 

    #define DX11_ID3D11InfoQueue_GetRetrievalFilter(This,pFilter,pFilterByteLength)  \
        ( (This)->lpVtbl->GetRetrievalFilter(This,pFilter,pFilterByteLength) ) 

    #define DX11_ID3D11InfoQueue_ClearRetrievalFilter(This)  \
        ( (This)->lpVtbl->ClearRetrievalFilter(This) ) 

    #define DX11_ID3D11InfoQueue_PushEmptyRetrievalFilter(This)  \
        ( (This)->lpVtbl->PushEmptyRetrievalFilter(This) ) 

    #define DX11_ID3D11InfoQueue_PushCopyOfRetrievalFilter(This) \
        ( (This)->lpVtbl->PushCopyOfRetrievalFilter(This) ) 

    #define DX11_ID3D11InfoQueue_PushRetrievalFilter(This,pFilter)   \
        ( (This)->lpVtbl->PushRetrievalFilter(This,pFilter) ) 

    #define DX11_ID3D11InfoQueue_PopRetrievalFilter(This)    \
        ( (This)->lpVtbl->PopRetrievalFilter(This) ) 

    #define DX11_ID3D11InfoQueue_GetRetrievalFilterStackSize(This)   \
        ( (This)->lpVtbl->GetRetrievalFilterStackSize(This) ) 

    #define DX11_ID3D11InfoQueue_AddMessage(This,Category,Severity,ID,pDescription)  \
        ( (This)->lpVtbl->AddMessage(This,Category,Severity,ID,pDescription) ) 

    #define DX11_ID3D11InfoQueue_AddApplicationMessage(This,Severity,pDescription)   \
        ( (This)->lpVtbl->AddApplicationMessage(This,Severity,pDescription) ) 

    #define DX11_ID3D11InfoQueue_SetBreakOnCategory(This,Category,bEnable)   \
        ( (This)->lpVtbl->SetBreakOnCategory(This,Category,bEnable) ) 

    #define DX11_ID3D11InfoQueue_SetBreakOnSeverity(This,Severity,bEnable)   \
        ( (This)->lpVtbl->SetBreakOnSeverity(This,Severity,bEnable) ) 

    #define DX11_ID3D11InfoQueue_SetBreakOnID(This,ID,bEnable)   \
        ( (This)->lpVtbl->SetBreakOnID(This,ID,bEnable) ) 

    #define DX11_ID3D11InfoQueue_GetBreakOnCategory(This,Category)   \
        ( (This)->lpVtbl->GetBreakOnCategory(This,Category) ) 

    #define DX11_ID3D11InfoQueue_GetBreakOnSeverity(This,Severity)   \
        ( (This)->lpVtbl->GetBreakOnSeverity(This,Severity) ) 

    #define DX11_ID3D11InfoQueue_GetBreakOnID(This,ID)   \
        ( (This)->lpVtbl->GetBreakOnID(This,ID) ) 

    #define DX11_ID3D11InfoQueue_SetMuteDebugOutput(This,bMute)  \
        ( (This)->lpVtbl->SetMuteDebugOutput(This,bMute) ) 

    #define DX11_ID3D11InfoQueue_GetMuteDebugOutput(This)    \
        ( (This)->lpVtbl->GetMuteDebugOutput(This) ) 

#endif


/* ID3D11DeviceContext */

#if defined(__cplusplus)

    #define DX11_ID3D11DeviceContext_QueryInterface(This,riid,ppvObject) \
        ( (This)->QueryInterface(riid,ppvObject) ) 

    #define DX11_ID3D11DeviceContext_AddRef(This)    \
        ( (This)->AddRef() ) 

    #define DX11_ID3D11DeviceContext_Release(This)   \
        ( (This)->Release() ) 

    #define DX11_ID3D11DeviceContext_GetDevice(This,ppDevice)    \
        ( (This)->GetDevice(ppDevice) ) 

    #define DX11_ID3D11DeviceContext_GetPrivateData(This,guid,pDataSize,pData)   \
        ( (This)->GetPrivateData(guid,pDataSize,pData) ) 

    #define DX11_ID3D11DeviceContext_SetPrivateData(This,guid,DataSize,pData)    \
        ( (This)->SetPrivateData(guid,DataSize,pData) ) 

    #define DX11_ID3D11DeviceContext_SetPrivateDataInterface(This,guid,pData)    \
        ( (This)->SetPrivateDataInterface(guid,pData) ) 

    #define DX11_ID3D11DeviceContext_VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->VSSetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->PSSetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_PSSetShader(This,pPixelShader,ppClassInstances,NumClassInstances)   \
        ( (This)->PSSetShader(pPixelShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->PSSetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_VSSetShader(This,pVertexShader,ppClassInstances,NumClassInstances)  \
        ( (This)->VSSetShader(pVertexShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation)  \
        ( (This)->DrawIndexed(IndexCount,StartIndexLocation,BaseVertexLocation) ) 

    #define DX11_ID3D11DeviceContext_Draw(This,VertexCount,StartVertexLocation)  \
        ( (This)->Draw(VertexCount,StartVertexLocation) ) 

    #define DX11_ID3D11DeviceContext_Map(This,pResource,Subresource,MapType,MapFlags,pMappedResource)    \
        ( (This)->Map(pResource,Subresource,MapType,MapFlags,pMappedResource) ) 

    #define DX11_ID3D11DeviceContext_Unmap(This,pResource,Subresource)   \
        ( (This)->Unmap(pResource,Subresource) ) 

    #define DX11_ID3D11DeviceContext_PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->PSSetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_IASetInputLayout(This,pInputLayout) \
        ( (This)->IASetInputLayout(pInputLayout) ) 

    #define DX11_ID3D11DeviceContext_IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) \
        ( (This)->IASetVertexBuffers(StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) ) 

    #define DX11_ID3D11DeviceContext_IASetIndexBuffer(This,pIndexBuffer,Format,Offset)   \
        ( (This)->IASetIndexBuffer(pIndexBuffer,Format,Offset) ) 

    #define DX11_ID3D11DeviceContext_DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation)  \
        ( (This)->DrawIndexedInstanced(IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) ) 

    #define DX11_ID3D11DeviceContext_DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation)  \
        ( (This)->DrawInstanced(VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) ) 

    #define DX11_ID3D11DeviceContext_GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->GSSetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_GSSetShader(This,pShader,ppClassInstances,NumClassInstances)    \
        ( (This)->GSSetShader(pShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_IASetPrimitiveTopology(This,Topology)   \
        ( (This)->IASetPrimitiveTopology(Topology) ) 

    #define DX11_ID3D11DeviceContext_VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->VSSetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->VSSetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_Begin(This,pAsync)  \
        ( (This)->Begin(pAsync) ) 

    #define DX11_ID3D11DeviceContext_End(This,pAsync)    \
        ( (This)->End(pAsync) ) 

    #define DX11_ID3D11DeviceContext_GetData(This,pAsync,pData,DataSize,GetDataFlags)    \
        ( (This)->GetData(pAsync,pData,DataSize,GetDataFlags) ) 

    #define DX11_ID3D11DeviceContext_SetPredication(This,pPredicate,PredicateValue)  \
        ( (This)->SetPredication(pPredicate,PredicateValue) ) 

    #define DX11_ID3D11DeviceContext_GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->GSSetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->GSSetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) \
        ( (This)->OMSetRenderTargets(NumViews,ppRenderTargetViews,pDepthStencilView) ) 

    #define DX11_ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,pDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) \
        ( (This)->OMSetRenderTargetsAndUnorderedAccessViews(NumRTVs,ppRenderTargetViews,pDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) ) 

    #define DX11_ID3D11DeviceContext_OMSetBlendState(This,pBlendState,BlendFactor,SampleMask)    \
        ( (This)->OMSetBlendState(pBlendState,BlendFactor,SampleMask) ) 

    #define DX11_ID3D11DeviceContext_OMSetDepthStencilState(This,pDepthStencilState,StencilRef)  \
        ( (This)->OMSetDepthStencilState(pDepthStencilState,StencilRef) ) 

    #define DX11_ID3D11DeviceContext_SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets)  \
        ( (This)->SOSetTargets(NumBuffers,ppSOTargets,pOffsets) ) 

    #define DX11_ID3D11DeviceContext_DrawAuto(This)  \
        ( (This)->DrawAuto() ) 

    #define DX11_ID3D11DeviceContext_DrawIndexedInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs)  \
        ( (This)->DrawIndexedInstancedIndirect(pBufferForArgs,AlignedByteOffsetForArgs) ) 

    #define DX11_ID3D11DeviceContext_DrawInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) \
        ( (This)->DrawInstancedIndirect(pBufferForArgs,AlignedByteOffsetForArgs) ) 

    #define DX11_ID3D11DeviceContext_Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ)    \
        ( (This)->Dispatch(ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) ) 

    #define DX11_ID3D11DeviceContext_DispatchIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs)  \
        ( (This)->DispatchIndirect(pBufferForArgs,AlignedByteOffsetForArgs) ) 

    #define DX11_ID3D11DeviceContext_RSSetState(This,pRasterizerState)   \
        ( (This)->RSSetState(pRasterizerState) ) 

    #define DX11_ID3D11DeviceContext_RSSetViewports(This,NumViewports,pViewports)    \
        ( (This)->RSSetViewports(NumViewports,pViewports) ) 

    #define DX11_ID3D11DeviceContext_RSSetScissorRects(This,NumRects,pRects) \
        ( (This)->RSSetScissorRects(NumRects,pRects) ) 

    #define DX11_ID3D11DeviceContext_CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox)  \
        ( (This)->CopySubresourceRegion(pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox) ) 

    #define DX11_ID3D11DeviceContext_CopyResource(This,pDstResource,pSrcResource)    \
        ( (This)->CopyResource(pDstResource,pSrcResource) ) 

    #define DX11_ID3D11DeviceContext_UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch)  \
        ( (This)->UpdateSubresource(pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) ) 

    #define DX11_ID3D11DeviceContext_CopyStructureCount(This,pDstBuffer,DstAlignedByteOffset,pSrcView)   \
        ( (This)->CopyStructureCount(pDstBuffer,DstAlignedByteOffset,pSrcView) ) 

    #define DX11_ID3D11DeviceContext_ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) \
        ( (This)->ClearRenderTargetView(pRenderTargetView,ColorRGBA) ) 

    #define DX11_ID3D11DeviceContext_ClearUnorderedAccessViewUint(This,pUnorderedAccessView,Values)  \
        ( (This)->ClearUnorderedAccessViewUint(pUnorderedAccessView,Values) ) 

    #define DX11_ID3D11DeviceContext_ClearUnorderedAccessViewFloat(This,pUnorderedAccessView,Values) \
        ( (This)->ClearUnorderedAccessViewFloat(pUnorderedAccessView,Values) ) 

    #define DX11_ID3D11DeviceContext_ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil)  \
        ( (This)->ClearDepthStencilView(pDepthStencilView,ClearFlags,Depth,Stencil) ) 

    #define DX11_ID3D11DeviceContext_GenerateMips(This,pShaderResourceView)  \
        ( (This)->GenerateMips(pShaderResourceView) ) 

    #define DX11_ID3D11DeviceContext_SetResourceMinLOD(This,pResource,MinLOD)    \
        ( (This)->SetResourceMinLOD(pResource,MinLOD) ) 

    #define DX11_ID3D11DeviceContext_GetResourceMinLOD(This,pResource)   \
        ( (This)->GetResourceMinLOD(pResource) ) 

    #define DX11_ID3D11DeviceContext_ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) \
        ( (This)->ResolveSubresource(pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) ) 

    #define DX11_ID3D11DeviceContext_ExecuteCommandList(This,pCommandList,RestoreContextState)   \
        ( (This)->ExecuteCommandList(pCommandList,RestoreContextState) ) 

    #define DX11_ID3D11DeviceContext_HSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->HSSetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_HSSetShader(This,pHullShader,ppClassInstances,NumClassInstances)    \
        ( (This)->HSSetShader(pHullShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_HSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->HSSetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_HSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->HSSetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_DSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->DSSetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_DSSetShader(This,pDomainShader,ppClassInstances,NumClassInstances)  \
        ( (This)->DSSetShader(pDomainShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_DSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->DSSetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_DSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->DSSetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_CSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->CSSetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_CSSetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts)  \
        ( (This)->CSSetUnorderedAccessViews(StartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) ) 

    #define DX11_ID3D11DeviceContext_CSSetShader(This,pComputeShader,ppClassInstances,NumClassInstances) \
        ( (This)->CSSetShader(pComputeShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_CSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->CSSetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_CSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->CSSetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->VSGetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->PSGetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_PSGetShader(This,ppPixelShader,ppClassInstances,pNumClassInstances) \
        ( (This)->PSGetShader(ppPixelShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->PSGetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_VSGetShader(This,ppVertexShader,ppClassInstances,pNumClassInstances)    \
        ( (This)->VSGetShader(ppVertexShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->PSGetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_IAGetInputLayout(This,ppInputLayout)    \
        ( (This)->IAGetInputLayout(ppInputLayout) ) 

    #define DX11_ID3D11DeviceContext_IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) \
        ( (This)->IAGetVertexBuffers(StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) ) 

    #define DX11_ID3D11DeviceContext_IAGetIndexBuffer(This,pIndexBuffer,Format,Offset)   \
        ( (This)->IAGetIndexBuffer(pIndexBuffer,Format,Offset) ) 

    #define DX11_ID3D11DeviceContext_GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->GSGetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_GSGetShader(This,ppGeometryShader,ppClassInstances,pNumClassInstances)  \
        ( (This)->GSGetShader(ppGeometryShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_IAGetPrimitiveTopology(This,pTopology)  \
        ( (This)->IAGetPrimitiveTopology(pTopology) ) 

    #define DX11_ID3D11DeviceContext_VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->VSGetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->VSGetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_GetPredication(This,ppPredicate,pPredicateValue)    \
        ( (This)->GetPredication(ppPredicate,pPredicateValue) ) 

    #define DX11_ID3D11DeviceContext_GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->GSGetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->GSGetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView)    \
        ( (This)->OMGetRenderTargets(NumViews,ppRenderTargetViews,ppDepthStencilView) ) 

    #define DX11_ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,ppDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews)  \
        ( (This)->OMGetRenderTargetsAndUnorderedAccessViews(NumRTVs,ppRenderTargetViews,ppDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews) ) 

    #define DX11_ID3D11DeviceContext_OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask)  \
        ( (This)->OMGetBlendState(ppBlendState,BlendFactor,pSampleMask) ) 

    #define DX11_ID3D11DeviceContext_OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef)    \
        ( (This)->OMGetDepthStencilState(ppDepthStencilState,pStencilRef) ) 

    #define DX11_ID3D11DeviceContext_SOGetTargets(This,NumBuffers,ppSOTargets)   \
        ( (This)->SOGetTargets(NumBuffers,ppSOTargets) ) 

    #define DX11_ID3D11DeviceContext_RSGetState(This,ppRasterizerState)  \
        ( (This)->RSGetState(ppRasterizerState) ) 

    #define DX11_ID3D11DeviceContext_RSGetViewports(This,pNumViewports,pViewports)   \
        ( (This)->RSGetViewports(pNumViewports,pViewports) ) 

    #define DX11_ID3D11DeviceContext_RSGetScissorRects(This,pNumRects,pRects)    \
        ( (This)->RSGetScissorRects(pNumRects,pRects) ) 

    #define DX11_ID3D11DeviceContext_HSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->HSGetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_HSGetShader(This,ppHullShader,ppClassInstances,pNumClassInstances)  \
        ( (This)->HSGetShader(ppHullShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_HSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->HSGetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_HSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->HSGetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_DSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->DSGetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_DSGetShader(This,ppDomainShader,ppClassInstances,pNumClassInstances)    \
        ( (This)->DSGetShader(ppDomainShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_DSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->DSGetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_DSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->DSGetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_CSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->CSGetShaderResources(StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_CSGetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews)    \
        ( (This)->CSGetUnorderedAccessViews(StartSlot,NumUAVs,ppUnorderedAccessViews) ) 

    #define DX11_ID3D11DeviceContext_CSGetShader(This,ppComputeShader,ppClassInstances,pNumClassInstances)   \
        ( (This)->CSGetShader(ppComputeShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_CSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->CSGetSamplers(StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_CSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->CSGetConstantBuffers(StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_ClearState(This)    \
        ( (This)->ClearState() ) 

    #define DX11_ID3D11DeviceContext_Flush(This) \
        ( (This)->Flush() ) 

    #define DX11_ID3D11DeviceContext_GetType(This)   \
        ( (This)->GetType() ) 

    #define DX11_ID3D11DeviceContext_GetContextFlags(This)   \
        ( (This)->GetContextFlags() ) 

    #define DX11_ID3D11DeviceContext_FinishCommandList(This,RestoreDeferredContextState,ppCommandList)   \
        ( (This)->FinishCommandList(RestoreDeferredContextState,ppCommandList) ) 

#else /* C interface */

    #define DX11_ID3D11DeviceContext_QueryInterface(This,riid,ppvObject) \
        ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) ) 

    #define DX11_ID3D11DeviceContext_AddRef(This)    \
        ( (This)->lpVtbl->AddRef(This) ) 

    #define DX11_ID3D11DeviceContext_Release(This)   \
        ( (This)->lpVtbl->Release(This) ) 

    #define DX11_ID3D11DeviceContext_GetDevice(This,ppDevice)    \
        ( (This)->lpVtbl->GetDevice(This,ppDevice) ) 

    #define DX11_ID3D11DeviceContext_GetPrivateData(This,guid,pDataSize,pData)   \
        ( (This)->lpVtbl->GetPrivateData(This,guid,pDataSize,pData) ) 

    #define DX11_ID3D11DeviceContext_SetPrivateData(This,guid,DataSize,pData)    \
        ( (This)->lpVtbl->SetPrivateData(This,guid,DataSize,pData) ) 

    #define DX11_ID3D11DeviceContext_SetPrivateDataInterface(This,guid,pData)    \
        ( (This)->lpVtbl->SetPrivateDataInterface(This,guid,pData) ) 

    #define DX11_ID3D11DeviceContext_VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_PSSetShader(This,pPixelShader,ppClassInstances,NumClassInstances)   \
        ( (This)->lpVtbl->PSSetShader(This,pPixelShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_VSSetShader(This,pVertexShader,ppClassInstances,NumClassInstances)  \
        ( (This)->lpVtbl->VSSetShader(This,pVertexShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation)  \
        ( (This)->lpVtbl->DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation) ) 

    #define DX11_ID3D11DeviceContext_Draw(This,VertexCount,StartVertexLocation)  \
        ( (This)->lpVtbl->Draw(This,VertexCount,StartVertexLocation) ) 

    #define DX11_ID3D11DeviceContext_Map(This,pResource,Subresource,MapType,MapFlags,pMappedResource)    \
        ( (This)->lpVtbl->Map(This,pResource,Subresource,MapType,MapFlags,pMappedResource) ) 

    #define DX11_ID3D11DeviceContext_Unmap(This,pResource,Subresource)   \
        ( (This)->lpVtbl->Unmap(This,pResource,Subresource) ) 

    #define DX11_ID3D11DeviceContext_PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_IASetInputLayout(This,pInputLayout) \
        ( (This)->lpVtbl->IASetInputLayout(This,pInputLayout) ) 

    #define DX11_ID3D11DeviceContext_IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) \
        ( (This)->lpVtbl->IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) ) 

    #define DX11_ID3D11DeviceContext_IASetIndexBuffer(This,pIndexBuffer,Format,Offset)   \
        ( (This)->lpVtbl->IASetIndexBuffer(This,pIndexBuffer,Format,Offset) ) 

    #define DX11_ID3D11DeviceContext_DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation)  \
        ( (This)->lpVtbl->DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) ) 

    #define DX11_ID3D11DeviceContext_DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation)  \
        ( (This)->lpVtbl->DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) ) 

    #define DX11_ID3D11DeviceContext_GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_GSSetShader(This,pShader,ppClassInstances,NumClassInstances)    \
        ( (This)->lpVtbl->GSSetShader(This,pShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_IASetPrimitiveTopology(This,Topology)   \
        ( (This)->lpVtbl->IASetPrimitiveTopology(This,Topology) ) 

    #define DX11_ID3D11DeviceContext_VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_Begin(This,pAsync)  \
        ( (This)->lpVtbl->Begin(This,pAsync) ) 

    #define DX11_ID3D11DeviceContext_End(This,pAsync)    \
        ( (This)->lpVtbl->End(This,pAsync) ) 

    #define DX11_ID3D11DeviceContext_GetData(This,pAsync,pData,DataSize,GetDataFlags)    \
        ( (This)->lpVtbl->GetData(This,pAsync,pData,DataSize,GetDataFlags) ) 

    #define DX11_ID3D11DeviceContext_SetPredication(This,pPredicate,PredicateValue)  \
        ( (This)->lpVtbl->SetPredication(This,pPredicate,PredicateValue) ) 

    #define DX11_ID3D11DeviceContext_GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) \
        ( (This)->lpVtbl->OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) ) 

    #define DX11_ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,pDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) \
        ( (This)->lpVtbl->OMSetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,pDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) ) 

    #define DX11_ID3D11DeviceContext_OMSetBlendState(This,pBlendState,BlendFactor,SampleMask)    \
        ( (This)->lpVtbl->OMSetBlendState(This,pBlendState,BlendFactor,SampleMask) ) 

    #define DX11_ID3D11DeviceContext_OMSetDepthStencilState(This,pDepthStencilState,StencilRef)  \
        ( (This)->lpVtbl->OMSetDepthStencilState(This,pDepthStencilState,StencilRef) ) 

    #define DX11_ID3D11DeviceContext_SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets)  \
        ( (This)->lpVtbl->SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets) ) 

    #define DX11_ID3D11DeviceContext_DrawAuto(This)  \
        ( (This)->lpVtbl->DrawAuto(This) ) 

    #define DX11_ID3D11DeviceContext_DrawIndexedInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs)  \
        ( (This)->lpVtbl->DrawIndexedInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) ) 

    #define DX11_ID3D11DeviceContext_DrawInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) \
        ( (This)->lpVtbl->DrawInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) ) 

    #define DX11_ID3D11DeviceContext_Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ)    \
        ( (This)->lpVtbl->Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) ) 

    #define DX11_ID3D11DeviceContext_DispatchIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs)  \
        ( (This)->lpVtbl->DispatchIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) ) 

    #define DX11_ID3D11DeviceContext_RSSetState(This,pRasterizerState)   \
        ( (This)->lpVtbl->RSSetState(This,pRasterizerState) ) 

    #define DX11_ID3D11DeviceContext_RSSetViewports(This,NumViewports,pViewports)    \
        ( (This)->lpVtbl->RSSetViewports(This,NumViewports,pViewports) ) 

    #define DX11_ID3D11DeviceContext_RSSetScissorRects(This,NumRects,pRects) \
        ( (This)->lpVtbl->RSSetScissorRects(This,NumRects,pRects) ) 

    #define DX11_ID3D11DeviceContext_CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox)  \
        ( (This)->lpVtbl->CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox) ) 

    #define DX11_ID3D11DeviceContext_CopyResource(This,pDstResource,pSrcResource)    \
        ( (This)->lpVtbl->CopyResource(This,pDstResource,pSrcResource) ) 

    #define DX11_ID3D11DeviceContext_UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch)  \
        ( (This)->lpVtbl->UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) ) 

    #define DX11_ID3D11DeviceContext_CopyStructureCount(This,pDstBuffer,DstAlignedByteOffset,pSrcView)   \
        ( (This)->lpVtbl->CopyStructureCount(This,pDstBuffer,DstAlignedByteOffset,pSrcView) ) 

    #define DX11_ID3D11DeviceContext_ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) \
        ( (This)->lpVtbl->ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) ) 

    #define DX11_ID3D11DeviceContext_ClearUnorderedAccessViewUint(This,pUnorderedAccessView,Values)  \
        ( (This)->lpVtbl->ClearUnorderedAccessViewUint(This,pUnorderedAccessView,Values) ) 

    #define DX11_ID3D11DeviceContext_ClearUnorderedAccessViewFloat(This,pUnorderedAccessView,Values) \
        ( (This)->lpVtbl->ClearUnorderedAccessViewFloat(This,pUnorderedAccessView,Values) ) 

    #define DX11_ID3D11DeviceContext_ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil)  \
        ( (This)->lpVtbl->ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil) ) 

    #define DX11_ID3D11DeviceContext_GenerateMips(This,pShaderResourceView)  \
        ( (This)->lpVtbl->GenerateMips(This,pShaderResourceView) ) 

    #define DX11_ID3D11DeviceContext_SetResourceMinLOD(This,pResource,MinLOD)    \
        ( (This)->lpVtbl->SetResourceMinLOD(This,pResource,MinLOD) ) 

    #define DX11_ID3D11DeviceContext_GetResourceMinLOD(This,pResource)   \
        ( (This)->lpVtbl->GetResourceMinLOD(This,pResource) ) 

    #define DX11_ID3D11DeviceContext_ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) \
        ( (This)->lpVtbl->ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) ) 

    #define DX11_ID3D11DeviceContext_ExecuteCommandList(This,pCommandList,RestoreContextState)   \
        ( (This)->lpVtbl->ExecuteCommandList(This,pCommandList,RestoreContextState) ) 

    #define DX11_ID3D11DeviceContext_HSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->HSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_HSSetShader(This,pHullShader,ppClassInstances,NumClassInstances)    \
        ( (This)->lpVtbl->HSSetShader(This,pHullShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_HSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->HSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_HSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->HSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_DSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->DSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_DSSetShader(This,pDomainShader,ppClassInstances,NumClassInstances)  \
        ( (This)->lpVtbl->DSSetShader(This,pDomainShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_DSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->DSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_DSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->DSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_CSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->CSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_CSSetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts)  \
        ( (This)->lpVtbl->CSSetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) ) 

    #define DX11_ID3D11DeviceContext_CSSetShader(This,pComputeShader,ppClassInstances,NumClassInstances) \
        ( (This)->lpVtbl->CSSetShader(This,pComputeShader,ppClassInstances,NumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_CSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->CSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_CSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->CSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_PSGetShader(This,ppPixelShader,ppClassInstances,pNumClassInstances) \
        ( (This)->lpVtbl->PSGetShader(This,ppPixelShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_VSGetShader(This,ppVertexShader,ppClassInstances,pNumClassInstances)    \
        ( (This)->lpVtbl->VSGetShader(This,ppVertexShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_IAGetInputLayout(This,ppInputLayout)    \
        ( (This)->lpVtbl->IAGetInputLayout(This,ppInputLayout) ) 

    #define DX11_ID3D11DeviceContext_IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) \
        ( (This)->lpVtbl->IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) ) 

    #define DX11_ID3D11DeviceContext_IAGetIndexBuffer(This,pIndexBuffer,Format,Offset)   \
        ( (This)->lpVtbl->IAGetIndexBuffer(This,pIndexBuffer,Format,Offset) ) 

    #define DX11_ID3D11DeviceContext_GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_GSGetShader(This,ppGeometryShader,ppClassInstances,pNumClassInstances)  \
        ( (This)->lpVtbl->GSGetShader(This,ppGeometryShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_IAGetPrimitiveTopology(This,pTopology)  \
        ( (This)->lpVtbl->IAGetPrimitiveTopology(This,pTopology) ) 

    #define DX11_ID3D11DeviceContext_VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_GetPredication(This,ppPredicate,pPredicateValue)    \
        ( (This)->lpVtbl->GetPredication(This,ppPredicate,pPredicateValue) ) 

    #define DX11_ID3D11DeviceContext_GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView)    \
        ( (This)->lpVtbl->OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView) ) 

    #define DX11_ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,ppDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews)  \
        ( (This)->lpVtbl->OMGetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,ppDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews) ) 

    #define DX11_ID3D11DeviceContext_OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask)  \
        ( (This)->lpVtbl->OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask) ) 

    #define DX11_ID3D11DeviceContext_OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef)    \
        ( (This)->lpVtbl->OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef) ) 

    #define DX11_ID3D11DeviceContext_SOGetTargets(This,NumBuffers,ppSOTargets)   \
        ( (This)->lpVtbl->SOGetTargets(This,NumBuffers,ppSOTargets) ) 

    #define DX11_ID3D11DeviceContext_RSGetState(This,ppRasterizerState)  \
        ( (This)->lpVtbl->RSGetState(This,ppRasterizerState) ) 

    #define DX11_ID3D11DeviceContext_RSGetViewports(This,pNumViewports,pViewports)   \
        ( (This)->lpVtbl->RSGetViewports(This,pNumViewports,pViewports) ) 

    #define DX11_ID3D11DeviceContext_RSGetScissorRects(This,pNumRects,pRects)    \
        ( (This)->lpVtbl->RSGetScissorRects(This,pNumRects,pRects) ) 

    #define DX11_ID3D11DeviceContext_HSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->HSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_HSGetShader(This,ppHullShader,ppClassInstances,pNumClassInstances)  \
        ( (This)->lpVtbl->HSGetShader(This,ppHullShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_HSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->HSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_HSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->HSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_DSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->DSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_DSGetShader(This,ppDomainShader,ppClassInstances,pNumClassInstances)    \
        ( (This)->lpVtbl->DSGetShader(This,ppDomainShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_DSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->DSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_DSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->DSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_CSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) \
        ( (This)->lpVtbl->CSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

    #define DX11_ID3D11DeviceContext_CSGetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews)    \
        ( (This)->lpVtbl->CSGetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews) ) 

    #define DX11_ID3D11DeviceContext_CSGetShader(This,ppComputeShader,ppClassInstances,pNumClassInstances)   \
        ( (This)->lpVtbl->CSGetShader(This,ppComputeShader,ppClassInstances,pNumClassInstances) ) 

    #define DX11_ID3D11DeviceContext_CSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)    \
        ( (This)->lpVtbl->CSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

    #define DX11_ID3D11DeviceContext_CSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)   \
        ( (This)->lpVtbl->CSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

    #define DX11_ID3D11DeviceContext_ClearState(This)    \
        ( (This)->lpVtbl->ClearState(This) ) 

    #define DX11_ID3D11DeviceContext_Flush(This) \
        ( (This)->lpVtbl->Flush(This) ) 

    #define DX11_ID3D11DeviceContext_GetType(This)   \
        ( (This)->lpVtbl->GetType(This) ) 

    #define DX11_ID3D11DeviceContext_GetContextFlags(This)   \
        ( (This)->lpVtbl->GetContextFlags(This) ) 

    #define DX11_ID3D11DeviceContext_FinishCommandList(This,RestoreDeferredContextState,ppCommandList)   \
        ( (This)->lpVtbl->FinishCommandList(This,RestoreDeferredContextState,ppCommandList) ) 

#endif

#endif // WIN32_D3D11_H
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