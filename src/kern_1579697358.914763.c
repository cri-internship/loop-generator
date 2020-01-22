#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(600, 880, 730, "random");
	int ***B = create_three_dim_int(90, 550, 930, "random");
	int *C = create_one_dim_int(10, "random");
	int ***D = create_three_dim_int(730, 550, 140, "random");
	int **A = create_two_dim_int(790, 340, "random");

	for (int b = 5; b < 340; b++)
	  for (int a = 2; a < 88; a++)
	  {
	    
	     A[a][b]=A[a-2][b-5]/B[a][b][a]-C[a]*D[a][b][a]+E[a][b][a];
	    
	     D[a][b][a]=D[a+5][b+4][a+3]-A[a][b];
	    
	     E[a][b][a]=E[a][b][a]-B[a][b][a];
	     B[a][b][a]=E[a+4][b+5][a+2]*A[a][b]+C[a]-D[a][b][a]/B[a][b][a];
	    
	     int var_a=B[a][b][a]/34;
	     int var_b=B[a][b+2][a+2]*22;
	    
	     C[a]=E[a][b][a]*B[a][b][a]/A[a][b]-D[a][b][a]+C[a];
	     D[a][b][a]=E[a][b+2][a+1]-A[a][b]/D[a][b][a]+B[a][b][a]*10;
	  }

    return 0;
}