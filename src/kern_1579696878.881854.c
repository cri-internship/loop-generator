#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(1000, 210, 800, "zeros");
	int **E = create_two_dim_int(200, 950, "zeros");
	int *B = create_one_dim_int(270, "zeros");
	int ***D = create_three_dim_int(370, 430, 490, "zeros");
	int *C = create_one_dim_int(930, "zeros");

	for (int c = 0; c < 925; c++)
	  for (int b = 0; b < 925; b++)
	    for (int a = 0; a < 925; a++)
	    {
	      
	      C[a]=C[a]/B[a]+A[a][b][c]-D[a][b][c];
	      B[a]=C[a+5]*E[a][b]-E[a][b]+B[a]/D[a][b][c];
	    }

    return 0;
}