#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(530, 610, "zeros");
	int *C = create_one_dim_int(910, "zeros");
	int *D = create_one_dim_int(890, "zeros");
	int **B = create_two_dim_int(960, 850, "zeros");

	for (int b = 0; b < 845; b++)
	  for (int a = 5; a < 885; a++)
	  {
	    
	     C[a]=C[a-5]*A[a][b]+B[a][b]-D[a];
	    
	     D[a]=D[a+5]/1;
	    
	     B[a][b]=48;
	     B[a+5][b+5]=50;
	    
	     B[a][b]=3;
	    
	     int var_a=B[a][b]*1;
	     int var_b=B[a+4][b+2]*29;
	    
	     int var_c=B[a][b]/44;
	     int var_d=B[a][b+4]-1;
	  }

    return 0;
}