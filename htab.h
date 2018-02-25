#include <stdint.h>  /* for uint64_t */

typedef unsigned long (*hashfn)(void *);
typedef int (*eqfn)(void *, void *);

struct hashtable *mkht(size_t, hashfn, eqfn);
void htfree(struct hashtable *, void (*)(void *));
void **htput(struct hashtable *, void *);
void *htget(struct hashtable *, void *);
int hthas(struct hashtable *, void *);
void **htkeys(struct hashtable *, size_t *);

uint64_t murmurhash64a(void *, size_t);

unsigned long strhash(void *);
int streq(void *, void *);
