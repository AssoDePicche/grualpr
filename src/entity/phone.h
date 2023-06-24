#pragma once
#ifndef PHONE_H
#define PHONE_H

typedef struct
{
	char prefix[3], number[9];
} phone;

void describe_phone(const phone phone);

#endif
