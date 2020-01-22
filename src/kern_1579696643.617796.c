#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(60, 920, 230, "random");
	double **A = create_two_dim_double(420, 770, "random");

	for (int c = 3; c < 230; c++)
	  for (int b = 5; b < 765; b++)
	    for (int a = 5; a < 60; a++)
	    {
	      
	      A[a][b]=A[a-1][b]+B[a][b][c];
	      
	      B[a][b][c]=B[a-2][b-5][c-3]/0.956;
	      
	      B[a][b][c]=B[a-5][b-2][c-2]/0.336;
	      
	      A[a][b]=A[a+5][b+5]+0.387;
	      
	      double var_a=B[a][b][c]/0.693;
	      double var_b=B[a-4][b-3][c-3]-0.957;
	    }

    return 0;
}