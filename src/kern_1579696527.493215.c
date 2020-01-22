#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(920, 820, 650, "random");
	float ***B = create_three_dim_float(110, 240, 780, "random");
	float **E = create_two_dim_float(120, 110, "random");
	float **D = create_two_dim_float(10, 50, "random");
	float ***C = create_three_dim_float(10, 430, 220, "random");

	for (int c = 5; c < 647; c++)
	  for (int b = 3; b < 50; b++)
	    for (int a = 5; a < 10; a++)
	    {
	      
	      D[a][b]=D[a-3][b-3]+E[a][b]-B[a][b][c];
	      
	      B[a][b][c]=B[a-5][b-3][c-5]-0.665;
	      
	      E[a][b]=E[a+2][b]+0.285;
	      
	      B[a][b][c]=B[a+2][b+2][c+3]+0.281;
	      
	      A[a][b][c]=0.071;
	      A[a][b+5][c+3]=0.066;
	    }

    return 0;
}