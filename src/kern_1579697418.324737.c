#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(200, 260, "random");
	int *D = create_one_dim_int(110, "random");
	int ***E = create_three_dim_int(380, 580, 950, "random");
	int *A = create_one_dim_int(100, "random");
	int **C = create_two_dim_int(100, 150, "random");

	for (int c = 5; c < 100; c++)
	  for (int b = 5; b < 100; b++)
	    for (int a = 5; a < 100; a++)
	    {
	      
	      A[a]=A[a-5]-37;
	      
	      E[a][b][c]=D[a]-15;
	      B[a][b]=D[a+3]/A[a];
	      
	      D[a]=D[a]/C[a][b]*B[a][b]+E[a][b][c]-C[a][b];
	      A[a]=D[a-4]-E[a][b][c]*A[a]/B[a][b]+49;
	    }

    return 0;
}