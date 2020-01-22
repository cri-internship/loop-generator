#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(690, 380, 620, "ones");
	double ***B = create_three_dim_double(530, 420, 530, "ones");

	for (int c = 4; c < 527; c++)
	  for (int b = 4; b < 380; b++)
	    for (int a = 5; a < 526; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-4][c-3]/A[a][b][c];
	      
	      A[a][b][c]=A[a-5][b-2][c-4]/0.318;
	      
	      B[a][b][c]=B[a+4][b+3][c+3]*0.381;
	      
	      A[a][b][c]=0.554;
	      
	      A[a][b][c]=B[a][b][c]/A[a][b][c];
	      B[a][b][c]=B[a-2][b-4][c]*0.149;
	    }

    return 0;
}