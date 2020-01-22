#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(680, 180, "zeros");
	float **B = create_two_dim_float(280, 980, "zeros");
	float ***A = create_three_dim_float(250, 970, 10, "zeros");
	float *D = create_one_dim_float(510, "zeros");
	float **C = create_two_dim_float(370, 190, "zeros");

	for (int c = 0; c < 10; c++)
	  for (int b = 0; b < 965; b++)
	    for (int a = 0; a < 247; a++)
	    {
	      
	      A[a][b][c]=A[a+3][b+5][c]/B[a][b]-0.867*D[a]+C[a][b];
	    }

    return 0;
}