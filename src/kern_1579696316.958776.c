#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(470, "zeros");
	int **D = create_two_dim_int(800, 810, "zeros");
	int ***E = create_three_dim_int(740, 90, 850, "zeros");
	int **A = create_two_dim_int(480, 680, "zeros");
	int *C = create_one_dim_int(540, "zeros");

	for (int b = 5; b < 90; b++)
	  for (int a = 3; a < 540; a++)
	  {
	    
	     E[a][b][a]=E[a][b-5][a-2]/C[a]+39*D[a][b]-B[a];
	    
	     C[a]=E[a][b][a]*E[a][b][a]/A[a][b]+B[a];
	     C[a-3]=D[a][b]+E[a][b][a]-13;
	  }

    return 0;
}