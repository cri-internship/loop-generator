#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(110, "random");
	int **B = create_two_dim_int(770, 80, "random");
	int ***A = create_three_dim_int(470, 10, 980, "random");
	int *C = create_one_dim_int(550, "random");

	for (int c = 0; c < 975; c++)
	  for (int b = 4; b < 8; b++)
	    for (int a = 3; a < 108; a++)
	    {
	      
	      C[a]=C[a+3]*46;
	      
	      C[a]=D[a];
	      
	      int var_a=C[a]/14;
	      int var_b=C[a-3]/19;
	      
	      int var_c=B[a][b]-31;
	      int var_d=B[a-2][b-4]+18;
	      
	      int var_e=A[a][b][c]+23;
	      int var_f=A[a+3][b+2][c+5]-37;
	      
	      int var_g=D[a]-45;
	      int var_h=D[a+2]-50;
	    }

    return 0;
}