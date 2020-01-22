#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(860, 600, 470, "ones");
	float *C = create_one_dim_float(430, "ones");
	float ***B = create_three_dim_float(980, 800, 460, "ones");

	for (int d = 5; d < 456; d++)
	  for (int c = 5; c < 600; c++)
	    for (int b = 1; b < 860; b++)
	      for (int a = 1; a < 860; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-3][c-5]-0.169;
	        
	       B[a][b][c]=B[a][b-5][c-5]-C[a];
	        
	       B[a][b][c]=B[a+5][b+2][c+2]/A[a][b][c]*A[a][b][c];
	      }

    return 0;
}