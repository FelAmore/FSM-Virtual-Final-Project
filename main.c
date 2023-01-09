#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void top() {
  printf("\n|Fel's Combination Lock FSM|");
}

// the visualization for the lock at state 0 
void lockS0() { 
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
    printf(" |----|x|____|\n");
    printf(" |___________|\n");
    printf("     LOCKED\n");
}

// the visualization for the lock at state 1 
void lockS1() {
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
    printf(" |----|3|----|\n");
    printf(" |----|x|----|\n");
    printf(" |----|x|____|\n");
    printf(" |___________|\n");
    printf("     LOCKED\n");
}

// the visualization for the lock at state 2 
void lockS2() {
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
    printf(" |----|3|----|\n");
    printf(" |----|6|----|\n");
    printf(" |----|x|____|\n");
    printf(" |___________|\n");
    printf("     LOCKED\n");
}

// the visualization for the lock at the final state, the lock opened 
void lockS3() {
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
    printf(" |----|3|----|\n");
    printf(" |----|6|----|\n");
    printf(" |----|5|____|\n");
    printf(" |___________|\n");
    printf("    UNLOCKED\n");
}



int main(void) {
  // initialization
  int p0 = 0;
  int p1 = 0;
  int n0 = 0;
  int n1 = 0;
  int input;
  int output;
  int inputD = 0;
  int display = 0;

  // fsm routine
  while(true) {
    lockS0();
    printf("\nEnter the first digit (0-9): ");
    scanf("%d", &inputD);    
    if (inputD == 3) {
        input = 1;
        display = 1;
        lockS1();
    }
    else {
        input = 0;
        display = 0;     
        continue;
    }
    
    printf("\nEnter the second digit (0-9): ");
    scanf("%d", &inputD);
    if (inputD == 6) {
        input = 1;
        display = 2;
        lockS2();
    }
    else {
        input = 0;
        display = 0;
        continue;
    }

    printf("\nEnter the third digit (0-9): ");
    scanf("%d", &inputD);
    if (inputD == 5) {
        input = 1;
        display = 3;
        lockS3();       
    }
    else {
        input = 0;
        display = 0;
        continue;
    }
    
    printf("\nEnter any digit to reset (0-9): ");
    scanf("%d", &inputD);
    input = 0;
    display = 0;

    calcNextState(p0, p1, input, n0, n1);
    calcOutput(p0, p1, output);
}
  
return 0;
}
