#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(1000, 700, "random");
	int ***C = create_three_dim_int(200, 940, 30, "random");
	int *A = create_one_dim_int(230, "random");
	int ***D = create_three_dim_int(270, 570, 600, "random");
	int **E = create_two_dim_int(890, 680, "random");

	for (int c = 4; c < 27; c++)
	  for (int b = 5; b < 570; b++)
	    for (int a = 4; a < 196; a++)
	    {
	      
	      D[a][b][c]=D[a][b-1][c-4]/B[a][b]-A[a]+C[a][b][c];
	      
	      B[a][b]=B[a+4][b+2]-E[a][b]*D[a][b][c];
	      
	      A[a]=A[a+4]+B[a][b]/E[a][b];
	      
	      C[a][b][c]=C[a+4][b+4][c+3]-50;
	      
	      E[a][b]=C[a][b][c]-B[a][b];
	      E[a-4][b-5]=C[a][b][c]/B[a][b]+A[a]*D[a][b][c];
	      
	      E[a][b]=17;
	    }

    return 0;
}