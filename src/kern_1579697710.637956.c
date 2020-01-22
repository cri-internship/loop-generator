#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(760, 720, 20, "random");
	int *D = create_one_dim_int(800, "random");
	int ***C = create_three_dim_int(710, 450, 890, "random");
	int **A = create_two_dim_int(310, 660, "random");

	for (int b = 1; b < 659; b++)
	  for (int a = 2; a < 307; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b+3][a+5]*C[a][b][a]+A[a][b];
	    
	     D[a]=32;
	     D[a+5]=33;
	    
	     int var_a=B[a][b][a]/22;
	     int var_b=B[a-2][b-1][a-2]-14;
	    
	     int var_c=A[a][b]-40;
	     int var_d=A[a+3][b+1]/35;
	  }

    return 0;
}