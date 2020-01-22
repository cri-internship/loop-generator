#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "random");
	double ***B = create_three_dim_double(440, 240, 180, "random");

	for (int d = 5; d < 177; d++)
	  for (int c = 2; c < 240; c++)
	    for (int b = 5; b < 435; b++)
	      for (int a = 5; a < 435; a++)
	      {
	        
	       A[a]=A[a-4]/0.632;
	        
	       B[a][b][c]=B[a-5][b-2][c-5]*0.071;
	        
	       A[a]=A[a+2]+0.318;
	        
	       double var_a=B[a][b][c]+0.508;
	       double var_b=B[a+5][b][c+3]*0.256;
	      }

    return 0;
}