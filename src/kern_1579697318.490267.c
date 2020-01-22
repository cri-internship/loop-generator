#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(390, 750, 800, "ones");
	int *B = create_one_dim_int(70, "ones");
	int ***A = create_three_dim_int(650, 590, 650, "ones");

	for (int b = 1; b < 590; b++)
	  for (int a = 5; a < 385; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b][a-3]+49;
	    
	     A[a][b][a]=A[a-4][b-1][a]*39;
	    
	     C[a][b][a]=C[a+5][b+2][a+2]+A[a][b][a]-B[a];
	  }

    return 0;
}