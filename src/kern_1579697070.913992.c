#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(780, 920, 180, "ones");
	double ***A = create_three_dim_double(620, 530, 380, "ones");

	for (int c = 3; c < 180; c++)
	  for (int b = 4; b < 528; b++)
	    for (int a = 5; a < 618; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-4][c-3]-B[a][b][c];
	      
	      B[a][b][c]=B[a+4][b+5][c]/A[a][b][c];
	      
	      A[a][b][c]=A[a+2][b+2][c+5]+B[a][b][c];
	      
	      B[a][b][c]=0.502;
	      
	      double var_a=A[a][b][c]/0.247;
	      double var_b=A[a-5][b-1][c-2]/0.336;
	    }

    return 0;
}