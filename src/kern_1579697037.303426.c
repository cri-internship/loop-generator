#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(850, "ones");
	float ***B = create_three_dim_float(150, 110, 40, "ones");
	float ***A = create_three_dim_float(690, 590, 420, "ones");
	float **D = create_two_dim_float(830, 800, "ones");

	for (int c = 2; c < 37; c++)
	  for (int b = 5; b < 108; b++)
	    for (int a = 2; a < 150; a++)
	    {
	      
	      B[a][b][c]=B[a][b-4][c]+0.175;
	      
	      B[a][b][c]=B[a][b+2][c+3]-0.938;
	      
	      A[a][b][c]=0.323;
	      A[a+4][b+1][c+1]=0.396;
	      
	      B[a][b][c]=A[a][b][c]/B[a][b][c]*0.283;
	      C[a]=A[a-2][b-2][c]*D[a][b]-B[a][b][c]+C[a];
	      
	      A[a][b][c]=B[a][b][c]-A[a][b][c]/D[a][b]*C[a];
	      D[a][b]=B[a-2][b-5][c-2]+C[a];
	    }

    return 0;
}