#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(970, 290, 680, "random");
	double **B = create_two_dim_double(410, 660, "random");

	for (int d = 2; d < 680; d++)
	  for (int c = 4; c < 287; c++)
	    for (int b = 3; b < 408; b++)
	      for (int a = 3; a < 408; a++)
	      {
	        
	       A[a][b][c]=A[a][b-2][c-2]/B[a][b];
	        
	       B[a][b]=B[a-3][b-4]*A[a][b][c];
	        
	       B[a][b]=B[a+2][b+3]-0.472;
	        
	       double var_a=A[a][b][c]/0.154;
	       double var_b=A[a][b+3][c]+0.898;
	      }

    return 0;
}