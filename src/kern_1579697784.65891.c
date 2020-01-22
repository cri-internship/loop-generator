#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(140, 680, "random");
	int *D = create_one_dim_int(890, "random");
	int *B = create_one_dim_int(900, "random");
	int *C = create_one_dim_int(110, "random");

	for (int b = 2; b < 680; b++)
	  for (int a = 4; a < 106; a++)
	  {
	    
	     B[a]=D[a]/B[a]-C[a];
	     D[a]=A[a][b]-B[a]+C[a];
	    
	     int var_a=C[a]*3;
	     C[a]=24;
	    
	     C[a]=D[a]*A[a][b]/D[a];
	    
	     C[a]=A[a][b]*C[a]+B[a];
	     D[a]=A[a][b-2]/B[a]-C[a];
	    
	     int var_b=C[a]*10;
	     int var_c=C[a+4]+13;
	    
	     A[a][b]=B[a]+C[a]/A[a][b]-D[a];
	     D[a]=B[a+2]/A[a][b]-D[a]+C[a];
	  }

    return 0;
}