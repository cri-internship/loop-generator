#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(840, "zeros");
	int *A = create_one_dim_int(790, "zeros");
	int ***B = create_three_dim_int(430, 880, 550, "zeros");
	int ***E = create_three_dim_int(220, 960, 520, "zeros");
	int **D = create_two_dim_int(200, 660, "zeros");

	for (int b = 1; b < 785; b++)
	  for (int a = 1; a < 785; a++)
	  {
	    
	     A[a]=A[a+5]+12;
	    
	     E[a][b][a]=A[a]/D[a][b]-C[a]+B[a][b][a]*E[a][b][a];
	     B[a][b][a]=A[a-1]+E[a][b][a];
	  }

    return 0;
}