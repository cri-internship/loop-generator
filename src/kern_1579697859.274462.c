#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(630, 680, "zeros");
	int *A = create_one_dim_int(920, "zeros");
	int ***C = create_three_dim_int(430, 600, 800, "zeros");

	for (int c = 2; c < 680; c++)
	  for (int b = 3; b < 630; b++)
	    for (int a = 3; a < 630; a++)
	    {
	      
	      B[a][b]=B[a-3][b-2]+43;
	      
	      A[a]=B[a][b];
	      A[a+1]=C[a][b][c]-B[a][b];
	    }

    return 0;
}