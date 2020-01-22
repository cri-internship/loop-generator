#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(790, 430, "ones");
	int ***B = create_three_dim_int(330, 250, 490, "ones");
	int *C = create_one_dim_int(160, "ones");

	for (int c = 0; c < 485; c++)
	  for (int b = 5; b < 249; b++)
	    for (int a = 5; a < 160; a++)
	    {
	      
	      A[a][b]=A[a-2][b-5]*C[a];
	      
	      C[a]=C[a-1]/B[a][b][c];
	      
	      A[a][b]=A[a-4][b-5]/3;
	      
	      A[a][b]=A[a-5][b]-C[a]/15;
	      
	      A[a][b]=A[a-4][b-3]/B[a][b][c];
	      
	      B[a][b][c]=B[a][b+1][c+5]*24;
	      
	      B[a][b][c]=C[a]+B[a][b][c]/A[a][b];
	      C[a]=C[a-4]-A[a][b]/B[a][b][c];
	    }

    return 0;
}