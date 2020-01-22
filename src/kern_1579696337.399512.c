#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(510, 480, 620, "ones");
	double **A = create_two_dim_double(150, 550, "ones");

	for (int c = 0; c < 615; c++)
	  for (int b = 2; b < 477; b++)
	    for (int a = 2; a < 148; a++)
	    {
	      
	      A[a][b]=A[a-1][b-2]+0.212;
	      
	      A[a][b]=A[a+2][b+3]-0.534;
	      
	      B[a][b][c]=0.402;
	      B[a+5][b+3][c+5]=0.198;
	      
	      A[a][b]=A[a][b]/0.418;
	      B[a][b][c]=A[a][b-2]/B[a][b][c];
	    }

    return 0;
}