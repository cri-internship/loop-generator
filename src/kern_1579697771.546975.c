#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(760, 140, 270, "zeros");
	int ***A = create_three_dim_int(800, 20, 310, "zeros");
	int ***D = create_three_dim_int(150, 710, 860, "zeros");
	int *C = create_one_dim_int(740, "zeros");
	int **E = create_two_dim_int(770, 150, "zeros");

	for (int b = 3; b < 135; b++)
	  for (int a = 5; a < 147; a++)
	  {
	    
	     D[a][b][a]=D[a+1][b+4][a+3]+E[a][b]-B[a][b][a]/A[a][b][a]*C[a];
	    
	     B[a][b][a]=B[a+2][b+5][a+2]-27;
	    
	     int var_a=B[a][b][a]*2;
	     int var_b=B[a-5][b-3][a-2]+24;
	  }

    return 0;
}