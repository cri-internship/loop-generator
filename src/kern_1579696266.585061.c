#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(580, "random");
	int *A = create_one_dim_int(360, "random");
	int **B = create_two_dim_int(860, 570, "random");
	int **D = create_two_dim_int(690, 860, "random");

	for (int c = 3; c < 570; c++)
	  for (int b = 5; b < 360; b++)
	    for (int a = 5; a < 360; a++)
	    {
	      
	      A[a]=C[a]-50;
	      A[a-3]=B[a][b]*B[a][b];
	      
	      A[a]=C[a]-D[a][b]/9;
	      
	      B[a][b]=A[a]+A[a]*22;
	      B[a-4][b-3]=D[a][b];
	    }

    return 0;
}