#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(480, 790, "ones");
	int *B = create_one_dim_int(290, "ones");
	int ***A = create_three_dim_int(460, 290, 850, "ones");
	int *C = create_one_dim_int(510, "ones");
	int ***E = create_three_dim_int(420, 930, 970, "ones");

	for (int b = 2; b < 290; b++)
	  for (int a = 2; a < 460; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-2][a-2]+6;
	    
	     int var_a=C[a]-4;
	     C[a]=8;
	  }

    return 0;
}