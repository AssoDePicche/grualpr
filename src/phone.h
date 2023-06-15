#pragma once
#ifndef PHONE_H
#define PHONE_H

#define PREFIX_SIZE 2
#define NUMBER_SIZE 9

typedef struct
{
	char prefix[PREFIX_SIZE], number[NUMBER_SIZE];
} phone;

#endif
