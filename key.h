#ifndef KEY_H_INCLUDED
#define KEY_H_INCLUDED

#include "crypto.h"

void getKey(File file);
int getPublic(int nT);
int getPrivate(int e, int nT);

#endif // !KEY_H_INCLUDED

