#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(510, 580, "zeros");
	int *D = create_one_dim_int(340, "zeros");
	int *B = create_one_dim_int(990, "zeros");
	int *C = create_one_dim_int(700, "zeros");

	for (int c = 4; c < 579; c++)
	  for (int b = 1; b < 509; b++)
	    for (int a = 1; a < 509; a++)
	    {
	      
	      A[a][b]=A[a-1][b-4]*B[a];
	      
	      B[a]=B[a+2]*A[a][b];
	      
	      A[a][b]=8;
	    }

    return 0;
}