#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(880, 610, "random");
	int **A = create_two_dim_int(420, 40, "random");
	int *B = create_one_dim_int(270, "random");
	int *D = create_one_dim_int(490, "random");

	for (int b = 3; b < 40; b++)
	  for (int a = 3; a < 270; a++)
	  {
	    
	     B[a]=B[a-3]/5;
	    
	     int var_a=A[a][b]*27;
	     A[a][b]=23;
	    
	     D[a]=D[a+5]*C[a][b];
	    
	     C[a][b]=A[a][b]-B[a]+D[a];
	     B[a]=A[a-2][b-3]+C[a][b]-D[a];
	  }

    return 0;
}