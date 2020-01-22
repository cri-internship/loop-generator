#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 110, 210, "random");
	double ***B = create_three_dim_double(290, 20, 430, "random");

	for (int c = 3; c < 208; c++)
	  for (int b = 4; b < 18; b++)
	    for (int a = 5; a < 269; a++)
	    {
	      
	      A[a][b][c]=A[a][b-2][c-2]*B[a][b][c];
	      
	      A[a][b][c]=A[a-1][b-2][c]-0.892;
	      
	      B[a][b][c]=B[a-5][b-4][c-1]/0.826;
	      
	      A[a][b][c]=A[a+1][b+1][c+2]*B[a][b][c];
	      
	      B[a][b][c]=0.497;
	      
	      double var_a=B[a][b][c]+0.706;
	      double var_b=B[a][b][c-2]*0.137;
	    }

    return 0;
}