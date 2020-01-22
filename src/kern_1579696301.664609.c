#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(380, 910, "ones");
	double *A = create_one_dim_double(850, "ones");
	double *B = create_one_dim_double(290, "ones");
	double ***D = create_three_dim_double(300, 930, 630, "ones");

	for (int d = 2; d < 630; d++)
	  for (int c = 0; c < 905; c++)
	    for (int b = 4; b < 290; b++)
	      for (int a = 4; a < 290; a++)
	      {
	        
	       C[a][b]=C[a+5][b+5]-0.908;
	        
	       double var_a=A[a]*0.313;
	       A[a]=0.532;
	        
	       A[a]=0.944;
	        
	       double var_b=B[a]+0.627;
	       double var_c=B[a]-0.497;
	        
	       double var_d=D[a][b][c]+0.654;
	       double var_e=D[a-4][b][c-2]+0.566;
	      }

    return 0;
}