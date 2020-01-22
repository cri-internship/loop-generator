#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(920, 830, 880, "ones");

	for (int c = 4; c < 875; c++)
	  for (int b = 5; b < 825; b++)
	    for (int a = 5; a < 916; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-5][c-1]+0.079;
	      
	      A[a][b][c]=A[a-4][b-4][c-4]/0.088;
	      
	      A[a][b][c]=A[a-5][b-3][c-2]+0.667;
	      
	      A[a][b][c]=A[a+4][b][c+3]*0.819;
	      
	      A[a][b][c]=A[a+1][b+5][c]-0.403;
	      
	      double var_a=A[a][b][c]/0.616;
	      double var_b=A[a+1][b+3][c+5]/0.614;
	      
	      double var_c=A[a][b][c]+0.532;
	      double var_d=A[a+4][b+4][c+3]+0.233;
	    }

    return 0;
}