#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(150, 780, "random");
	double **A = create_two_dim_double(680, 680, "random");

	for (int d = 4; d < 775; d++)
	  for (int c = 5; c < 145; c++)
	    for (int b = 5; b < 145; b++)
	      for (int a = 5; a < 145; a++)
	      {
	        
	       B[a][b]=B[a-3][b-4]-0.451;
	        
	       B[a][b]=0.452;
	        
	       B[a][b]=B[a][b]*A[a][b];
	       A[a][b]=B[a+5][b+4]-0.614;
	        
	       double var_a=B[a][b]/0.987;
	       double var_b=B[a-5][b-4]/0.556;
	        
	       A[a][b]=B[a][b]/A[a][b];
	       B[a][b]=B[a+2][b+5]/A[a][b];
	        
	       double var_c=B[a][b]+0.85;
	       double var_d=B[a-3][b]*0.703;
	      }

    return 0;
}