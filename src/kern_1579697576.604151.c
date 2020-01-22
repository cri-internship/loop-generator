#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(400, 730, 790, "ones");
	double ***B = create_three_dim_double(140, 910, 970, "ones");
	double ***C = create_three_dim_double(520, 960, 570, "ones");

	for (int c = 2; c < 790; c++)
	  for (int b = 5; b < 730; b++)
	    for (int a = 3; a < 137; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b+1][c+2]+A[a][b][c];
	      
	      B[a][b][c]=B[a+3][b+5][c+4]-0.593;
	      
	      A[a][b][c]=0.755;
	      A[a-3][b-5][c-2]=B[a][b][c]-C[a][b][c];
	      
	      A[a][b][c]=B[a][b][c]*C[a][b][c]/A[a][b][c];
	      B[a][b][c]=B[a][b][c-1]*0.655+C[a][b][c];
	    }

    return 0;
}