#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(910, "random");
	double **B = create_two_dim_double(70, 60, "random");

	for (int d = 3; d < 56; d++)
	  for (int c = 4; c < 67; c++)
	    for (int b = 4; b < 67; b++)
	      for (int a = 4; a < 67; a++)
	      {
	        
	       B[a][b]=B[a][b+4]-0.577;
	        
	       A[a]=0.408;
	       A[a-2]=0.942;
	        
	       double var_a=A[a]-0.238;
	       double var_b=A[a+5]-0.966;
	        
	       double var_c=B[a][b]+0.419;
	       double var_d=B[a-4][b-1]+0.894;
	        
	       double var_e=B[a][b]+0.713;
	       double var_f=B[a+3][b+3]*0.002;
	        
	       A[a]=B[a][b]-A[a];
	       B[a][b]=B[a][b-3]*A[a];
	      }

    return 0;
}