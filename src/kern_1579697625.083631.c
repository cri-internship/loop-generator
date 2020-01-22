#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(380, 210, "ones");
	double *A = create_one_dim_double(510, "ones");
	double **E = create_two_dim_double(50, 680, "ones");
	double *B = create_one_dim_double(80, "ones");
	double ***D = create_three_dim_double(480, 450, 870, "ones");

	for (int d = 2; d < 870; d++)
	  for (int c = 2; c < 205; c++)
	    for (int b = 5; b < 48; b++)
	      for (int a = 5; a < 48; a++)
	      {
	        
	       E[a][b]=E[a+2][b+5]+C[a][b]/A[a];
	        
	       A[a]=A[a+4]/0.27;
	        
	       A[a]=B[a]*0.958-E[a][b];
	        
	       C[a][b]=0.536;
	       C[a+1][b+5]=0.435;
	        
	       D[a][b][c]=0.902;
	       D[a-5][b-2][c-2]=0.782;
	      }

    return 0;
}