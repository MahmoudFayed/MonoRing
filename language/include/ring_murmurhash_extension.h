#ifndef ring_vmmurmurhash_h
#define ring_vmmurmurhash_h

void ring_vm_murmurhash_loadfunctions ( RingState *pRingState ) ;

/* MurmurHash1 functions */
void ring_murmurhash1(void *pPointer);
void ring_murmurhash1_aligned(void *pPointer);

/* MurmurHash2 functions */
void ring_murmurhash2(void *pPointer);
void ring_murmurhash2a(void *pPointer);
void ring_murmurhash64a(void *pPointer);
void ring_murmurhash64b(void *pPointer);
void ring_murmurhash_neutral2(void *pPointer);
void ring_murmurhash_aligned2(void *pPointer);

/* MurmurHash3 functions */
void ring_murmurhash3_x86_32(void *pPointer);
void ring_murmurhash3_x86_128(void *pPointer);
void ring_murmurhash3_x64_128(void *pPointer);

#endif
