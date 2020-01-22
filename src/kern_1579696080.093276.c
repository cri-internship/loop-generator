#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(850, 140, "ones");
	int *C = create_one_dim_int(710, "ones");
	int **B = create_two_dim_int(1000, 940, "ones");
	int *A = create_one_dim_int(320, "ones");
	int **D = create_two_dim_int(70, 570, "ones");

	for (int c = 1; c < 137; c++)
	  for (int b = 1; b < 849; b++)
	    for (int a = 1; a < 849; a++)
	    {
	      
	      B[a][b]=B[a-1][b-1]/C[a];
	      
	      A[a]=E[a][b]+A[a];
	      D[a][b]=E[a+1][b+3]+D[a][b];
	    }

    return 0;
}