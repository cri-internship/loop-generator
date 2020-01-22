#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(610, 930, 950, "zeros");
	int *D = create_one_dim_int(930, "zeros");
	int ***A = create_three_dim_int(390, 420, 960, "zeros");
	int **B = create_two_dim_int(510, 370, "zeros");

	for (int b = 4; b < 420; b++)
	  for (int a = 4; a < 390; a++)
	  {
	    
	     C[a][b][a]=D[a]/B[a][b];
	     C[a][b-2][a-2]=A[a][b][a]-D[a];
	    
	     A[a][b][a]=17;
	     A[a-3][b-4][a-4]=8;
	  }

    return 0;
}