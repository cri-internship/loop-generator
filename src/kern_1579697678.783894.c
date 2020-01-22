#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(610, 240, 700, "random");
	float ***A = create_three_dim_float(50, 540, 530, "random");
	float ***B = create_three_dim_float(580, 990, 260, "random");
	float ***C = create_three_dim_float(720, 530, 320, "random");

	for (int c = 0; c < 526; c++)
	  for (int b = 5; b < 539; b++)
	    for (int a = 1; a < 46; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-5][c]/C[a][b][c]-B[a][b][c];
	      
	      A[a][b][c]=A[a+4][b+1][c+4]*0.665;
	    }

    return 0;
}