#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(760, 780, "ones");
	int ***B = create_three_dim_int(780, 390, 570, "ones");
	int **D = create_two_dim_int(600, 880, "ones");
	int ***E = create_three_dim_int(620, 380, 360, "ones");
	int *A = create_one_dim_int(660, "ones");

	for (int b = 0; b < 377; b++)
	  for (int a = 0; a < 599; a++)
	  {
	    
	     D[a][b]=D[a+1][b+3]+B[a][b][a];
	    
	     int var_a=C[a][b]+47;
	     int var_b=C[a][b+2]+40;
	    
	     int var_c=E[a][b][a]+14;
	     int var_d=E[a+1][b+3][a+5]+7;
	  }

    return 0;
}