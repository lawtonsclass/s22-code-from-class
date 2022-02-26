#include "counter.h"

int count; // global variable holding our count

void init_counter() {
  count = 0;
}

void inc() {
  count++;
}

void dec() {
  count--;
}

void reset() {
  count = 0; 
}

int get_count() {
  return count;
}
