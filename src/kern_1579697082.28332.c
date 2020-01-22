#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(910, "zeros");
	int ***A = create_three_dim_int(800, 820, 520, "zeros");
	int **C = create_two_dim_int(80, 320, "zeros");

	for (int b = 0; b < 816; b++)
	  for (int a = 1; a < 797; a++)
	  {
	    
	     B[a]=B[a+5]-15;
	    
	     A[a][b][a]=A[a+3][b+4][a+1]+C[a][b];
	    
	     B[a]=13;
	  }

    return 0;
}