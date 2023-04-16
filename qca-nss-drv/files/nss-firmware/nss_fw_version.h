#ifndef __NSS_FW_VERSION_H
#define __NSS_FW_VERSION_H

#define NSS_FW_VERSION_MAJOR 11
#define NSS_FW_VERSION_MINOR 4

#define NSS_FW_VERSION(a,b) (((a) << 8) + (b))

#define NSS_FW_VERSION_CODE NSS_FW_VERSION(NSS_FW_VERSION_MAJOR, NSS_FW_VERSION_MINOR)

#endif /* __NSS_FW_VERSION_H */