#ifndef ASSERT_H_
#define ASSERT_H_

#include <stdbool.h>

void assert(bool truth) {
  while(!truth) {}
}

#endif  // ASSERT_H_
