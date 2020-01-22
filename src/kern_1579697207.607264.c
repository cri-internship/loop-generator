#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(690, 950, "zeros");
	double ***B = create_three_dim_double(250, 430, 810, "zeros");

	for (int c = 4; c < 807; c++)
	  for (int b = 5; b < 425; b++)
	    for (int a = 5; a < 248; a++)
	    {
	      
	      B[a][b][c]=B[a][b-1][c-4]/0.866;
	      
	      A[a][b]=A[a-5][b-5]*0.407;
	      
	      A[a][b]=A[a][b-4]*0.322;
	      
	      B[a][b][c]=B[a+2][b+5][c+3]+A[a][b];
	      
	      A[a][b]=A[a+1][b+1]*0.548;
	      
	      A[a][b]=A[a+5][b+3]*0.491;
	    }

    return 0;
}