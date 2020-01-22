#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(600, 60, "random");
	int *A = create_one_dim_int(140, "random");
	int ***D = create_three_dim_int(890, 80, 720, "random");
	int **E = create_two_dim_int(170, 740, "random");
	int *C = create_one_dim_int(310, "random");

	for (int c = 0; c < 720; c++)
	  for (int b = 2; b < 60; b++)
	    for (int a = 5; a < 600; a++)
	    {
	      
	      D[a][b][c]=D[a-4][b-2][c]-C[a]*A[a]+E[a][b]/B[a][b];
	      
	      B[a][b]=B[a][b]-D[a][b][c];
	      E[a][b]=B[a-5][b]-D[a][b][c];
	    }

    return 0;
}