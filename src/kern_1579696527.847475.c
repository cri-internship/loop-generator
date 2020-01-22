#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(950, 330, "zeros");
	int **C = create_two_dim_int(160, 210, "zeros");
	int *B = create_one_dim_int(150, "zeros");
	int ***E = create_three_dim_int(990, 130, 400, "zeros");
	int *D = create_one_dim_int(430, "zeros");

	for (int c = 0; c < 330; c++)
	  for (int b = 0; b < 149; b++)
	    for (int a = 0; a < 149; a++)
	    {
	      
	      A[a][b]=35;
	      float  var_a=A[a][b]*43;
	      
	      B[a]=B[a+1]-26;
	    }

    return 0;
}