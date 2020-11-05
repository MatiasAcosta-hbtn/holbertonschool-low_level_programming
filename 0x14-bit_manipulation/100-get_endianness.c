#include "holberton.h"
/**
 * get_endianness - function que te dice que endianess es
 * Return: 1 if small or 0 if big
 */

int get_endianness(void)
{
int endianness(void)
{
       union
       {
           int  i;
           char b[sizeof(int)];
       } u;
       u.i = 0x01020304;
       return (u.b[0] == 0x01) ? BigEndian : LittleEndian;
}
}
