#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(130, 520, 480, "random");
	double ***E = create_three_dim_double(980, 310, 360, "random");
	double *D = create_one_dim_double(1000, "random");
	double ***C = create_three_dim_double(900, 410, 120, "random");
	double *B = create_one_dim_double(140, "random");

	for (int b = 0; b < 516; b++)
	  for (int a = 4; a < 125; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b][a]*0.894;
	    
	     B[a]=B[a-4]*0.368;
	    
	     B[a]=B[a+4]-0.549;
	    
	     B[a]=B[a+2]/0.195;
	    
	     D[a]=0.316;
	     D[a+2]=0.993;
	    
	     D[a]=A[a][b][a]/B[a]*C[a][b][a]+E[a][b][a];
	     B[a]=A[a][b+4][a+5]+E[a][b][a]/D[a]*C[a][b][a];
	  }

    return 0;
}