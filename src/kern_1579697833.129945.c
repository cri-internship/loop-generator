#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(730, 710, 120, "ones");
	int ***B = create_three_dim_int(630, 20, 320, "ones");
	int *D = create_one_dim_int(680, "ones");
	int *A = create_one_dim_int(940, "ones");

	for (int b = 5; b < 20; b++)
	  for (int a = 3; a < 630; a++)
	  {
	    
	     A[a]=A[a-3]-10;
	    
	     C[a][b][a]=C[a+5][b][a+4]+39;
	    
	     D[a]=D[a+2]/B[a][b][a]-A[a]*C[a][b][a];
	    
	     int var_a=B[a][b][a]+26;
	     int var_b=B[a-1][b-5][a-1]/21;
	    
	     int var_c=D[a]+0;
	     int var_d=D[a-1]+37;
	  }

    return 0;
}