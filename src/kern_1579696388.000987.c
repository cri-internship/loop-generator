#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(200, "random");
	double **A = create_two_dim_double(750, 690, "random");

	for (int d = 2; d < 689; d++)
	  for (int c = 5; c < 195; c++)
	    for (int b = 5; b < 195; b++)
	      for (int a = 5; a < 195; a++)
	      {
	        
	       A[a][b]=A[a-4][b-2]/0.897;
	        
	       B[a]=B[a-5]+A[a][b];
	        
	       A[a][b]=A[a-3][b-2]/0.929;
	        
	       A[a][b]=A[a+2][b]/0.369;
	        
	       double var_a=A[a][b]-0.75;
	       double var_b=A[a-2][b-2]+0.946;
	        
	       B[a]=B[a]-A[a][b];
	       A[a][b]=B[a+5]+A[a][b];
	        
	       B[a]=A[a][b]+B[a];
	       B[a]=A[a+2][b+1]-B[a];
	      }

    return 0;
}