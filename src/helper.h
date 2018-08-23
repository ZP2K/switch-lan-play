#ifndef _HELPER_H_
#define _HELPER_H_

#include <arpa/inet.h>

#define READ_NET8(packet, offset) (*(uint8_t*)((uint8_t*)packet + offset))
#define READ_NET16(packet, offset) ntohs(*(uint16_t*)((uint8_t*)packet + offset))
#define WRITE_NET8(packet, offset, v) (*(uint8_t*)((uint8_t*)packet + offset) = v)
#define WRITE_NET16(packet, offset, v) (*(uint16_t*)((uint8_t*)packet + offset) = htons(v))
#define CPY_IPV4(r, packet, offset) (memcpy(r, packet + offset, 4))
#define CPY_MAC(r, packet, offset) (memcpy(r, packet + offset, 6))
const char *ip2str(void *ip);
void *str2ip(const char *ip);
#if __APPLE__
int set_immediate_mode(int fd);
#endif
#endif // _HELPER_H_
