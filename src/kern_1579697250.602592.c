#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(90, 330, 680, "ones");
	double **B = create_two_dim_double(530, 990, "ones");

	for (int c = 4; c < 676; c++)
	  for (int b = 4; b < 327; b++)
	    for (int a = 5; a < 90; a++)
	    {
	      
	      B[a][b]=B[a-5][b-2]/0.556;
	      
	      B[a][b]=A[a][b][c];
	      
	      A[a][b][c]=B[a][b];
	      A[a][b+3][c+4]=B[a][b];
	      
	      A[a][b][c]=A[a][b][c]+0.493;
	      B[a][b]=A[a-4][b-2][c-4]/B[a][b];
	      
	      B[a][b]=B[a][b]*A[a][b][c];
	      B[a][b]=B[a+5][b+1]*A[a][b][c];
	    }

    return 0;
}