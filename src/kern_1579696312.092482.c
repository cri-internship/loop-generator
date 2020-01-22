#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(220, 1000, "zeros");
	int **C = create_two_dim_int(520, 660, "zeros");
	int **A = create_two_dim_int(190, 350, "zeros");

	for (int c = 3; c < 345; c++)
	  for (int b = 4; b < 185; b++)
	    for (int a = 4; a < 185; a++)
	    {
	      
	      A[a][b]=44;
	      A[a-4][b-3]=22;
	      
	      int var_a=A[a][b]*12;
	      int var_b=A[a+5][b+5]/42;
	      
	      int var_c=B[a][b]*42;
	      int var_d=B[a+2][b+2]/4;
	    }

    return 0;
}