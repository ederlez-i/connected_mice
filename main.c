#include <stdlib.h>
#include <stdio.h>


int main (){
	
	printf("hello world\n");


    int mice[] = {1,1,2,3,4,4,5,6,2,4,7,1,7,8,8,9,4,5 };
    int mice2[] ={ 1, 1, 1, 1, 1, 1,1, 1, 1, 1, 1, 1, 1, 1, 1, 1,1,1 };
    int ml = sizeof(mice2)/sizeof(mice[0]);
    int ml3 = 0;
    ml3 = *(&mice +1) - mice;

    mice2[0] = 1;
    for (int k = 0; k < ml  - 1;k++){
        if (mice2[k] == 1) { 
            for (int m = k + 1; m < ml ; m++){
                    if (mice[k] == mice[m] && mice2[m] == 1)                       
                        mice2[m] = 0;          
                }
        }
    }

    for(int k =0;k<ml;k++){
    	printf("%d,", mice2[k]);
    }
    printf("\n");
    printf("%d\n",ml3);
    printf("adress:%p\n",mice +1);
    printf("adress &:%p\n",&mice+1);
	printf("\n");
    
	return 0;
	
}
