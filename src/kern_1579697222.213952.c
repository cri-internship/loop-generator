#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(180, 100, 350, "ones");
	double ***B = create_three_dim_double(930, 710, 690, "ones");
	double ***C = create_three_dim_double(90, 60, 150, "ones");

	for (int d = 4; d < 145; d++)
	  for (int c = 2; c < 59; c++)
	    for (int b = 4; b < 88; b++)
	      for (int a = 4; a < 88; a++)
	      {
	        
	       B[a][b][c]=B[a][b-2][c-4]/0.398;
	        
	       A[a][b][c]=A[a][b+4][c+1]/0.361;
	        
	       B[a][b][c]=A[a][b][c]*0.051;
	        
	       C[a][b][c]=B[a][b][c]+A[a][b][c];
	       C[a+2][b+1][c+5]=B[a][b][c];
	        
	       C[a][b][c]=0.88;
	      }

    return 0;
}