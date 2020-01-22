#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(810, 860, 620, "random");
	double ***C = create_three_dim_double(60, 280, 10, "random");
	double ***B = create_three_dim_double(90, 520, 120, "random");

	for (int b = 1; b < 277; b++)
	  for (int a = 4; a < 55; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+2][a+2]-B[a][b][a]+C[a][b][a];
	    
	     C[a][b][a]=C[a+5][b+1][a+2]*0.914;
	    
	     C[a][b][a]=C[a+2][b+3][a]/0.865;
	    
	     B[a][b][a]=B[a+3][b+4][a+2]/0.64;
	    
	     B[a][b][a]=B[a+4][b+2][a+3]+0.67;
	    
	     A[a][b][a]=C[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]*0.8;
	     B[a][b][a]=A[a-4][b-1][a]*C[a][b][a];
	  }

    return 0;
}