#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(80, "random");
	int **B = create_two_dim_int(240, 870, "random");
	int **A = create_two_dim_int(590, 560, "random");
	int *E = create_one_dim_int(180, "random");
	int *C = create_one_dim_int(90, "random");

	for (int b = 1; b < 560; b++)
	  for (int a = 4; a < 240; a++)
	  {
	    
	     int var_a=A[a][b]+2;
	     int var_b=A[a-4][b-1]*25;
	    
	     int var_c=B[a][b]/50;
	     int var_d=B[a-1][b-1]-18;
	    
	     A[a][b]=A[a][b]*D[a]+B[a][b];
	     C[a]=A[a][b-1]/C[a]-27;
	  }

    return 0;
}