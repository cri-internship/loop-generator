#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(10, "ones");
	int **B = create_two_dim_int(670, 850, "ones");
	int **D = create_two_dim_int(20, 960, "ones");
	int **A = create_two_dim_int(460, 200, "ones");
	int **E = create_two_dim_int(850, 880, "ones");

	for (int c = 4; c < 200; c++)
	  for (int b = 5; b < 460; b++)
	    for (int a = 5; a < 460; a++)
	    {
	      
	      A[a][b]=A[a-5][b-4]*D[a][b]+E[a][b]/B[a][b]-C[a];
	      
	      B[a][b]=B[a+5][b]/21;
	    }

    return 0;
}