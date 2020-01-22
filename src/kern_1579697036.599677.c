#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(240, 670, "zeros");
	int **D = create_two_dim_int(910, 340, "zeros");
	int **C = create_two_dim_int(720, 740, "zeros");
	int **B = create_two_dim_int(180, 760, "zeros");

	for (int b = 3; b < 340; b++)
	  for (int a = 4; a < 180; a++)
	  {
	    
	     D[a][b]=D[a-4][b-3]*B[a][b]+A[a][b]-C[a][b];
	    
	     int var_a=C[a][b]*32;
	     int var_b=C[a+5][b+2]*47;
	    
	     C[a][b]=B[a][b]+D[a][b]-D[a][b];
	     D[a][b]=B[a][b]/C[a][b];
	  }

    return 0;
}