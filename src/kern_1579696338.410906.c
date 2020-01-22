#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(320, "zeros");
	int *C = create_one_dim_int(240, "zeros");
	int ***B = create_three_dim_int(840, 970, 810, "zeros");
	int ***A = create_three_dim_int(320, 1000, 170, "zeros");

	for (int c = 5; c < 170; c++)
	  for (int b = 5; b < 1000; b++)
	    for (int a = 0; a < 319; a++)
	    {
	      
	      A[a][b][c]=A[a][b-5][c-5]+C[a];
	      
	      D[a]=D[a+1]/A[a][b][c]+B[a][b][c];
	      
	      B[a][b][c]=A[a][b][c]+D[a]/B[a][b][c];
	      D[a]=A[a][b-5][c-2]*B[a][b][c]/C[a]-D[a];
	    }

    return 0;
}