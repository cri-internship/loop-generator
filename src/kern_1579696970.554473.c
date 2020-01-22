#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(550, "random");
	int *C = create_one_dim_int(280, "random");
	int ***E = create_three_dim_int(880, 290, 820, "random");
	int **B = create_two_dim_int(510, 90, "random");
	int *A = create_one_dim_int(440, "random");

	for (int b = 4; b < 90; b++)
	  for (int a = 5; a < 275; a++)
	  {
	    
	     C[a]=C[a+5]*D[a]/E[a][b][a]-B[a][b]+A[a];
	    
	     D[a]=D[a+4]+16;
	    
	     int var_a=D[a]+0;
	     int var_b=D[a-5]+37;
	    
	     A[a]=B[a][b]+C[a]/3;
	     D[a]=B[a-5][b]+22/C[a]-E[a][b][a];
	    
	     int var_c=E[a][b][a]/0;
	     int var_d=E[a-4][b-4][a-5]/34;
	    
	     int var_e=E[a][b][a]+48;
	     int var_f=E[a+3][b+5][a]*33;
	  }

    return 0;
}