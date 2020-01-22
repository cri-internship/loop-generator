#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(1000, "zeros");
	int ***B = create_three_dim_int(150, 590, 790, "zeros");
	int *D = create_one_dim_int(160, "zeros");
	int *C = create_one_dim_int(300, "zeros");

	for (int c = 2; c < 157; c++)
	  for (int b = 2; b < 157; b++)
	    for (int a = 2; a < 157; a++)
	    {
	      
	      D[a]=D[a+1]*29;
	      
	      D[a]=D[a+3]-30;
	      
	      A[a]=B[a][b][c];
	      A[a-2]=D[a]-C[a]*B[a][b][c];
	    }

    return 0;
}