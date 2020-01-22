#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(870, 480, 810, "random");
	int *D = create_one_dim_int(790, "random");
	int *E = create_one_dim_int(20, "random");
	int ***B = create_three_dim_int(220, 860, 880, "random");
	int *A = create_one_dim_int(210, "random");

	for (int c = 5; c < 20; c++)
	  for (int b = 5; b < 20; b++)
	    for (int a = 5; a < 20; a++)
	    {
	      
	      E[a]=E[a-5]-C[a][b][c]*A[a]+B[a][b][c]/D[a];
	      
	      D[a]=D[a+1]/16;
	      
	      A[a]=A[a+3]*15;
	      
	      A[a]=17;
	      
	      E[a]=11;
	    }

    return 0;
}