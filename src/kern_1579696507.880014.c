#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(970, 830, "ones");
	int ***B = create_three_dim_int(850, 270, 110, "ones");
	int *C = create_one_dim_int(580, "ones");

	for (int c = 2; c < 109; c++)
	  for (int b = 4; b < 265; b++)
	    for (int a = 4; a < 580; a++)
	    {
	      
	      A[a][b]=A[a+5][b]+C[a];
	      
	      C[a]=A[a][b];
	      C[a-1]=B[a][b][c];
	      
	      B[a][b][c]=40;
	      B[a+1][b+5][c+1]=42;
	      
	      A[a][b]=B[a][b][c]+A[a][b]*39;
	      C[a]=B[a-4][b-4][c-2]+C[a]-A[a][b];
	    }

    return 0;
}