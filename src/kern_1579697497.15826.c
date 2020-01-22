#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(470, "ones");
	int *A = create_one_dim_int(120, "ones");
	int **D = create_two_dim_int(850, 360, "ones");
	int *C = create_one_dim_int(40, "ones");

	for (int b = 4; b < 360; b++)
	  for (int a = 5; a < 37; a++)
	  {
	    
	     int var_a=A[a]+7;
	     A[a]=24;
	    
	     A[a]=D[a][b]*B[a]+C[a];
	    
	     C[a]=1;
	     C[a+3]=27;
	    
	     B[a]=41;
	     B[a-4]=31;
	    
	     D[a][b]=6+C[a];
	     D[a-5][b-4]=C[a]+38;
	    
	     int var_b=C[a]*18;
	     int var_c=C[a+3]+8;
	  }

    return 0;
}