#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "myLib/myLib.h"

void top() {
  printf("\n|Fel's Combination Lock FSM|");
}

// the visualization for the lock at state 00 
void locks0() { 
    system("clear");
    // make the header
    top();
    // print the handle
    printf("\n    _______\n");
    printf("   //      \\\n");
    printf("  //        \\\n");
    printf(" //__________\\\n");

    //print the lock body
    printf(" |           |\n");
    printf(" |----|x|----|\n");
    printf(" |----|x|----|\n");
    printf(" |----|x|----|\n");
    printf(" |___________|\n");
    printf("     LOCKED\n");
}

// the visualization for the lock at state 01 
void locks1() {
    system("clear");
    // make the header
    top();
    // print the handle
    printf("\n    _______\n");
    printf("   //      \\\n");
    printf("  //        \\\n");
    printf(" //__________\\\n");

    //print the lock body
    printf(" |           |\n");
    printf(" |----|1|----|\n");
    printf(" |----|x|----|\n");
    printf(" |----|x|----|\n");
    printf(" |___________|\n");
    printf("     LOCKED\n");
}

// the visualization for the lock at state 10 
void locks2() {
    system("clear");
    // make the header
    top();
    // print the handle
    printf("\n    _______\n");
    printf("   //      \\\n");
    printf("  //        \\\n");
    printf(" //__________\\\n");

    //print the lock body
    printf(" |           |\n");
    printf(" |----|1|----|\n");
    printf(" |----|2|----|\n");
    printf(" |----|x|----|\n");
    printf(" |___________|\n");
    printf("     LOCKED\n");
}

// the visualization for the lock at the final state, the lock opened 
void locks3() {
    system("clear");
    // make the header
    top();
    // print the handle
    printf("\n    _______\n");
    printf("   //       \\\n");
    printf("  //          \\\n");
    printf(" //__________\n");

    //print the lock body
    printf(" |           |\n");
    printf(" |----|1|----|\n");
    printf(" |----|2|----|\n");
    printf(" |----|3|----|\n");
    printf(" |___________|\n");
    printf("    UNLOCKED\n");
}



int main(void) {
  // initialization
  int s0 = 0;
  int s1 = 0;
  int n0 = 0;
  int n1 = 0;
  int b0 = 0;
  int b1 = 0;
  int o1 = 0;
  int input = 0;
  int display = 0;

  // fsm routine
  while(true) {
    if (s0 == 0 && s1 == 0) {
      locks0();
      printf("\n\nPresent State: %d %d", s0, s1);
      printf("\nNext State: %d %d", n0, n1);
      printf("\nInputs: %d %d", b0, b1);
      printf("\nOutput: %d", o1);
    }
    else if (s0 == 0 && s1 == 1) {
      locks1();
      printf("\n\nPresent State: %d %d", s0, s1);
      printf("\nNext State: %d %d", n0, n1);
      printf("\nInputs: %d %d", b0, b1);
      printf("\nOutput: %d", o1);
    }
    else if (s0 == 1 && s1 == 0) {
      locks2();
      printf("\n\nPresent State: %d %d", s0, s1);
      printf("\nNext State: %d %d", n0, n1);
      printf("\nInputs: %d %d", b0, b1);
      printf("\nOutput: %d", o1);
    }
    else if (s0 == 1 && s1 == 1) {
      locks3();
      printf("\n\nPresent State: %d %d", s0, s1);
      printf("\nNext State: %d %d", n0, n1);
      printf("\nInputs: %d %d", b0, b1);
      printf("\nOutput: %d", o1);
    }
    
    // take input from user
    printf("\n\nEnter input here (0-3): ");
    // save the input for user into the input variable
    scanf("%d", &input);
    
    // transforming the input from user into inputs accepted by the machine
    if (input == 1) {
      b0 = 0;
      b1 = 0;
    }
    else if (input == 2) {
      b0 = 0;
      b1 = 1;
    }
    else if (input == 3) {
      b0 = 1;
      b1 = 0;
    }
    else if (input == 0) {
      b0 = 1;
      b1 = 1;
    }

    // call function to calculate next state and output
    calcNextState(s0, s1, b0, b1, &n0, &n1);
    // setting the present state
    s0 = n0;
    s1 = n1;
    calcOutput(s0, s1, &o1);
  } 
return 0;
}
