#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(580, 40, 310, "zeros");
	float **D = create_two_dim_float(500, 900, "zeros");
	float ***B = create_three_dim_float(980, 370, 690, "zeros");
	float **C = create_two_dim_float(720, 40, "zeros");

	for (int b = 5; b < 38; b++)
	  for (int a = 2; a < 575; a++)
	  {
	    
	     A[a][b][a]=A[a+5][b+2][a]*C[a][b]-D[a][b]+B[a][b][a];
	    
	     B[a][b][a]=B[a][b][a]/0.276;
	     D[a][b]=B[a-2][b-5][a-1]-0.89;
	  }

    return 0;
}