#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(320, 400, 560, "zeros");
	double *C = create_one_dim_double(140, "zeros");
	double ***A = create_three_dim_double(300, 350, 630, "zeros");

	for (int d = 3; d < 555; d++)
	  for (int c = 3; c < 395; c++)
	    for (int b = 3; b < 137; b++)
	      for (int a = 3; a < 137; a++)
	      {
	        
	       C[a]=C[a-3]*0.246;
	        
	       B[a][b][c]=B[a+1][b+3][c+3]*A[a][b][c]/C[a];
	        
	       C[a]=C[a+3]/B[a][b][c];
	        
	       B[a][b][c]=A[a][b][c]-C[a];
	        
	       double var_a=B[a][b][c]+0.44;
	       double var_b=B[a+1][b+5][c+5]/0.914;
	      }

    return 0;
}