#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(1000, 980, 810, "ones");
	float ***B = create_three_dim_float(20, 770, 250, "ones");
	float ***A = create_three_dim_float(910, 530, 200, "ones");

	for (int c = 4; c < 250; c++)
	  for (int b = 0; b < 770; b++)
	    for (int a = 1; a < 20; a++)
	    {
	      
	      A[a][b][c]=B[a][b][c]/A[a][b][c]-C[a][b][c];
	      B[a][b][c]=B[a-1][b][c-4]-A[a][b][c]*C[a][b][c];
	    }

    return 0;
}