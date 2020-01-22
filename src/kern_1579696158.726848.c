#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(350, 170, 320, "ones");
	int *E = create_one_dim_int(950, "ones");
	int *D = create_one_dim_int(20, "ones");
	int ***C = create_three_dim_int(720, 750, 970, "ones");
	int ***A = create_three_dim_int(450, 970, 640, "ones");

	for (int b = 5; b < 170; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-5][a-5]*A[a][b][a]+C[a][b][a];
	    
	     E[a]=E[a-2]-D[a];
	    
	     A[a][b][a]=A[a+1][b+5][a+2]-41;
	    
	     int var_a=E[a]/24;
	     int var_b=E[a+5]/11;
	  }

    return 0;
}