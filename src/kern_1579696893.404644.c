#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(580, 500, 510, "ones");
	int **D = create_two_dim_int(860, 770, "ones");
	int *A = create_one_dim_int(660, "ones");
	int *B = create_one_dim_int(490, "ones");

	for (int b = 2; b < 500; b++)
	  for (int a = 5; a < 485; a++)
	  {
	    
	     D[a][b]=D[a-4][b-1]*8;
	    
	     A[a]=30;
	     float  var_a=A[a]*30;
	    
	     B[a]=50;
	     B[a+5]=18;
	    
	     D[a][b]=C[a][b][a]-B[a]/A[a];
	     B[a]=C[a][b][a-5]-D[a][b]/D[a][b];
	    
	     int var_b=D[a][b]*35;
	     int var_c=D[a-3][b-2]+16;
	    
	     int var_d=B[a]*5;
	     int var_e=B[a-3]/3;
	  }

    return 0;
}