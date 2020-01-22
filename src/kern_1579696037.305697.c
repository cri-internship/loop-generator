#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(130, 300, 300, "random");
	double ***B = create_three_dim_double(780, 190, 60, "random");

	for (int d = 5; d < 56; d++)
	  for (int c = 3; c < 187; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-3][c-3]+0.199;
	        
	       B[a][b][c]=B[a+2][b+3][c+1]/0.044;
	        
	       B[a][b][c]=B[a+1][b+2][c+4]-A[a][b][c];
	        
	       B[a][b][c]=B[a+3][b+1][c+4]*0.473;
	        
	       double var_a=B[a][b][c]-0.021;
	       double var_b=B[a-4][b-3][c-5]*0.029;
	      }

    return 0;
}