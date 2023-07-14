#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include <iostream>
#include "parent.h"
#include "child.h"

void connect(address_p P, address_c &C);
void disconnect(address_c &C);
void printRelasi(List_p Lp, List_c Lc);
void printRelasiChild(List_c Lc);

#endif // RELASI_H_INCLUDED
