#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(880, 130, "zeros");
	int **D = create_two_dim_int(950, 230, "zeros");
	int **A = create_two_dim_int(20, 250, "zeros");
	int **B = create_two_dim_int(360, 140, "zeros");

	for (int c = 5; c < 125; c++)
	  for (int b = 5; b < 20; b++)
	    for (int a = 5; a < 20; a++)
	    {
	      
	      A[a][b]=A[a-5][b-2]-44;
	      
	      C[a][b]=C[a+2][b+5]*4;
	      
	      B[a][b]=D[a][b]*A[a][b];
	      D[a][b]=D[a-2][b-4]-C[a][b];
	      
	      int var_a=D[a][b]*8;
	      int var_b=D[a-4][b-5]-31;
	    }

    return 0;
}