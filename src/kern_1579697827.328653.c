#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(400, "random");
	int ***D = create_three_dim_int(350, 750, 890, "random");
	int *C = create_one_dim_int(760, "random");
	int *A = create_one_dim_int(180, "random");
	int *E = create_one_dim_int(110, "random");

	for (int b = 0; b < 746; b++)
	  for (int a = 5; a < 180; a++)
	  {
	    
	     A[a]=A[a-4]/E[a]*B[a]+23;
	    
	     B[a]=B[a-5]/A[a]*C[a]-A[a]+E[a];
	    
	     D[a][b][a]=D[a+4][b+4][a+4]-19;
	    
	     D[a][b][a]=D[a+1][b+2][a+3]*A[a]/B[a];
	    
	     C[a]=40;
	     C[a+3]=28;
	    
	     int var_a=B[a]+6;
	     int var_b=B[a-2]/33;
	  }

    return 0;
}