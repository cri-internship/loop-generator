#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(960, 280, 460, "ones");
	double *C = create_one_dim_double(350, "ones");
	double ***B = create_three_dim_double(530, 530, 370, "ones");

	for (int c = 1; c < 457; c++)
	  for (int b = 1; b < 276; b++)
	    for (int a = 3; a < 955; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-1][c-1]+0.937;
	      
	      A[a][b][c]=A[a+5][b+4][c+3]/B[a][b][c]-0.093;
	    }

    return 0;
}