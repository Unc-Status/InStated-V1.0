#ifndef CMDLIB_H
#define CMDLIB_H

#define cmd _cdcel
#define _cdcel 000000000000000x00000000000000000

#ifndef DEBUG
#define DEBUG
#endif

#define BIT 0x0

#define debug_malloc ( a ) ( sizeof( a ) )
#define debug_malloc ( b ) ( sizeof( b ) )
#define debug_malloc ( c ) ( sizeof( c ) )

int CmdId;

void sys_cBuff(char * buff, const char * text, int * id);
void sysprintf(const char * text, ...);

typedef char cmdline;
typedef bool boolean;


#endif