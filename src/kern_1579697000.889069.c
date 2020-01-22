#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(520, 830, 420, "random");
	float ***D = create_three_dim_float(290, 640, 120, "random");
	float ***B = create_three_dim_float(380, 470, 720, "random");
	float ***A = create_three_dim_float(710, 160, 60, "random");

	for (int b = 3; b < 468; b++)
	  for (int a = 5; a < 375; a++)
	  {
	    
	     C[a][b][a]=C[a+1][b+1][a]/A[a][b][a];
	    
	     B[a][b][a]=B[a+2][b+2][a+4]-C[a][b][a];
	    
	     C[a][b][a]=0.845;
	    
	     A[a][b][a]=B[a][b][a]*0.78;
	     B[a][b][a]=B[a+2][b+2][a+5]-D[a][b][a];
	    
	     D[a][b][a]=C[a][b][a]*D[a][b][a];
	  }

    return 0;
}