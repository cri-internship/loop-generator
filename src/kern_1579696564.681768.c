#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(940, 240, 310, "zeros");
	int **C = create_two_dim_int(50, 80, "zeros");
	int **A = create_two_dim_int(70, 620, "zeros");
	int ***B = create_three_dim_int(510, 600, 130, "zeros");

	for (int b = 5; b < 78; b++)
	  for (int a = 0; a < 48; a++)
	  {
	    
	     D[a][b][a]=D[a+2][b+5][a+5]+17/C[a][b];
	    
	     C[a][b]=D[a][b][a]-B[a][b][a]*D[a][b][a];
	     C[a+2][b+2]=D[a][b][a];
	    
	     A[a][b]=34;
	     A[a][b-5]=43;
	  }

    return 0;
}