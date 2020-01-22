#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(10, 400, 60, "random");
	float ***D = create_three_dim_float(920, 790, 150, "random");
	float **C = create_two_dim_float(280, 780, "random");
	float **B = create_two_dim_float(650, 40, "random");

	for (int c = 4; c < 59; c++)
	  for (int b = 5; b < 398; b++)
	    for (int a = 5; a < 8; a++)
	    {
	      
	      D[a][b][c]=D[a][b-5][c-2]*A[a][b][c]/B[a][b]-C[a][b];
	      
	      A[a][b][c]=A[a-5][b-5][c-4]-0.114;
	      
	      C[a][b]=C[a-5][b-4]+0.339;
	      
	      C[a][b]=C[a-2][b-4]/0.613;
	      
	      A[a][b][c]=0.497;
	      
	      D[a][b][c]=C[a][b];
	    }

    return 0;
}