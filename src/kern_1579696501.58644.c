#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(940, 60, "random");
	int ***D = create_three_dim_int(820, 50, 250, "random");
	int *A = create_one_dim_int(360, "random");
	int *E = create_one_dim_int(770, "random");
	int *B = create_one_dim_int(100, "random");

	for (int b = 2; b < 50; b++)
	  for (int a = 5; a < 360; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b-2][a-4]-30;
	    
	     A[a]=E[a]-0;
	     E[a]=D[a][b][a];
	    
	     A[a]=E[a]-C[a][b]/D[a][b][a]+E[a];
	    
	     int var_a=C[a][b]-45;
	     int var_b=C[a+5][b+2]-29;
	  }

    return 0;
}