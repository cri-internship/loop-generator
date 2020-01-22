#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(980, "ones");
	double ***B = create_three_dim_double(170, 940, 380, "ones");
	double *A = create_one_dim_double(70, "ones");

	for (int d = 0; d < 378; d++)
	  for (int c = 3; c < 937; c++)
	    for (int b = 5; b < 66; b++)
	      for (int a = 5; a < 66; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-3][c]+C[a];
	        
	       B[a][b][c]=B[a][b+3][c+2]/A[a]+A[a];
	        
	       C[a]=C[a+4]/0.222;
	        
	       A[a]=A[a+4]-B[a][b][c]*0.454;
	        
	       C[a]=0.261;
	      }

    return 0;
}