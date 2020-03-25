#include <stdio.h>
#include <stdlib.h>


int swap(int *array, int firstIndex, int secondIndex )
    {
        //This Function simply swaps the values stored in the first and second index
        int temp = array[firstIndex];
        printf("Temp = %d\n", temp);

        array[firstIndex] = array[secondIndex];
        array[secondIndex] = temp;


        printf("Test swap %d\n",array[firstIndex]);
        printf("Test swap %d\n",array[secondIndex]);



        return 1;


    }

int indexOfMinimum(int *array, int startIndex, int lengthOfArray)
{
        //This function seeks to find the smallest values index number from a given array and start point
        int minValue = array[startIndex];
        int minIndex = startIndex;
        int arrayLength = lengthOfArray;

        for(int i = (minIndex + 1); i < arrayLength; i++)
            {
                if(array[i] < minValue)
                    {
                        minValue = array[i];
                        minIndex = i;
                    }
                // After 1 loop of the array the smallest value will be found.
            }

        printf("smallest value = %d\n", minValue);

        return minIndex;
    }

int selectionSort(int *array, int lengthOfArray)
{
    int minIndexHolder = 0;

    for(int i = 0; i < lengthOfArray - 1; i++)
        {

            minIndexHolder = indexOfMinimum(array, i, lengthOfArray);

            swap(array,i,minIndexHolder);

            for(int n = 0; n < lengthOfArray; n++)
                {
                    printf("[%d]", array[n]);

                }





        }

    return 0;

}


int main()
{
    printf("Hello world!\n");

    int test[] = {22, 11, 99, 88, 9, 7, 42};
    int testLength = sizeof(test)/sizeof(test[0]);

    printf("Length of array = %d\n", testLength);



    //indexOfMinimum(test,0,5);
    selectionSort(test,testLength);





    return 0;
}
