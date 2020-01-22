#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(700, "random");
	double ***C = create_three_dim_double(790, 800, 580, "random");
	double ***A = create_three_dim_double(320, 980, 890, "random");
	double *B = create_one_dim_double(360, "random");

	for (int c = 2; c < 577; c++)
	  for (int b = 3; b < 799; b++)
	    for (int a = 4; a < 320; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-3][c-2]/0.341;
	      
	      A[a][b][c]=A[a][b][c+5]*1.0;
	      
	      C[a][b][c]=C[a+1][b+1][c+3]-A[a][b][c]*B[a];
	      
	      B[a]=B[a]*C[a][b][c]-D[a];
	      B[a]=A[a][b][c];
	      
	      A[a][b][c]=A[a][b+4][c+4]+0.513;
	      
	      D[a]=0.406;
	      D[a+2]=0.122;
	    }

    return 0;
}