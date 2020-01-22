#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(680, 710, 810, "zeros");
	double ***A = create_three_dim_double(490, 10, 160, "zeros");
	double ***D = create_three_dim_double(470, 870, 260, "zeros");
	double *C = create_one_dim_double(260, "zeros");

	for (int c = 5; c < 258; c++)
	  for (int b = 5; b < 867; b++)
	    for (int a = 5; a < 470; a++)
	    {
	      
	      D[a][b][c]=D[a][b+3][c+2]/0.694;
	      
	      A[a][b][c]=D[a][b][c]+C[a]*B[a][b][c]-A[a][b][c];
	      C[a]=D[a-5][b-5][c-5]-C[a]+A[a][b][c]/B[a][b][c];
	    }

    return 0;
}