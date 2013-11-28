/* Author   : Andrew M Bates (andrewbates09)
 * Project  : BF HASH
 * File     : BFHASH.H
 *
 * NOTES:
 * Given some array or string, A[], or sequence of bits, map them out
 * M table size is determined by a sequence of primes (bfprime).
 * The map h0(x) = sumation[r..'\0'] (A[r]*(r+1)) % M
 * h1(x) = h0(x) + f(i)
 * 	f(i) = i*()
 *
 */

#ifndef __BFHASH_H__
#define __BFHASH_H__


/* ---------- INCLUDES ------------- */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../bfprime/bfprime.h"


/* ---------- DEFINITIONS ---------- */

struct bf_entry
{
    char *key;
    char *value;
    struct bf_entry *bfeptr;
};

typedef bf_entry bf_table;



/* ---------- PROTOTYPES ----------- */



#endif


