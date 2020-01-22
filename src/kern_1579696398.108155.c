#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(250, "zeros");
	float ***A = create_three_dim_float(430, 600, 980, "zeros");
	float *B = create_one_dim_float(80, "zeros");

	for (int d = 2; d < 76; d++)
	  for (int c = 2; c < 76; c++)
	    for (int b = 2; b < 76; b++)
	      for (int a = 2; a < 76; a++)
	      {
	        
	       C[a]=B[a]*A[a][b][c];
	       C[a-2]=A[a][b][c]-B[a];
	        
	       B[a]=0.823;
	       B[a+4]=0.472;
	        
	       B[a]=C[a];
	      }

    return 0;
}