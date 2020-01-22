#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(540, 970, "random");
	double ***C = create_three_dim_double(510, 700, 150, "random");
	double ***B = create_three_dim_double(830, 400, 640, "random");

	for (int d = 1; d < 150; d++)
	  for (int c = 4; c < 400; c++)
	    for (int b = 3; b < 510; b++)
	      for (int a = 3; a < 510; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-4][c-1]+B[a][b][c];
	        
	       A[a][b]=A[a+4][b+5]*0.837;
	        
	       A[a][b]=A[a+2][b+1]-0.305;
	        
	       double var_a=B[a][b][c]/0.617;
	       double var_b=B[a-3][b-1][c]+0.34;
	      }

    return 0;
}