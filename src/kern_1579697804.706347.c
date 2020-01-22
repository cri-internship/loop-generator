#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(550, 410, 780, "zeros");
	double ***A = create_three_dim_double(710, 690, 530, "zeros");

	for (int c = 5; c < 527; c++)
	  for (int b = 4; b < 406; b++)
	    for (int a = 3; a < 549; a++)
	    {
	      
	      A[a][b][c]=A[a][b-4][c-5]/B[a][b][c];
	      
	      A[a][b][c]=A[a-3][b-3][c-1]*B[a][b][c];
	      
	      B[a][b][c]=B[a+1][b+4][c+4]-A[a][b][c];
	    }

    return 0;
}