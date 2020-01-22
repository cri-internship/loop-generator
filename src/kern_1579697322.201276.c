#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(210, 780, 910, "random");
	int ***A = create_three_dim_int(920, 660, 320, "random");
	int *B = create_one_dim_int(810, "random");

	for (int b = 5; b < 656; b++)
	  for (int a = 3; a < 210; a++)
	  {
	    
	     A[a][b][a]=A[a][b+3][a]+12;
	    
	     A[a][b][a]=B[a]-C[a][b][a];
	    
	     int var_a=C[a][b][a]-3;
	     int var_b=C[a-2][b-4][a-3]-14;
	    
	     int var_c=A[a][b][a]/49;
	     int var_d=A[a+4][b+4][a+5]*35;
	    
	     A[a][b][a]=B[a]*A[a][b][a];
	     C[a][b][a]=B[a+3]*C[a][b][a]/24;
	  }

    return 0;
}