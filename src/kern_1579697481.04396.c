#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(800, 740, 360, "ones");
	double **A = create_two_dim_double(520, 960, "ones");

	for (int c = 4; c < 360; c++)
	  for (int b = 2; b < 737; b++)
	    for (int a = 4; a < 520; a++)
	    {
	      
	      A[a][b]=A[a-4][b]+0.435;
	      
	      B[a][b][c]=B[a][b+3][c]+0.318;
	      
	      A[a][b]=B[a][b][c]-A[a][b];
	      B[a][b][c]=B[a][b-1][c-2]+A[a][b];
	      
	      B[a][b][c]=B[a][b][c]+A[a][b];
	      A[a][b]=B[a-2][b-2][c-4]*A[a][b];
	    }

    return 0;
}