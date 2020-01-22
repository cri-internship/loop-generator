#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(940, 220, 770, "zeros");
	int *C = create_one_dim_int(640, "zeros");
	int **A = create_two_dim_int(140, 620, "zeros");

	for (int c = 2; c < 770; c++)
	  for (int b = 5; b < 220; b++)
	    for (int a = 5; a < 135; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-1][c-1]-A[a][b]*C[a];
	      
	      B[a][b][c]=B[a-1][b-5][c-2]+C[a]*A[a][b];
	      
	      A[a][b]=A[a+2][b+3]+10;
	      
	      C[a]=C[a+5]/21;
	      
	      A[a][b]=42;
	      
	      C[a]=2;
	    }

    return 0;
}