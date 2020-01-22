#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(190, 70, "random");
	float ***A = create_three_dim_float(720, 750, 510, "random");
	float ***C = create_three_dim_float(350, 290, 70, "random");

	for (int c = 2; c < 505; c++)
	  for (int b = 2; b < 70; b++)
	    for (int a = 5; a < 190; a++)
	    {
	      
	      B[a][b]=B[a-3][b-1]-0.618;
	      
	      A[a][b][c]=A[a+5][b+5][c+5]+0.012;
	      
	      B[a][b]=A[a][b][c]/C[a][b][c];
	      
	      C[a][b][c]=A[a][b][c]+B[a][b];
	      B[a][b]=A[a-5][b-1][c-2]*B[a][b];
	    }

    return 0;
}