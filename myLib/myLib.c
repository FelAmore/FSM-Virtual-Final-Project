void calcNextState(int p0, int p1, int input, int n0, int n1) {
    // obtained from kmap 
    n0 = ((!p0) & p1 & input) | (p0 & (!p1) & input);
    n1 = ((!p1) & input);
}

void calcOutput(int p0, int p1, int output) {
    // the output as in the lock got openned
    // obtained from kmap
    output = (p0 & p1);
}