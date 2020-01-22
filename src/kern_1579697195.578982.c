#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(190, 290, "zeros");
	int *B = create_one_dim_int(410, "zeros");
	int **A = create_two_dim_int(410, 20, "zeros");
	int *C = create_one_dim_int(880, "zeros");

	for (int c = 0; c < 18; c++)
	  for (int b = 0; b < 406; b++)
	    for (int a = 0; a < 406; a++)
	    {
	      
	      A[a][b]=D[a][b]*48+B[a];
	      A[a+4][b+2]=B[a]-D[a][b];
	    }

    return 0;
}