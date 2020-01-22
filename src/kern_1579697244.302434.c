#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(50, 620, "zeros");
	float ***B = create_three_dim_float(820, 810, 260, "zeros");
	float **C = create_two_dim_float(820, 690, "zeros");

	for (int b = 4; b < 810; b++)
	  for (int a = 3; a < 820; a++)
	  {
	    
	     B[a][b][a]=A[a][b];
	     B[a-3][b-4][a]=C[a][b]/A[a][b];
	  }

    return 0;
}