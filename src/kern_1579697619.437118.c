#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(40, "ones");
	int *C = create_one_dim_int(200, "ones");
	int **D = create_two_dim_int(210, 660, "ones");
	int **B = create_two_dim_int(840, 600, "ones");

	for (int c = 3; c < 658; c++)
	  for (int b = 4; b < 40; b++)
	    for (int a = 4; a < 40; a++)
	    {
	      
	      D[a][b]=D[a-3][b]*A[a]/B[a][b];
	      
	      D[a][b]=D[a-4][b-3]-23;
	      
	      int var_a=A[a]/39;
	      A[a]=23;
	      
	      D[a][b]=D[a+3][b+2]+1;
	      
	      int var_b=D[a][b]-16;
	      int var_c=D[a-3][b-1]*17;
	    }

    return 0;
}