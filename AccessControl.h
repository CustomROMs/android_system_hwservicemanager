#include <string>

namespace android {

class AccessControl {
public:
    AccessControl();

    bool canAdd(const std::string& fqName, pid_t pid);
    bool canGet(const std::string& fqName, pid_t pid);
    bool canList(pid_t pid);

private:

    bool checkPermission(pid_t sourceAuditPid, const char *perm, const char *interface);

    static int auditCallback(void *data, char *buf, size_t len);
};

} // namespace android
