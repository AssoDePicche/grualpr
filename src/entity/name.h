#pragma once
#ifndef NAME_H
#define NAME_H

typedef struct
{
	char first_name[64], last_name[64];
} name;

void describe_name(const name name);

#endif
