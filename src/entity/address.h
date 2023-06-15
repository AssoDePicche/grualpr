#pragma once
#ifndef ADDRESS_H
#define ADDRESS_H

typedef struct
{
	char street[64], number[64], city[64];
} address;

void describe_address(const address address);

#endif
