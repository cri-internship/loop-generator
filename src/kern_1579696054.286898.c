#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(130, 110, 40, "random");
	double **B = create_two_dim_double(470, 210, "random");

	for (int c = 5; c < 40; c++)
	  for (int b = 5; b < 110; b++)
	    for (int a = 3; a < 130; a++)
	    {
	      
	      B[a][b]=B[a-3][b-3]-0.225;
	      
	      A[a][b][c]=A[a-2][b-5][c-5]+0.81;
	      
	      B[a][b]=B[a-1][b-3]+0.995;
	      
	      B[a][b]=B[a+4][b+3]/0.115;
	      
	      A[a][b][c]=B[a][b]+A[a][b][c];
	      B[a][b]=B[a+1][b+5]*A[a][b][c];
	      
	      double var_a=B[a][b]+0.035;
	      double var_b=B[a-2][b-4]*0.286;
	    }

    return 0;
}