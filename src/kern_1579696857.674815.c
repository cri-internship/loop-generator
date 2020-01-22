#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(830, 520, 730, "ones");
	float **B = create_two_dim_float(170, 690, "ones");
	float *A = create_one_dim_float(310, "ones");
	float ***C = create_three_dim_float(520, 10, 260, "ones");
	float ***D = create_three_dim_float(180, 30, 550, "ones");

	for (int c = 4; c < 550; c++)
	  for (int b = 2; b < 30; b++)
	    for (int a = 5; a < 166; a++)
	    {
	      
	      D[a][b][c]=D[a-5][b-2][c-4]/0.802;
	      
	      B[a][b]=0.085;
	      B[a+4][b+2]=0.616;
	      
	      A[a]=B[a][b]-C[a][b][c]+E[a][b][c]*A[a]/D[a][b][c];
	      E[a][b][c]=B[a-4][b-2]*E[a][b][c];
	    }

    return 0;
}