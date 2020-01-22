#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(340, 60, 670, "zeros");
	int **A = create_two_dim_int(390, 920, "zeros");
	int *B = create_one_dim_int(300, "zeros");

	for (int b = 5; b < 60; b++)
	  for (int a = 4; a < 340; a++)
	  {
	    
	     A[a][b]=A[a][b]*B[a]+C[a][b][a];
	     C[a][b][a]=A[a-4][b-5]-C[a][b][a]*B[a];
	    
	     int var_a=C[a][b][a]+44;
	     int var_b=C[a-1][b-3][a-1]*18;
	  }

    return 0;
}