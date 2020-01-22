#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(590, "zeros");
	float *A = create_one_dim_float(370, "zeros");
	float ***C = create_three_dim_float(30, 750, 1000, "zeros");

	for (int d = 0; d < 996; d++)
	  for (int c = 0; c < 745; c++)
	    for (int b = 0; b < 25; b++)
	      for (int a = 0; a < 25; a++)
	      {
	        
	       C[a][b][c]=C[a+5][b+5][c+4]+A[a]/B[a];
	        
	       A[a]=0.639;
	       A[a+2]=0.786;
	        
	       A[a]=C[a][b][c]*B[a];
	      }

    return 0;
}