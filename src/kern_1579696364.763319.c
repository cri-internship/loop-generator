#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(150, "ones");
	int **A = create_two_dim_int(620, 60, "ones");
	int **B = create_two_dim_int(260, 90, "ones");
	int **D = create_two_dim_int(620, 1000, "ones");

	for (int c = 2; c < 90; c++)
	  for (int b = 3; b < 260; b++)
	    for (int a = 3; a < 260; a++)
	    {
	      
	      B[a][b]=B[a-3][b]-D[a][b]/C[a]*A[a][b];
	      
	      D[a][b]=9;
	      D[a+5][b+5]=23;
	      
	      int var_a=B[a][b]+47;
	      int var_b=B[a][b-2]*19;
	    }

    return 0;
}