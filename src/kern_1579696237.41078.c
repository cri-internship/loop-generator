#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(360, 170, 760, "ones");
	double **B = create_two_dim_double(20, 10, "ones");

	for (int d = 0; d < 755; d++)
	  for (int c = 0; c < 7; c++)
	    for (int b = 0; b < 16; b++)
	      for (int a = 0; a < 16; a++)
	      {
	        
	       B[a][b]=B[a+1][b+3]+0.599;
	        
	       A[a][b][c]=A[a+4][b+5][c+2]/0.104;
	        
	       A[a][b][c]=0.894;
	        
	       B[a][b]=0.725;
	        
	       double var_a=A[a][b][c]-0.872;
	       double var_b=A[a+2][b][c+3]/0.892;
	      }

    return 0;
}