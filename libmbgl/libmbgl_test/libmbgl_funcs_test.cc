

#include <include/matlab_bgl.h>
#include <stdio.h>
#include "libmbgl_funcs_test.h"

const char* errstr = "";


int main(int argc, char **argv) {
  layout_funcs_test();
  planar_funcs_test();
  ordering_funcs_test();
  structure_funcs_test();
  statistics_funcs_test();
  return 0;
}
