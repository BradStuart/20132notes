#include "console.h"
using namespace cui;



int main(){
  console.dspstr("*****************", 10, 20);
  console.dspstr("*****************", 11, 20);
  console.dspstr("*****************", 12, 20);
  console.dspstr("Hello", 11, 21, 15);
  console.pause();
  console.dspstr("*****************", 10, 20);
  console.dspstr("*****************", 11, 20);
  console.dspstr("*****************", 12, 20);
  console.dspstr("Hello how are you today", 11, 21, 15);
  console.pause();
  console.dspstr("*****************", 10, 20);
  console.dspstr("*****************", 11, 20);
  console.dspstr("*****************", 12, 20);
  console.dspstr("Hello how are you today", 11, 21);
  console.pause();
  return 0;

}