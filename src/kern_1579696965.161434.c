#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(680, 750, 640, "random");
	double *A = create_one_dim_double(300, "random");
	double *C = create_one_dim_double(310, "random");

	for (int d = 5; d < 640; d++)
	  for (int c = 5; c < 748; c++)
	    for (int b = 2; b < 298; b++)
	      for (int a = 2; a < 298; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-5][c-5]/C[a]-A[a];
	        
	       C[a]=C[a+4]/0.936;
	        
	       B[a][b][c]=C[a];
	        
	       double var_a=A[a]+0.804;
	       double var_b=A[a+2]-0.143;
	      }

    return 0;
}