#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(440, 680, "zeros");
	int *D = create_one_dim_int(830, "zeros");
	int ***B = create_three_dim_int(840, 790, 330, "zeros");
	int **C = create_two_dim_int(830, 730, "zeros");

	for (int b = 2; b < 680; b++)
	  for (int a = 4; a < 440; a++)
	  {
	    
	     int var_a=C[a][b]+35;
	     C[a][b]=17;
	    
	     D[a]=D[a+4]*B[a][b][a]-C[a][b];
	    
	     A[a][b]=D[a]*C[a][b];
	     A[a-1][b-2]=D[a]*B[a][b][a]-C[a][b];
	    
	     C[a][b]=33;
	  }

    return 0;
}