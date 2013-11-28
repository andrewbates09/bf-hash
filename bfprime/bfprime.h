/* Author   : Andrew M Bates (andrewbates09)
 * Project  : BF HASH
 * File     : BFPRIME.H
 *
 * NOTES:
 * This part of the project covers prime generation. Primes will be generated in
 * different manners depending on the parameters of the situation.
 *
 * The prime section of this project (bf-prime.c/h) can be considered it's own
 * little sub project and used on it's own for other purposes.  I might
 * consider forking it out later and giving it a single repo.
 *
 */

#ifndef __BFPRIME_H__
#define __BFPRIME_H__


/* ---------- INCLUDES ------------- */

#include <math.h>


/* ---------- DEFINITIONS ---------- */
 
/* For the purpose of generating primes, this is how I define the following:
 * 
 * Regular digit value primes
 * SMALL : 2^16 - 1
 * MEDIUM : 2^32 - 1
 * LARGE : 2^64 - 1
 * 
 * Big digit value primes, in which case this is where I switch to semiprimes
 * HUGE : 2^128 - 1
 * GIGANTIC : 2^256 - 1
 * LUDICROUS : 2^512 - 1
 */
#define MAX_SMALL   65535 // (2^16 - 1) uint_16_t max value
#define MAX_MEDIUM  4294967295 // (2^32 -1) uint32_t max value
#define MAX_LARGE   18446744073709551615 // (2^64 -1) uint64_t max value


/* ---------- PROTOTYPES ----------- */

/* For now, I'm only working on the regular primes 
 * 
 */
uint16_t next_small_prime (uint16_t head);

uint32_t next_medium_prime (uint32_t head);

uint64_t next_large_prime (uint64_t head);


#endif // define __BFPRIME_H__
