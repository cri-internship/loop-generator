#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(230, 690, 900, "random");
	float *D = create_one_dim_float(540, "random");
	float *E = create_one_dim_float(740, "random");
	float ***C = create_three_dim_float(750, 330, 90, "random");
	float *A = create_one_dim_float(780, "random");

	for (int d = 5; d < 90; d++)
	  for (int c = 0; c < 330; c++)
	    for (int b = 1; b < 225; b++)
	      for (int a = 1; a < 225; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b][c-5]-0.383;
	        
	       B[a][b][c]=B[a+5][b+3][c+2]*0.032+D[a]/A[a];
	        
	       A[a]=0.56;
	       A[a+3]=0.261;
	        
	       E[a]=C[a][b][c];
	       E[a+2]=0.983/D[a]-B[a][b][c];
	      }

    return 0;
}