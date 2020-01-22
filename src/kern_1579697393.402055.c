#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(730, 940, 250, "random");
	int *B = create_one_dim_int(710, "random");
	int ***C = create_three_dim_int(750, 730, 590, "random");
	int ***D = create_three_dim_int(420, 10, 710, "random");
	int **A = create_two_dim_int(50, 460, "random");

	for (int b = 5; b < 10; b++)
	  for (int a = 5; a < 48; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b][a-1]-24;
	    
	     A[a][b]=A[a-1][b-2]-E[a][b][a];
	    
	     A[a][b]=A[a+2][b+5]/45;
	    
	     int var_a=E[a][b][a]+21;
	     int var_b=E[a-3][b-5][a-2]+13;
	    
	     B[a]=D[a][b][a]/A[a][b];
	     C[a][b][a]=D[a+4][b][a+2]/E[a][b][a];
	  }

    return 0;
}