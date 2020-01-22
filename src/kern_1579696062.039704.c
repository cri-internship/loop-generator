#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(950, 910, "ones");
	double **C = create_two_dim_double(310, 400, "ones");
	double **B = create_two_dim_double(80, 260, "ones");
	double *A = create_one_dim_double(810, "ones");

	for (int d = 4; d < 260; d++)
	  for (int c = 4; c < 80; c++)
	    for (int b = 4; b < 80; b++)
	      for (int a = 4; a < 80; a++)
	      {
	        
	       D[a][b]=D[a-1][b-4]*C[a][b];
	        
	       C[a][b]=C[a-2][b]/0.844;
	        
	       C[a][b]=C[a+5][b+3]/B[a][b]-A[a]+D[a][b];
	        
	       double var_a=B[a][b]-0.456;
	       double var_b=B[a-1][b-4]*0.415;
	        
	       C[a][b]=D[a][b]-0.24;
	       D[a][b]=D[a-4][b-3]-C[a][b];
	      }

    return 0;
}