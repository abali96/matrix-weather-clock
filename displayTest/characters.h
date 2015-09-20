//left half of LED matrix are pins 32-37
//right half of LED matrix are pins 22-27
#include "Arduino.h"
struct Characters {

  // Numerics
  bool space[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  bool zero[15] = {1,1,1,1,0,1,1,0,1,1,0,1,1,1,1};
  bool one[15] = {0,1,0,0,1,0,0,1,0,0,1,0,0,1,0};
  bool two[15] = {1,1,1,0,0,1,1,1,1,1,0,0,1,1,1};
  bool three[15] = {1,1,1,0,0,1,1,1,1,0,0,1,1,1,1};
  bool four[15] = {1,0,1,1,0,1,1,1,1,0,0,1,0,0,1};
  bool five[15] = {1,1,1,1,0,0,1,1,1,0,0,1,1,1,1};
  bool six[15] = {1,1,1,1,0,0,1,1,1,1,0,1,1,1,1};
  bool seven[15] = {1,1,1,0,0,1,0,0,1,0,0,1,0,0,1};
  bool eight[15] = {1,1,1,1,0,1,1,1,1,1,0,1,1,1,1};
  bool nine[15] = {1,1,1,1,0,1,1,1,1,0,0,1,1,1,1};
  
  // Alphabets
  bool A[15] = {0,1,0,1,0,1,1,1,1,1,0,1,1,0,1};
  bool B[15] = {1,1,0,1,0,1,1,1,0,1,0,1,1,1,0};
  bool C[15] = {0,1,1,1,0,0,1,0,0,1,0,0,0,1,1};
  bool D[15] = {1,1,0,1,0,1,1,0,1,1,0,1,1,1,0};
  bool E[15] = {1,1,1,1,0,0,1,1,1,1,0,0,1,1,1};
  bool F[15] = {1,1,1,1,0,0,1,1,1,1,0,0,1,0,0};
  bool G[15] = {0,1,1,1,0,0,1,0,1,1,0,1,0,1,1};  
  bool H[15] = {1,0,1,1,0,1,1,1,1,1,0,1,1,0,1};  
  bool I[15] = {0,1,0,0,1,0,0,1,0,0,1,0,0,1,0};
  bool J[15] = {0,1,1,0,0,1,0,0,1,1,0,1,0,1,0};  
  bool K[15] = {1,0,1,1,0,1,1,1,0,1,0,1,1,0,1};
  bool L[15] = {1,0,0,1,0,0,1,0,0,1,0,0,1,1,1};
  bool M[15] = {1,0,1,1,1,1,1,0,1,1,0,1,1,0,1};
  bool N[15] = {1,1,0,1,0,1,1,0,1,1,0,1,1,0,1};
  bool O[15] = {0,1,0,1,0,1,1,0,1,1,0,1,0,1,0};
  bool P[15] = {1,1,0,1,0,1,1,1,0,1,0,0,1,0,0};
  bool Q[15] = {0,1,0,1,0,1,1,0,1,1,0,1,0,1,1};
  bool R[15] = {1,1,0,1,0,1,1,1,0,1,0,1,1,0,1};
  bool S[15] = {0,1,1,1,0,0,1,0,1,0,0,1,1,1,1};
  bool T[15] = {1,1,1,0,1,0,0,1,0,0,1,0,0,1,0};
  bool U[15] = {1,0,1,1,0,1,1,0,1,1,0,1,1,1,1};
  bool V[15] = {1,0,1,1,0,1,1,0,1,1,0,1,0,1,0};
  bool W[15] = {1,0,1,1,0,1,1,0,1,1,1,1,1,0,1};
  bool X[15] = {1,0,1,1,0,1,0,1,0,1,0,1,1,0,1};
  bool Y[15] = {1,0,1,1,0,1,0,1,0,0,1,0,0,1,0};  
  bool Z[15] = {1,1,1,0,0,1,0,1,0,1,0,0,1,1,1};  

  
} characters;
