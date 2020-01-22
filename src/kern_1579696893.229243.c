#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(260, 140, 700, "zeros");
	float **B = create_two_dim_float(350, 150, "zeros");

	for (int d = 1; d < 700; d++)
	  for (int c = 0; c < 140; c++)
	    for (int b = 2; b < 260; b++)
	      for (int a = 2; a < 260; a++)
	      {
	        
	       A[a][b][c]=0.006;
	       A[a-2][b][c-1]=B[a][b];
	      }

    return 0;
}