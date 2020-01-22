#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(1000, "ones");
	int *B = create_one_dim_int(850, "ones");
	int *D = create_one_dim_int(720, "ones");
	int **C = create_two_dim_int(340, 790, "ones");

	for (int c = 0; c < 790; c++)
	  for (int b = 0; b < 340; b++)
	    for (int a = 0; a < 340; a++)
	    {
	      
	      B[a]=C[a][b]+D[a];
	      B[a+2]=A[a];
	      
	      C[a][b]=C[a][b]*B[a]+D[a]/A[a];
	    }

    return 0;
}