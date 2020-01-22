#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(20, 900, 730, "zeros");
	int *E = create_one_dim_int(220, "zeros");
	int *A = create_one_dim_int(230, "zeros");
	int ***B = create_three_dim_int(930, 590, 150, "zeros");
	int ***C = create_three_dim_int(160, 960, 350, "zeros");

	for (int c = 2; c < 148; c++)
	  for (int b = 3; b < 590; b++)
	    for (int a = 1; a < 220; a++)
	    {
	      
	      E[a]=27;
	      float  var_a=E[a]+3;
	      
	      B[a][b][c]=B[a-1][b-3][c-2]/A[a]+38*D[a][b][c];
	      
	      B[a][b][c]=B[a][b][c+2]/33;
	    }

    return 0;
}