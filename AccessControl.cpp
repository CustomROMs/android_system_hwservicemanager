#include <android-base/logging.h>
#include <hidl-util/FQName.h>
#include <log/log.h>

#include "AccessControl.h"

namespace android {

static const char *kPermissionAdd = "add";
static const char *kPermissionGet = "find";
static const char *kPermissionList = "list";

using android::FQName;

AccessControl::AccessControl() {
}

bool AccessControl::canAdd(const std::string& fqName, pid_t pid) {
    return true;
}

bool AccessControl::canGet(const std::string& fqName, pid_t pid) {
    return true;
}

bool AccessControl::canList(pid_t pid) {
    return true;
}

bool AccessControl::checkPermission(pid_t sourceAuditPid, const char *perm, const char *interface) {
    return true;
}

int AccessControl::auditCallback(void *data, char *buf, size_t len) {
    return 0;
}

} // namespace android
