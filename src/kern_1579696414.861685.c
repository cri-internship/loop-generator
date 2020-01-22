#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(240, 120, 670, "zeros");
	int *A = create_one_dim_int(530, "zeros");
	int ***C = create_three_dim_int(870, 390, 680, "zeros");

	for (int b = 4; b < 390; b++)
	  for (int a = 5; a < 529; a++)
	  {
	    
	     A[a]=A[a+1]*C[a][b][a]/B[a][b][a];
	    
	     C[a][b][a]=19-B[a][b][a];
	     C[a-1][b-4][a-5]=B[a][b][a];
	  }

    return 0;
}