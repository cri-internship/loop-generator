#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(50, 390, 150, "ones");
	int ***B = create_three_dim_int(630, 140, 50, "ones");
	int *A = create_one_dim_int(370, "ones");
	int ***D = create_three_dim_int(290, 480, 940, "ones");
	int **E = create_two_dim_int(320, 940, "ones");

	for (int c = 5; c < 47; c++)
	  for (int b = 5; b < 137; b++)
	    for (int a = 5; a < 290; a++)
	    {
	      
	      D[a][b][c]=D[a-5][b-5][c-5]+B[a][b][c];
	      
	      B[a][b][c]=11+E[a][b]*C[a][b][c]-A[a];
	      B[a+4][b+3][c+3]=A[a]+D[a][b][c]-E[a][b];
	    }

    return 0;
}