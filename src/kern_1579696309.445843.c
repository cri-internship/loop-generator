#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(450, "zeros");
	double ***B = create_three_dim_double(270, 420, 660, "zeros");
	double **D = create_two_dim_double(580, 900, "zeros");
	double ***A = create_three_dim_double(110, 520, 610, "zeros");

	for (int d = 5; d < 607; d++)
	  for (int c = 4; c < 420; c++)
	    for (int b = 3; b < 108; b++)
	      for (int a = 3; a < 108; a++)
	      {
	        
	       C[a]=C[a-3]/D[a][b];
	        
	       B[a][b][c]=B[a][b-1][c]/0.301;
	        
	       D[a][b]=D[a-3][b-4]+C[a]-A[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+2][c+3]*B[a][b][c]+C[a];
	        
	       A[a][b][c]=C[a]-A[a][b][c];
	       C[a]=0.568;
	        
	       C[a]=B[a][b][c]+0.091;
	       B[a][b][c]=B[a][b-3][c-5]+D[a][b]*A[a][b][c];
	      }

    return 0;
}