#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(550, "random");
	int *C = create_one_dim_int(690, "random");
	int ***B = create_three_dim_int(810, 150, 390, "random");

	for (int c = 4; c < 390; c++)
	  for (int b = 1; b < 150; b++)
	    for (int a = 5; a < 549; a++)
	    {
	      
	      A[a]=6;
	      float  var_a=A[a]+14;
	      
	      B[a][b][c]=A[a]-C[a]/44;
	      A[a]=A[a+1]+21;
	      
	      C[a]=B[a][b][c]-A[a];
	      C[a]=B[a-5][b-1][c-4]-36+C[a];
	    }

    return 0;
}