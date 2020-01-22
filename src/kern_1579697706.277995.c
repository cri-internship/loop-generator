#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(910, "zeros");
	int ***B = create_three_dim_int(970, 590, 760, "zeros");

	for (int c = 0; c < 760; c++)
	  for (int b = 0; b < 587; b++)
	    for (int a = 5; a < 908; a++)
	    {
	      
	      A[a]=A[a-5]-B[a][b][c];
	      
	      A[a]=45;
	      
	      A[a]=B[a][b][c]-A[a];
	      B[a][b][c]=B[a+1][b+3][c]-11;
	    }

    return 0;
}