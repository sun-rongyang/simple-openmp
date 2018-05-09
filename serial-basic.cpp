#include "simp-omp.hpp"
#include <omp.h>
using namespace std;


int main(void)
{
  omp_set_num_threads(3);

  print_header(omp_get_max_threads());
  cout << endl;

  for (int i = 0; i < 5; i++) {
    paral_draw("|");
  } 
  cout << endl;
  cout << endl;

  for (int i = 0; i < 6; i++) {
    paral_draw("|");
  }
  cout << endl;
  cout << endl;

  for (int i = 0; i < 5; i++) {
    paral_draw("|");
  }  

  return 0;
}
