#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(430, 250, "zeros");
	int **A = create_two_dim_int(20, 880, "zeros");
	int ***D = create_three_dim_int(840, 200, 170, "zeros");
	int *B = create_one_dim_int(100, "zeros");

	for (int b = 2; b < 199; b++)
	  for (int a = 4; a < 430; a++)
	  {
	    
	     D[a][b][a]=C[a][b]-A[a][b];
	     D[a+3][b+1][a+1]=B[a]/A[a][b]*B[a];
	    
	     B[a]=C[a][b]+50-D[a][b][a];
	     A[a][b]=C[a-4][b-2]-27+B[a];
	  }

    return 0;
}