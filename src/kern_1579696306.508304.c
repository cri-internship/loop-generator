#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(380, 370, "zeros");
	float *B = create_one_dim_float(100, "zeros");
	float **C = create_two_dim_float(430, 660, "zeros");
	float *A = create_one_dim_float(260, "zeros");
	float *E = create_one_dim_float(880, "zeros");

	for (int d = 1; d < 368; d++)
	  for (int c = 4; c < 260; c++)
	    for (int b = 4; b < 260; b++)
	      for (int a = 4; a < 260; a++)
	      {
	        
	       D[a][b]=D[a-3][b-1]*0.348;
	        
	       A[a]=B[a]/D[a][b]*E[a];
	       A[a-1]=C[a][b]+E[a];
	        
	       A[a]=0.788;
	        
	       D[a][b]=0.517;
	        
	       E[a]=0.559;
	       E[a-3]=0.172;
	        
	       D[a][b]=E[a]-A[a]*D[a][b]+0.79;
	       A[a]=E[a-3]-B[a]*C[a][b];
	      }

    return 0;
}