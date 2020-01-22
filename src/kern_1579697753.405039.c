#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(940, 80, "ones");
	float ***B = create_three_dim_float(510, 640, 400, "ones");
	float ***C = create_three_dim_float(320, 230, 760, "ones");

	for (int c = 3; c < 400; c++)
	  for (int b = 5; b < 80; b++)
	    for (int a = 2; a < 315; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-5][c-3]*0.009;
	      
	      C[a][b][c]=C[a][b-2][c-3]/B[a][b][c];
	      
	      C[a][b][c]=C[a-2][b-3][c-2]+0.926;
	      
	      C[a][b][c]=A[a][b]*C[a][b][c]/B[a][b][c];
	      B[a][b][c]=A[a-1][b-4]/C[a][b][c]+0.068;
	    }

    return 0;
}