#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(510, "zeros");
	float ***C = create_three_dim_float(980, 720, 50, "zeros");
	float **B = create_two_dim_float(470, 650, "zeros");
	float ***A = create_three_dim_float(160, 310, 1000, "zeros");
	float *E = create_one_dim_float(580, "zeros");

	for (int d = 0; d < 47; d++)
	  for (int c = 0; c < 308; c++)
	    for (int b = 0; b < 159; b++)
	      for (int a = 0; a < 159; a++)
	      {
	        
	       C[a][b][c]=C[a+2][b+1][c+3]-0.583;
	        
	       A[a][b][c]=A[a+1][b+2][c+5]*D[a]+0.644;
	        
	       E[a]=E[a+2]*C[a][b][c]/A[a][b][c];
	        
	       float var_a=E[a]+0.925;
	       float var_b=E[a]/0.636;
	      }

    return 0;
}