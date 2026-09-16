#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class ATL; 
class HWSecurityRegistryManager; 
class _bstr_t; 
namespace msl { class safeint3; } 
class pplx; 
namespace tip2 { class details; } 
class tson; 
namespace web { namespace http { namespace client { namespace details { class winhttp_request_context; } } } } 
namespace web { namespace http { class details; } } 
namespace web { namespace json { class details; } } 
class ATL; class AutoImpersonate; class CAdaptorDefault; class CArray; class CAutoPtr; class CEnrollmentLogger; class COmaDmLogger; class CPoliciesDefault; class CoTaskMemFree; class CoUninitialize; class ContainerData; class Destroy; class EkCertificate; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HINSTANCE__; class HKEY__; class HMAC; class HSTRING__; class HWND__; class HWSecurityRegistryManager; class HashTableTag; class IErrorInfo; class IStream; class ITaskFolder; class IntelSADetectionProvider; class LeaveCriticalSection; class LocalFree; class NCryptKeyName; class ReleaseSRWLockExclusive; class SErrorConverter; class TLV; class TPM_SYMBOLTABLE_ENTRY; class TipReportingInfo; class Token; class TraceLoggingCorrelationVector; class TraceLoggingCorrelationVectorV2_t; class TrustedPlatformModule; class WilFailureReport; class WilFailureReportInformation; class _Buffer_view; class _CERT_AUTHORITY_KEY_ID2_INFO; class _CERT_CONTEXT; class _CONTEXT; class _CRYPTOAPI_BLOB; class _DmUserProfile; class _EXCEPTION_RECORD; class _FILETIME; class _GUID; class _IntelMEFirmwareVersion; class _Mbstatet; class _RTL_CRITICAL_SECTION; class _RTL_SRWLOCK; class _SECURITY_ATTRIBUTES; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WORK; class _ULARGE_INTEGER; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class __crt_locale_pointers; class _block; class _bstr_t; class _com_error; class _request; class _tip_OmadmClientAadTokenExpirationTipTest; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByVal; class _variant_t; class append; class assign; class close; class create_exception_checked_task; class insert; class lambda_0073bfcf7319a8539931a760272dfdc9; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_08052126caf30f35e5385e23194a6196; class lambda_081d04ec8089f8a28c39b95ae083bfc2; class lambda_09772954a221cf556a33dfb79462c13a; class lambda_1; class lambda_10f6e4762073256c936a0a44b5fd5661; class lambda_13d4a3afe64463a7e188b8e74574abbc; class lambda_156f8c05752017390d6185e99ef4c093; class lambda_2; class lambda_3; class lambda_3c3aa4268759fefe294eea6f9c57c205; class lambda_3c8bab8ff371f93913084d5199374ce4; class lambda_3fdb14453883e86a37ebade6a7a0ebb0; class lambda_4; class lambda_65e615be2a453ca0576c979606f46740; class lambda_7030d12a21dba11210293044e97fe9c7; class lambda_89ef8f9e192d0c9d8a44552b2fb585d9; class lambda_9ae1b6b611071959ad7ff25d21dd2ecc; class lambda_b70241e9b5ebaad244db3e52d52cab17; class lambda_c6fdc32eb2a049594b0072a7c2a28a63; class lambda_ccc52d68d0ef3c0ed95db32f9cfb7615; class lambda_d33076bb22aca88d44d93aa0cbde6895; class lambda_d866778a64a41e251a28c8eb804a9f63; class lambda_e1befb086ad3257e3f042a63030725f7; class lambda_e6f213d3a0749b976831daf07472045f; class lambda_f0d76877e2124af93dd5e09c8d041edf; class lambda_f9b8b8476485a077d244f8a24a5eff7b; class pplx; class push_back; class reserve; class sync; class tagPROPVARIANT; class thunk; class tson; class type_info; class utl; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace Concurrency { namespace streams { class basic_istream; class streambuf; } } 
namespace Concurrency { namespace streams { namespace details { class basic_container_buffer; class basic_istream_helper; class basic_producer_consumer_buffer; class basic_streambuf; class streambuf_state_manager; } } } 
namespace Microsoft { namespace WRL { class ComPtr; class Details; class FtmBase; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HString; class HStringReference; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockCriticalSection; } } } } 
namespace Microsoft { namespace Windows { class TelemetryLogger; } } 
namespace Windows { class Foundation; } 
namespace Windows { namespace Data { namespace Xml { namespace Dom { class IXmlNode; } } } } 
namespace Windows { namespace Devices { namespace Enumeration { class DeviceInformationCollection; } } } 
namespace Windows { namespace Internal { class String; class StringReference; } } 
namespace Windows { namespace Security { namespace Authentication { namespace Web { namespace Core { class IWebAuthenticationCoreManagerStatics; class IWebTokenRequestFactory; class WebTokenRequestResult; } } } } } 
namespace Windows { namespace Security { namespace Credentials { class IWebAccount; class IWebAccountProvider; class WebAccount; class WebAccountProvider; } } } 
namespace Windows { namespace UI { namespace Notifications { class IToastNotification2; } } } 
namespace msl { class safeint3; } 
namespace std { class _Func_base; class _Func_class; class _Func_impl_no_alloc; class _Iterator_base0; class _List_node; class _List_simple_types; class _List_unchecked_iterator; class _List_val; class _Ref_count_base; class _Simple_types; class _String_const_iterator; class _String_constructor_concat_tag; class _String_val; class _System_error; class _Tmap_traits; class _Tree; class _Tree_const_iterator; class _Tree_find_result; class _Tree_id; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class _Value_init_tag; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class allocator; class bad_alloc; class bad_array_new_length; class bad_cast; class bad_weak_ptr; class basic_ostream; class basic_streambuf; class basic_string; class basic_stringbuf; class bitset; class char_traits; class default_delete; class error_category; class error_code; class error_condition; class exception; class exception_ptr; class fpos; class function; class integer_sequence; class integral_constant; class invalid_argument; class ios_base; class less; class locale; class logic_error; class map; class nothrow_t; class nullptr_t; class pair; class piecewise_construct_t; class range_error; class runtime_error; class shared_ptr; class system_error; class tuple; class unique_ptr; class vector; class weak_ptr; } 
namespace tip2 { class details; class test_flag; class test_info; class test_requirement; class test_state; class vector_nothrow; } 
namespace tpm12class { class TPMW82B_BUFFER; class TPMW8S_PCR_SELECTION; class TPMW8T_ECC_SCHEME; class TPMW8T_HA; class TPMW8T_KDF_SCHEME; class TPMW8T_KEYEDHASH_SCHEME; class TPMW8T_PUBLIC; class TPMW8T_RSA_SCHEME; class TPMW8T_SYM_DEF; class TPMW8T_SYM_DEF_OBJECT; class TPMW8_AUTH_PROVIDER; class TPMW8_COMMAND; class TPMW8_FlushContext; class TPMW8_GetCapability; class TPMW8_ReadPublic; class TPMW8_SESSION; class TPMW8_StartAuthSession; class TPM_AUTH_PROVIDER; class TPM_CAP_VERSION_INFO; class TPM_COMMAND; class TPM_DELEGATE_KEY_BLOB; class TPM_DELEGATE_OWNER_BLOB; class TPM_DELEGATE_PUBLIC; class TPM_DELEGATIONS; class TPM_DSAP; class TPM_FlushSpecific; class TPM_GetCapability; class TPM_GetPubKey; class TPM_KEY_PARMS; class TPM_OIAP; class TPM_OSAP; class TPM_PCR_INFO_SHORT; class TPM_PCR_SELECTION; class TPM_PUBKEY; class TPM_SESSION; class TPM_STORE_KEY; class TpmDataObject; class _TPMW8S_ECC_POINT; class _TPMW8S_TAGGED_POLICY; } 
namespace utility { class datetime; } 
namespace utility { namespace details { class scoped_c_thread_locale; class windows_category_impl; } } 
namespace web { class credentials; class uri; class uri_builder; class uri_exception; class web_proxy; } 
namespace web { namespace details { class uri_components; class win32_encryption; class zero_memory_deleter; } } 
namespace web { namespace http { class details; class http_exception; class http_headers; class http_pipeline_stage; class http_request; class http_response; class http_status_to_phrase; class inline_continuation; } } 
namespace web { namespace http { namespace client { class http_client; class http_client_config; class http_pipeline; } } } 
namespace web { namespace http { namespace client { namespace details { class _http_client_communicator; class ie_proxy_config; class proxy_info; class request_context; class winhttp_cert_chain_context; class winhttp_cert_context; class winhttp_client; class winhttp_request_context; } } } } 
namespace web { namespace http { namespace compression { class builtin; class compress_provider; class decompress_factory; class decompress_provider; class operation_result; } } } 
namespace web { namespace http { namespace oauth1 { namespace details { class oauth1_handler; class oauth1_state; } } } } 
namespace web { namespace http { namespace oauth1 { namespace experimental { class oauth1_config; class oauth1_exception; } } } } 
namespace web { namespace http { namespace oauth2 { namespace details { class oauth2_handler; } } } } 
namespace web { namespace http { namespace oauth2 { namespace experimental { class oauth2_config; } } } } 
namespace web { namespace json { class array; class details; class json_exception; class number; class object; class value; } } 
namespace wil { class FailureInfo; class ResultException; class StoredFailureInfo; class WNF_CHANGE_STAMP_STRUCT; class cert_context_t; class com_ptr_t; class err_returncode_policy; class process_heap_deleter; class srwlock; class unique_any_t; class unique_call; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class FeatureStateManager; class FreeProcessHeap; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class delete_wnf_subscription_state; class resource_policy; class unique_storage; class wnf_subscription_state; class wnf_subscription_state_base; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

