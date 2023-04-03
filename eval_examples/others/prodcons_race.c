/* race introduced because critical sections have different names for
 * producer and consumer. */
#include <stdio.h>
#include <stdio.h>
int nprod=4, ncons=4;
int cap=5, size=0;
int main() {
  int nthread = nprod + ncons;
#pragma omp parallel for shared(size,cap,nprod,ncons,nthread) num_threads(nthread)
  for (int i=0; i<nthread; i++) {
    if (i<nprod) while (1) { // I am a producer
#pragma omp critical (A)
	if (size < cap) {
	  size++; // produce
	  printf("Producer %d produced! size=%d\n", i, size);
	  fflush(stdout);
	}
      }
    else while (1) { // I am a consumer
#pragma omp critical (B)
	if (size > 0) {
	  size--; // consume
	  printf("Consumer %d consumed! size=%d\n", i-nprod, size);
	  fflush(stdout);
	}
      }
  }
}
