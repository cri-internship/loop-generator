#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim(50, 50);
	float ***C = create_three_dim(50, 50, 50);
	float *A = create_one_dim(100);

	for (int c = 1; c < 45; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 3; a < 49; a++)
	    {
	      
	      A[a]=A[a]+C[a][b][c];
	      B[a][b]=A[a]/B[a][b]-A[a]+B[a][b]*C[a][b][c]-0.00604/B[a][b];
	      
	      C[c+5]=C[c-1]-A[a]/C[a][b][c]+B[a][b]*C[a][b][c]/A[a]*B[a][b];
	    }

    return 0;
}