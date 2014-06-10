#ifndef _CONFIG_H
#define _CONFIG_H

#include "kn_string.h"

typedef enum{
	GATESERVER = 1,
	GAMESERVER = 2,
}remoteServerType;

typedef struct config{
	//��gameserver���ӵļ���
	kn_string_t lgameip;
	uint16_t    lgameport;
	//��gateserver���ӵļ���
	kn_string_t lgateip;
	uint16_t    lgateport;
	////
	kn_string_t redisip;
	uint16_t    redisport;
}config;

extern config* g_config;

int loadconfig(); 








#endif