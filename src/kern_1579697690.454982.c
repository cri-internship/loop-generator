#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(870, 270, "random");
	int *D = create_one_dim_int(400, "random");
	int ***B = create_three_dim_int(100, 950, 970, "random");
	int *A = create_one_dim_int(70, "random");

	for (int b = 4; b < 266; b++)
	  for (int a = 5; a < 100; a++)
	  {
	    
	     C[a][b]=B[a][b][a]+D[a];
	     C[a+4][b+1]=A[a]/A[a]-B[a][b][a];
	    
	     C[a][b]=40;
	    
	     int var_a=D[a]/37;
	     int var_b=D[a+1]/50;
	    
	     int var_c=D[a]+19;
	     int var_d=D[a-5]+22;
	    
	     int var_e=B[a][b][a]/12;
	     int var_f=B[a-1][b-1][a-2]*6;
	  }

    return 0;
}