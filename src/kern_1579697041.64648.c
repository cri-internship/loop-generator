#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(180, 160, "ones");
	double ***B = create_three_dim_double(820, 480, 160, "ones");

	for (int c = 4; c < 160; c++)
	  for (int b = 1; b < 159; b++)
	    for (int a = 5; a < 176; a++)
	    {
	      
	      A[a][b]=A[a+4][b]-B[a][b][c];
	      
	      A[a][b]=A[a+3][b+1]/B[a][b][c];
	      
	      A[a][b]=A[a+2][b]-B[a][b][c];
	      
	      B[a][b][c]=0.155;
	      B[a][b-1][c-4]=0.802;
	      
	      A[a][b]=A[a][b]+0.347;
	      B[a][b][c]=A[a-5][b-1]/B[a][b][c];
	    }

    return 0;
}