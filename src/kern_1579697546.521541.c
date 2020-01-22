#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(410, "zeros");
	int *A = create_one_dim_int(480, "zeros");
	int ***D = create_three_dim_int(320, 820, 160, "zeros");
	int **B = create_two_dim_int(880, 640, "zeros");
	int *E = create_one_dim_int(890, "zeros");

	for (int b = 0; b < 815; b++)
	  for (int a = 0; a < 319; a++)
	  {
	    
	     E[a]=E[a+1]+7;
	    
	     B[a][b]=D[a][b][a]-C[a];
	     A[a]=D[a+1][b+5][a]*B[a][b];
	  }

    return 0;
}