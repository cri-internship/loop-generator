#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(20, "ones");
	double ***B = create_three_dim_double(500, 100, 210, "ones");
	double ***D = create_three_dim_double(90, 770, 690, "ones");
	double *A = create_one_dim_double(20, "ones");
	double ***E = create_three_dim_double(250, 210, 600, "ones");

	for (int d = 0; d < 685; d++)
	  for (int c = 0; c < 768; c++)
	    for (int b = 0; b < 16; b++)
	      for (int a = 0; a < 16; a++)
	      {
	        
	       D[a][b][c]=D[a+5][b+1][c+5]+0.01;
	        
	       A[a]=B[a][b][c]-D[a][b][c];
	       A[a+4]=0.5;
	        
	       double var_a=D[a][b][c]-0.35;
	       double var_b=D[a+1][b+2][c+5]*0.126;
	      }

    return 0;
}