/* Author   : Andrew M Bates (andrewbates09)
 * Project  : BF HASH
 * File     : BF-HASH.H
 *
 * NOTES:
 * 
 *
 */

#ifndef __BF_HASH_H__
#define __BF_HASH_H__

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bf-hash.c>


struct bf_entry
{
    char *key;
    char *value;
    struct bf_entry *bfeptr;
};

typedef bf_entry bf_table;





#endif


