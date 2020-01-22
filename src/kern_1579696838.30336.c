#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(930, 880, 160, "zeros");
	int **C = create_two_dim_int(510, 940, "zeros");
	int *D = create_one_dim_int(380, "zeros");
	int *B = create_one_dim_int(810, "zeros");
	int *A = create_one_dim_int(120, "zeros");

	for (int b = 3; b < 880; b++)
	  for (int a = 3; a < 376; a++)
	  {
	    
	     E[a][b][a]=D[a]+C[a][b]-B[a];
	     E[a-1][b-3][a-3]=11;
	    
	     D[a]=D[a]/E[a][b][a];
	     B[a]=D[a+4]+B[a]/E[a][b][a]*C[a][b]-A[a];
	  }

    return 0;
}