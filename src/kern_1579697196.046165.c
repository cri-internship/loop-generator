#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(680, 480, "zeros");
	int **C = create_two_dim_int(750, 70, "zeros");
	int *D = create_one_dim_int(240, "zeros");
	int **B = create_two_dim_int(70, 740, "zeros");
	int **A = create_two_dim_int(630, 140, "zeros");

	for (int c = 4; c < 480; c++)
	  for (int b = 5; b < 240; b++)
	    for (int a = 5; a < 240; a++)
	    {
	      
	      E[a][b]=41;
	      E[a-5][b-4]=46;
	      
	      D[a]=19;
	      D[a-5]=34;
	      
	      int var_a=D[a]+35;
	      int var_b=D[a-1]+22;
	      
	      A[a][b]=D[a]/E[a][b]*B[a][b]+A[a][b];
	    }

    return 0;
}