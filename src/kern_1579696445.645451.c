#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(770, 690, "ones");
	int *D = create_one_dim_int(100, "ones");
	int ***C = create_three_dim_int(690, 540, 560, "ones");
	int *B = create_one_dim_int(920, "ones");

	for (int b = 0; b < 536; b++)
	  for (int a = 1; a < 100; a++)
	  {
	    
	     D[a]=D[a-1]-B[a]*A[a][b]+C[a][b][a];
	    
	     A[a][b]=A[a+5][b+3]*12;
	    
	     C[a][b][a]=C[a][b+4][a+3]+D[a];
	    
	     B[a]=B[a+2]*26;
	    
	     A[a][b]=11;
	    
	     int var_a=B[a]*48;
	     int var_b=B[a]/47;
	    
	     D[a]=D[a]*A[a][b];
	  }

    return 0;
}