#pragma once
#ifndef ID_H
#define ID_H

typedef struct
{
	unsigned int key
} id;

void describe_id(const id id);

id generate_id();

#endif
