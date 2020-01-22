#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(780, 910, "ones");
	int **C = create_two_dim_int(560, 410, "ones");
	int **A = create_two_dim_int(540, 510, "ones");

	for (int c = 4; c < 410; c++)
	  for (int b = 3; b < 535; b++)
	    for (int a = 3; a < 535; a++)
	    {
	      
	      B[a][b]=B[a-3][b-2]*37;
	      
	      C[a][b]=C[a-1][b-4]+A[a][b]/B[a][b];
	      
	      C[a][b]=B[a][b]+C[a][b];
	      
	      B[a][b]=B[a-3][b-1]/3;
	      
	      int var_a=A[a][b]-17;
	      int var_b=A[a+5][b]/30;
	      
	      int var_c=A[a][b]/30;
	      int var_d=A[a][b-2]/9;
	    }

    return 0;
}