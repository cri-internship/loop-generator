#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(350, "random");
	int **B = create_two_dim_int(40, 550, "random");
	int ***A = create_three_dim_int(530, 480, 240, "random");

	for (int b = 3; b < 480; b++)
	  for (int a = 3; a < 40; a++)
	  {
	    
	     B[a][b]=A[a][b][a];
	     B[a][b+5]=C[a]/C[a];
	    
	     A[a][b][a]=31;
	     A[a-2][b-1][a-3]=18;
	    
	     C[a]=C[a]-B[a][b];
	     B[a][b]=C[a-1]+A[a][b][a]-B[a][b];
	    
	     A[a][b][a]=B[a][b]+42;
	     B[a][b]=B[a-1][b-3]-A[a][b][a]/15;
	    
	     int var_a=B[a][b]-34;
	     int var_b=B[a][b-2]+8;
	    
	     A[a][b][a]=B[a][b]-16;
	     C[a]=B[a-2][b-3]-A[a][b][a];
	    
	     int var_c=A[a][b][a]/35;
	     int var_d=A[a-3][b-3][a]*44;
	  }

    return 0;
}