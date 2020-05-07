#pragma once
#include <sys/stat.h>

#if defined __WIN32__ || defined _WIN32 || defined _Windows
#if !defined S_ISDIR
#define S_ISDIR(m) (((m) & _S_IFDIR) == _S_IFDIR)
#define S_ISREG(m) (((m) & _S_IFREG) == _S_IFREG)
#endif
#endif