#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(380, 450, "random");
	double ***A = create_three_dim_double(310, 340, 190, "random");

	for (int c = 0; c < 190; c++)
	  for (int b = 5; b < 335; b++)
	    for (int a = 5; a < 306; a++)
	    {
	      
	      B[a][b]=B[a-4][b-3]-0.033;
	      
	      B[a][b]=B[a-1][b-5]-A[a][b][c];
	      
	      A[a][b][c]=A[a][b+5][c]*0.667;
	      
	      A[a][b][c]=A[a+4][b+4][c]/0.823;
	      
	      double var_a=A[a][b][c]/0.668;
	      double var_b=A[a-5][b-3][c]*0.97;
	      
	      B[a][b]=B[a][b]*A[a][b][c];
	      A[a][b][c]=B[a][b]*0.288;
	    }

    return 0;
}