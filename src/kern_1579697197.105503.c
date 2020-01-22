#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(430, 440, 100, "random");
	double ***B = create_three_dim_double(210, 400, 170, "random");
	double ***A = create_three_dim_double(940, 730, 870, "random");

	for (int d = 4; d < 96; d++)
	  for (int c = 2; c < 395; c++)
	    for (int b = 2; b < 205; b++)
	      for (int a = 2; a < 205; a++)
	      {
	        
	       B[a][b][c]=B[a+5][b+4][c+3]*0.088;
	        
	       B[a][b][c]=B[a][b+5][c+5]-0.71;
	        
	       C[a][b][c]=0.61;
	       C[a+3][b+4][c+4]=0.908;
	        
	       double var_a=C[a][b][c]-0.565;
	       double var_b=C[a-2][b-1][c-1]/0.999;
	        
	       A[a][b][c]=C[a][b][c]-B[a][b][c];
	       C[a][b][c]=C[a-2][b-2][c-4]+0.172;
	      }

    return 0;
}