#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(390, "ones");
	float ***B = create_three_dim_float(850, 590, 90, "ones");
	float ***C = create_three_dim_float(100, 50, 1000, "ones");

	for (int c = 3; c < 90; c++)
	  for (int b = 5; b < 50; b++)
	    for (int a = 5; a < 100; a++)
	    {
	      
	      B[a][b][c]=B[a][b-2][c-3]*0.776;
	      
	      C[a][b][c]=C[a-5][b-5][c-2]*A[a]/B[a][b][c];
	      
	      B[a][b][c]=B[a+4][b+4][c]/0.693;
	      
	      C[a][b][c]=0.99;
	    }

    return 0;
}