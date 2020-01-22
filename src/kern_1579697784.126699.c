#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(520, 810, "zeros");
	float ***B = create_three_dim_float(570, 790, 180, "zeros");

	for (int c = 0; c < 177; c++)
	  for (int b = 0; b < 786; b++)
	    for (int a = 0; a < 516; a++)
	    {
	      
	      B[a][b][c]=B[a+5][b+4][c+3]*0.95;
	      
	      A[a][b]=B[a][b][c];
	      A[a][b+5]=B[a][b][c];
	      
	      A[a][b]=A[a][b]+B[a][b][c];
	      B[a][b][c]=A[a+4][b+5]*0.442;
	    }

    return 0;
}