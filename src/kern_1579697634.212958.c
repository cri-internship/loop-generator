#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(770, 960, "ones");
	int ***A = create_three_dim_int(350, 130, 650, "ones");
	int *D = create_one_dim_int(430, "ones");
	int *C = create_one_dim_int(930, "ones");
	int ***E = create_three_dim_int(910, 220, 680, "ones");

	for (int c = 0; c < 649; c++)
	  for (int b = 4; b < 128; b++)
	    for (int a = 3; a < 345; a++)
	    {
	      
	      B[a][b]=B[a-2][b-4]-45;
	      
	      int var_a=C[a]+34;
	      int var_b=C[a+2]/12;
	      
	      int var_c=A[a][b][c]+50;
	      int var_d=A[a+5][b+2][c+1]*24;
	      
	      int var_e=C[a]/28;
	      int var_f=C[a-3]/11;
	    }

    return 0;
}