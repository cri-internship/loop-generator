#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(230, 110, 810, "zeros");
	int *A = create_one_dim_int(60, "zeros");
	int **B = create_two_dim_int(560, 360, "zeros");

	for (int b = 3; b < 56; b++)
	  for (int a = 3; a < 56; a++)
	  {
	    
	     A[a]=A[a-3]-B[a][b]/C[a][b][a];
	    
	     A[a]=A[a-2]*B[a][b];
	    
	     A[a]=A[a+4]+B[a][b];
	    
	     A[a]=A[a+2]*22;
	  }

    return 0;
}