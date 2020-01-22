#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(930, 320, 70, "ones");
	int *D = create_one_dim_int(100, "ones");
	int ***A = create_three_dim_int(180, 710, 920, "ones");
	int ***E = create_three_dim_int(210, 860, 350, "ones");
	int *B = create_one_dim_int(510, "ones");

	for (int b = 5; b < 318; b++)
	  for (int a = 5; a < 100; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-5][a-1]/9;
	    
	     C[a][b][a]=C[a+1][b+2][a+1]/E[a][b][a]*B[a]+1-D[a];
	    
	     int var_a=D[a]/0;
	    
	     int var_c=B[a]/38;
	     int var_d=B[a+2]*4;
	    
	     A[a][b][a]=D[a]*C[a][b][a]/C[a][b][a]+A[a][b][a]-B[a];
	     E[a][b][a]=D[a-3]+E[a][b][a];
	    
	     B[a]=B[a]*A[a][b][a];
	     D[a]=B[a-5]-C[a][b][a]*47+D[a]/A[a][b][a];
	  }

    return 0;
}