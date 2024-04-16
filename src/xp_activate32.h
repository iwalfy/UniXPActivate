#ifndef _XP_ACTIVATE_H
#define _XP_ACTIVATE_H

#define XP_ACTIVATE_ERR_TOO_SHORT 1
#define XP_ACTIVATE_ERR_TOO_LARGE 2
#define XP_ACTIVATE_ERR_INVALID_CHARACTER 3
#define XP_ACTIVATE_ERR_INVALID_CHECK_DIGIT 4
#define XP_ACTIVATE_ERR_UNKNOWN_VERSION 5
#define XP_ACTIVATE_ERR_UNLUCKY 6

int xp_activate32_generate(const char* installation_id_str, char confirmation_id[49]);

#endif
