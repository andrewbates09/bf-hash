/* Author   : Andrew M Bates (andrewbates09)
 * Project  : BF HASH
 * File     : BFHASH.C
 *
 * Notes:
 *
 * The basic hash map growth is as follows:
 * - head is the current map size
 * - the new head is chosen by the next prime past 1/3 larger than head
 * - new head = next_prime(((4 * head)/3)+1)
 * - to check //if (head > MAX_SMALL - (head/3))
 * 
 */

#include "bfhash.h"


