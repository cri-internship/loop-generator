#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(10, 970, "random");
	double ***D = create_three_dim_double(370, 610, 660, "random");
	double ***B = create_three_dim_double(540, 60, 340, "random");
	double ***C = create_three_dim_double(90, 270, 990, "random");

	for (int c = 0; c < 988; c++)
	  for (int b = 0; b < 267; b++)
	    for (int a = 0; a < 87; a++)
	    {
	      
	      B[a][b][c]=C[a][b][c]-0.953;
	      A[a][b]=C[a+3][b+3][c+2]/D[a][b][c]*B[a][b][c]+0.942;
	    }

    return 0;
}