#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(140, 440, 130, "random");
	double ***B = create_three_dim_double(770, 510, 800, "random");
	double *C = create_one_dim_double(260, "random");

	for (int c = 5; c < 127; c++)
	  for (int b = 5; b < 435; b++)
	    for (int a = 5; a < 138; a++)
	    {
	      
	      C[a]=C[a-5]*0.684;
	      
	      A[a][b][c]=A[a-1][b-4][c-1]+0.79;
	      
	      B[a][b][c]=A[a][b][c];
	      B[a][b-5][c]=C[a]-C[a];
	      
	      B[a][b][c]=0.75;
	      
	      C[a]=A[a][b][c]/B[a][b][c];
	      A[a][b][c]=A[a+2][b+5][c+3]+B[a][b][c];
	    }

    return 0;
}