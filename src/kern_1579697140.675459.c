#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(710, "ones");
	int *C = create_one_dim_int(230, "ones");
	int *B = create_one_dim_int(90, "ones");
	int **A = create_two_dim_int(910, 390, "ones");
	int ***E = create_three_dim_int(300, 980, 270, "ones");

	for (int c = 2; c < 270; c++)
	  for (int b = 0; b < 980; b++)
	    for (int a = 2; a < 300; a++)
	    {
	      
	      D[a]=D[a+3]*33;
	      
	      C[a]=E[a][b][c]-D[a]+A[a][b]*C[a];
	      D[a]=E[a-2][b][c-2]+B[a]*D[a]/C[a];
	    }

    return 0;
}