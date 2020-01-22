#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(710, "random");
	double ***A = create_three_dim_double(170, 190, 160, "random");
	double ***C = create_three_dim_double(80, 110, 490, "random");

	for (int c = 5; c < 490; c++)
	  for (int b = 4; b < 110; b++)
	    for (int a = 3; a < 80; a++)
	    {
	      
	      B[a]=B[a-2]*A[a][b][c];
	      
	      C[a][b][c]=C[a-3][b-4][c-1]-B[a]*B[a];
	      
	      C[a][b][c]=C[a][b-4][c]-A[a][b][c]*B[a];
	      
	      B[a]=B[a+1]*C[a][b][c];
	      
	      A[a][b][c]=B[a]+0.566;
	      B[a]=B[a]-A[a][b][c]+C[a][b][c];
	    }

    return 0;
}