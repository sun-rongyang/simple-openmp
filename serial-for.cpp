#include "simp-omp.hpp"
#include <omp.h>
#include <string>
using namespace std;

int main(void)
{
  omp_set_num_threads(3);
  print_header(omp_get_max_threads());
  cout << endl;

  int sum = 0;

  for (int i = 0; i < 9; i++) {
    sum += 1;
    paral_draw(to_string(sum), omp_get_thread_num());
  }

  cout << endl;
  paral_draw(to_string(sum), omp_get_thread_num());

  return 0;
}
