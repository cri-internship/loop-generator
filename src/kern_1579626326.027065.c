#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(650, 530, 930, "random");
	double *B = create_one_dim_double(530, "random");

	for (int d = 0; d < 929; d++)
	  for (int c = 0; c < 526; c++)
	    for (int b = 5; b < 527; b++)
	      for (int a = 5; a < 527; a++)
	      {
	        
	       B[a]=B[a+3]/0.803;
	        
	       A[a][b][c]=A[a][b+4][c+1]+0.772;
	        
	       B[a]=0.71;
	        
	       double var_a=B[a]/0.929;
	       double var_b=B[a-5]+0.702;
	        
	       B[a]=B[a]/0.553;
	      }

    return 0;
}