#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(1000, 610, 950, "zeros");
	double ***C = create_three_dim_double(130, 300, 20, "zeros");
	double ***A = create_three_dim_double(330, 920, 530, "zeros");

	for (int c = 0; c < 15; c++)
	  for (int b = 0; b < 300; b++)
	    for (int a = 0; a < 129; a++)
	    {
	      
	      A[a][b][c]=C[a][b][c];
	      A[a+1][b+4][c+2]=B[a][b][c]-B[a][b][c];
	      
	      double var_a=C[a][b][c]+0.956;
	      double var_b=C[a+1][b][c+5]/0.246;
	    }

    return 0;
}