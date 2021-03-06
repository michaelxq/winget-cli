// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once
#include <wil/result_macros.h>
#include <winrt/base.h>

#include <exception>
#include <string>


#define APPINSTALLER_CLI_ERROR_FACILITY 0xA15

#define APPINSTALLER_CLI_ERROR_INTERNAL_ERROR                   ((HRESULT)0x8A150001)
#define APPINSTALLER_CLI_ERROR_INVALID_CL_ARGUMENTS             ((HRESULT)0x8A150002)
#define APPINSTALLER_CLI_ERROR_COMMAND_FAILED                   ((HRESULT)0x8A150003)
#define APPINSTALLER_CLI_ERROR_MANIFEST_FAILED                  ((HRESULT)0x8A150004)
#define APPINSTALLER_CLI_ERROR_CTRL_SIGNAL_RECEIVED             ((HRESULT)0x8A150005)
#define APPINSTALLER_CLI_ERROR_SHELLEXEC_INSTALL_FAILED         ((HRESULT)0x8A150006)
#define APPINSTALLER_CLI_ERROR_UNSUPPORTED_MANIFESTVERSION      ((HRESULT)0x8A150007)
#define APPINSTALLER_CLI_ERROR_DOWNLOAD_FAILED                  ((HRESULT)0x8A150008)
#define APPINSTALLER_CLI_ERROR_CANNOT_WRITE_TO_UPLEVEL_INDEX    ((HRESULT)0x8A150009)
#define APPINSTALLER_CLI_ERROR_INDEX_INTEGRITY_COMPROMISED      ((HRESULT)0x8A15000A)
#define APPINSTALLER_CLI_ERROR_SOURCES_INVALID                  ((HRESULT)0x8A15000B)
#define APPINSTALLER_CLI_ERROR_SOURCE_NAME_ALREADY_EXISTS       ((HRESULT)0x8A15000C)
#define APPINSTALLER_CLI_ERROR_INVALID_SOURCE_TYPE              ((HRESULT)0x8A15000D)
#define APPINSTALLER_CLI_ERROR_PACKAGE_IS_BUNDLE                ((HRESULT)0x8A15000E)
#define APPINSTALLER_CLI_ERROR_SOURCE_DATA_MISSING              ((HRESULT)0x8A15000F)
#define APPINSTALLER_CLI_ERROR_NO_APPLICABLE_INSTALLER          ((HRESULT)0x8A150010)
#define APPINSTALLER_CLI_ERROR_INSTALLER_HASH_MISMATCH          ((HRESULT)0x8A150011)
#define APPINSTALLER_CLI_ERROR_SOURCE_NAME_DOES_NOT_EXIST       ((HRESULT)0x8A150012)
#define APPINSTALLER_CLI_ERROR_SOURCE_ARG_ALREADY_EXISTS        ((HRESULT)0x8A150013)
#define APPINSTALLER_CLI_ERROR_NO_APPLICATIONS_FOUND            ((HRESULT)0x8A150014)
#define APPINSTALLER_CLI_ERROR_NO_SOURCES_DEFINED               ((HRESULT)0x8A150015)
#define APPINSTALLER_CLI_ERROR_MULTIPLE_APPLICATIONS_FOUND      ((HRESULT)0x8A150016)
#define APPINSTALLER_CLI_ERROR_NO_MANIFEST_FOUND                ((HRESULT)0x8A150017)
#define APPINSTALLER_CLI_ERROR_EXTENSION_PUBLIC_FAILED          ((HRESULT)0x8A150018)
#define APPINSTALLER_CLI_ERROR_COMMAND_REQUIRES_ADMIN           ((HRESULT)0x8A150019)

namespace AppInstaller
{
    // Gets error messages that are presentable to the user.
    std::string GetUserPresentableMessage(const wil::ResultException& re);
    std::string GetUserPresentableMessage(const winrt::hresult_error& hre);
    std::string GetUserPresentableMessage(const std::exception& e);
}
