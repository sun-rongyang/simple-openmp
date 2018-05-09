#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;


string WHITES[4] = {"", "    ", "        ", "            "};
string COLORS[4] = {"\033[1m",
                    "\033[1;35m",
                    "\033[1;37m",
                    "\033[1;31m"};


void print_header(int threads_num);
void draw_pipe(int thread_id = 0);
void paral_draw(string str_, int thread_id = 0, int sleep = 100);


void print_header(int threads_num) {
  for (int i = 0; i < threads_num; i++) {
    cout << COLORS[i] << i << "   ";
  } 
  cout << "\033[0m\n";
}


void paral_draw(string str_, int thread_id, int sleep) {
  string str_to_draw = COLORS[thread_id] + WHITES[thread_id] +
                       str_ + "\033[0m\n";
  this_thread::sleep_for(chrono::milliseconds(sleep));
  cout << str_to_draw;
  this_thread::sleep_for(chrono::milliseconds(sleep));
}
