#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(940, 750, 640, "random");
	int **A = create_two_dim_int(940, 350, "random");
	int ***B = create_three_dim_int(780, 150, 10, "random");

	for (int c = 2; c < 10; c++)
	  for (int b = 5; b < 150; b++)
	    for (int a = 5; a < 780; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-3][c-2]+A[a][b]-B[a][b][c];
	      
	      A[a][b]=A[a-3][b-4]*C[a][b][c]/C[a][b][c];
	      
	      A[a][b]=A[a-5][b-5]+B[a][b][c]/C[a][b][c];
	      
	      B[a][b][c]=B[a-1][b-4][c-2]+38;
	    }

    return 0;
}