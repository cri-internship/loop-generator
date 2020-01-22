#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(660, 660, "ones");
	double ***A = create_three_dim_double(560, 110, 140, "ones");
	double ***B = create_three_dim_double(370, 960, 150, "ones");
	double **C = create_two_dim_double(680, 590, "ones");

	for (int c = 4; c < 136; c++)
	  for (int b = 5; b < 106; b++)
	    for (int a = 5; a < 370; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-5][c-4]/0.011;
	      
	      A[a][b][c]=A[a+1][b+2][c+1]+0.126;
	      
	      B[a][b][c]=C[a][b];
	      B[a][b][c+3]=D[a][b]*A[a][b][c]/0.891;
	      
	      B[a][b][c]=D[a][b]/C[a][b]-A[a][b][c];
	      
	      B[a][b][c]=A[a][b][c]+D[a][b]-B[a][b][c]*C[a][b];
	      D[a][b]=A[a+1][b+4][c+4]/B[a][b][c]*0.741;
	    }

    return 0;
}