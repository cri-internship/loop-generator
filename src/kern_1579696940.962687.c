#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(360, 480, 430, "random");
	int ***C = create_three_dim_int(260, 90, 790, "random");
	int ***B = create_three_dim_int(670, 30, 60, "random");
	int *A = create_one_dim_int(780, "random");
	int **D = create_two_dim_int(60, 360, "random");

	for (int b = 2; b < 27; b++)
	  for (int a = 5; a < 60; a++)
	  {
	    
	     A[a]=A[a-5]+B[a][b][a]-D[a][b];
	    
	     E[a][b][a]=A[a]-C[a][b][a]+C[a][b][a];
	     B[a][b][a]=E[a][b][a]+B[a][b][a]/A[a]-C[a][b][a];
	    
	     B[a][b][a]=B[a+5][b+3][a+4]*E[a][b][a]-D[a][b]+A[a]/C[a][b][a];
	    
	     C[a][b][a]=39;
	     C[a-1][b-2][a-5]=A[a]-D[a][b]+E[a][b][a];
	    
	     D[a][b]=D[a][b]-C[a][b][a];
	     C[a][b][a]=D[a-5][b-2]+B[a][b][a];
	  }

    return 0;
}