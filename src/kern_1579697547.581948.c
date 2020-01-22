#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(160, "random");
	double ***C = create_three_dim_double(700, 730, 680, "random");
	double ***A = create_three_dim_double(970, 990, 890, "random");
	double ***D = create_three_dim_double(80, 540, 930, "random");

	for (int d = 5; d < 890; d++)
	  for (int c = 3; c < 540; c++)
	    for (int b = 5; b < 80; b++)
	      for (int a = 5; a < 80; a++)
	      {
	        
	       D[a][b][c]=0.365;
	       D[a-1][b-3][c-5]=0.779;
	        
	       A[a][b][c]=D[a][b][c]*0.299;
	       A[a-5][b-3][c-1]=B[a]*B[a]-D[a][b][c];
	      }

    return 0;
}