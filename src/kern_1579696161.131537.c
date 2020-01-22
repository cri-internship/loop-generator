#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(300, "ones");
	float ***C = create_three_dim_float(630, 880, 950, "ones");
	float ***E = create_three_dim_float(930, 510, 100, "ones");
	float **A = create_two_dim_float(420, 910, "ones");
	float *B = create_one_dim_float(610, "ones");

	for (int d = 3; d < 95; d++)
	  for (int c = 3; c < 505; c++)
	    for (int b = 4; b < 415; b++)
	      for (int a = 4; a < 415; a++)
	      {
	        
	       C[a][b][c]=C[a][b-3][c-3]*0.32;
	        
	       A[a][b]=A[a+4][b+1]/0.364;
	        
	       E[a][b][c]=E[a+3][b][c+5]-0.192;
	        
	       A[a][b]=0.084-D[a]/C[a][b][c];
	        
	       E[a][b][c]=0.918;
	      }

    return 0;
}