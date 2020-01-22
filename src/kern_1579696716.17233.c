#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(610, "zeros");
	int **C = create_two_dim_int(460, 590, "zeros");
	int *A = create_one_dim_int(800, "zeros");
	int ***B = create_three_dim_int(140, 490, 770, "zeros");

	for (int c = 3; c < 610; c++)
	  for (int b = 3; b < 610; b++)
	    for (int a = 3; a < 610; a++)
	    {
	      
	      D[a]=D[a-3]+A[a]-B[a][b][c];
	      
	      int var_a=A[a]-45;
	      int var_b=A[a-1]+12;
	    }

    return 0;
}