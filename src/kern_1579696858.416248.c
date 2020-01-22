#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(660, "zeros");
	int **D = create_two_dim_int(580, 10, "zeros");
	int **C = create_two_dim_int(860, 860, "zeros");
	int *B = create_one_dim_int(850, "zeros");

	for (int c = 3; c < 860; c++)
	  for (int b = 5; b < 848; b++)
	    for (int a = 5; a < 848; a++)
	    {
	      
	      C[a][b]=C[a-5][b-3]-1;
	      
	      B[a]=B[a+2]+A[a];
	    }

    return 0;
}