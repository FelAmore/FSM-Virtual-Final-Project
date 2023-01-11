void calcNextState(int s0, int s1, int b0, int b1, int* n0, int* n1) {
    // obtained from kmap 
    *n0 = ((!s0) & s1 & (!b0) & b1) | (s0 & (!s1) & b0 & (!b1));
    *n1 = ((!s0) & (!s1) & (!b0) & (!b1)) | (s0 & (!s1) & b0 & (!b1));
}

void calcOutput(int s0, int s1, int* o1) {
    // the output as in the lock got openned
    // obtained from kmap
    *o1 = (s0 & s1);
}
