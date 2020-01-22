#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(990, 690, "random");
	double *C = create_one_dim_double(760, "random");
	double **B = create_two_dim_double(470, 870, "random");

	for (int d = 1; d < 690; d++)
	  for (int c = 4; c < 465; c++)
	    for (int b = 4; b < 465; b++)
	      for (int a = 4; a < 465; a++)
	      {
	        
	       B[a][b]=C[a]-A[a][b];
	       B[a+5][b+3]=A[a][b]*C[a];
	        
	       C[a]=0.327;
	       C[a]=0.205;
	        
	       double var_a=C[a]*0.845;
	       double var_b=C[a-4]/0.706;
	        
	       double var_c=A[a][b]*0.812;
	       double var_d=A[a][b-1]*0.667;
	      }

    return 0;
}