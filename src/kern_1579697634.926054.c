#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(350, 350, 900, "random");
	double **B = create_two_dim_double(400, 970, "random");
	double ***A = create_three_dim_double(290, 130, 260, "random");
	double ***D = create_three_dim_double(530, 550, 520, "random");

	for (int b = 5; b < 126; b++)
	  for (int a = 5; a < 285; a++)
	  {
	    
	     B[a][b]=B[a-4][b-5]/A[a][b][a]*D[a][b][a];
	    
	     A[a][b][a]=A[a+5][b+4][a]/0.011;
	    
	     D[a][b][a]=D[a+4][b+1][a+1]/0.764;
	    
	     C[a][b][a]=C[a][b+4][a+3]*0.618;
	    
	     D[a][b][a]=D[a+5][b+4][a+4]/0.132;
	  }

    return 0;
}