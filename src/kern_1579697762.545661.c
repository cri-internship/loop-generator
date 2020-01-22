#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(420, 410, 30, "zeros");
	int *D = create_one_dim_int(380, "zeros");
	int **A = create_two_dim_int(550, 760, "zeros");
	int **B = create_two_dim_int(310, 950, "zeros");

	for (int b = 5; b < 408; b++)
	  for (int a = 5; a < 380; a++)
	  {
	    
	     A[a][b]=A[a-4][b-4]*B[a][b]-D[a]+C[a][b][a];
	    
	     A[a][b]=A[a-3][b-5]-8;
	    
	     D[a]=D[a-5]/A[a][b]+B[a][b]-A[a][b];
	    
	     C[a][b][a]=C[a+5][b+2][a+4]+12;
	  }

    return 0;
}