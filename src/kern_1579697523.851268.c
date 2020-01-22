#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(410, 500, 990, "random");
	double **D = create_two_dim_double(860, 690, "random");
	double **B = create_two_dim_double(310, 560, "random");
	double ***C = create_three_dim_double(410, 700, 180, "random");

	for (int b = 5; b < 498; b++)
	  for (int a = 5; a < 406; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-5][a-4]+0.408;
	    
	     A[a][b][a]=A[a][b-5][a]/0.09;
	    
	     D[a][b]=A[a][b][a]/C[a][b][a]+0.995;
	     D[a+2][b+3]=A[a][b][a]*C[a][b][a]-0.03;
	    
	     C[a][b][a]=D[a][b]/D[a][b]+0.514;
	    
	     A[a][b][a]=A[a][b][a]+C[a][b][a];
	     B[a][b]=A[a+4][b+2][a+4]/B[a][b];
	    
	     double var_a=D[a][b]+0.581;
	     double var_b=D[a][b+5]/0.379;
	  }

    return 0;
}