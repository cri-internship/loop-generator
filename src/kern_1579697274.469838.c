#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(190, 710, 370, "ones");
	double ***B = create_three_dim_double(150, 990, 950, "ones");
	double ***A = create_three_dim_double(380, 220, 40, "ones");

	for (int c = 4; c < 37; c++)
	  for (int b = 4; b < 217; b++)
	    for (int a = 5; a < 150; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b][c-4]/0.735;
	      
	      A[a][b][c]=A[a-5][b-4][c-4]-0.33;
	      
	      A[a][b][c]=A[a-3][b][c-4]/B[a][b][c]*C[a][b][c];
	      
	      C[a][b][c]=C[a][b-4][c-3]*0.801;
	      
	      B[a][b][c]=B[a-5][b][c-1]*A[a][b][c];
	      
	      A[a][b][c]=A[a+2][b+3][c+3]/0.254;
	    }

    return 0;
}