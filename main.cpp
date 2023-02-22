#include <iostream>
using namespace std;

//FUNCTION TO DISPLAY ARRAY
void DisplayArray(int array[],int sizeOfArray)
{
	cout<<"\nThe array is = ";
	for(int i=0; i<sizeOfArray; i++)
		cout<<" "<<array[i];
}
//FUNCTION TO FIND LARGEST AND SECOND LARGEST NUMBER
void LargestNumber(int array[],int sizeOfArray)
{
	int highestNumber = 0;
	int secondHighestNumber = 0;
	for(int i=0; i<sizeOfArray; i++)
	{
		if(highestNumber<array[i])
		{
			highestNumber = array[i];
		}
	}
	for(int i=0; i<sizeOfArray; i++)
	{
		if(array[i]!=highestNumber && secondHighestNumber<array[i])
		{
			secondHighestNumber = array[i];
		}
	}
	//DISPLAY LARGEST NUMBER
	cout<<"\n\nTHE HIGHEST NUMBER IN THE ARRAY IS "<<highestNumber;
	//DISPLAY SECOND LARGEST NUMBER	
	cout<<"\n\nTHE SECOND HIGHEST NUMBER IN THE ARRAY IS "<<secondHighestNumber;
}

//FUNCTION TO FIND SMALLEST AND SECOND SMALLEST NUMBER
void SmallestNumber(int array[],int sizeOfArray)
{
	int smallestNumber = array[0];
	int secondSmallestNumber =array[0];
	for(int i=0; i<sizeOfArray; i++)
	{
		if(smallestNumber>array[i])
		{
			smallestNumber = array[i];
		}
	}
	for(int i=0; i<sizeOfArray; i++)
	{
		if(array[i]!=smallestNumber && secondSmallestNumber>array[i])
		{
			secondSmallestNumber = array[i];
		}
	}
	//DISPLAY SMALLEST NUMBER 
	cout<<"\n\nTHE SMALLEST NUMBER IN THE ARRAY IS "<<smallestNumber;
	//DISPLAY SECOND SMALLEST NUMBER	
	cout<<"\n\nTHE SECOND SMALLEST NUMBER IN THE ARRAY IS "<<secondSmallestNumber;
}

void ReverseArray(int array[],int sizeOfArray)
{
	int reversedArray[sizeOfArray];
	cout<<"\n\nARRAY BEFORE REVERSING";
	DisplayArray(array,sizeOfArray);
	//REVERSING ARRAY
	for(int i=0;i<sizeOfArray;i++)
	{
		reversedArray[sizeOfArray-1-i]=array[i];	
	}
		
	cout<<"\n\nARRAY AFTER REVERSING";
	DisplayArray(reversedArray,sizeOfArray);
}
//FUNCTION TO SORT ARRAY IN ASCENDING ORDER
void SortArrayAscendingOrder(int array[],int sizeOfArray)
{
	int temp;
	for(int i=0;i<sizeOfArray; i++)
	{
		for(int j =i+1;j<sizeOfArray;j++)
		{
			if(array[i]>array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout<<"\n\nSORTED IN ASCENDING ORDER";
	DisplayArray(array,sizeOfArray);
}

//FUNCTION TO SORT ARRAY IN DESCENDING OREDER
void SortArrayDescendingOrder(int array[],int sizeOfArray)
{
	int temp;
	for(int i=0;i<sizeOfArray; i++)
	{
		for(int j =i+1;j<sizeOfArray;j++)
		{
			if(array[i]<array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout<<"\n\nSORTED IN DESCENDING ORDER";
	DisplayArray(array,sizeOfArray);
}
int main() 
{
	srand(time(0));
	//VARIABLES
	int sizeOfArray;
	int choice;
	//USER INPUT TO SET THE LENGTH OF THE ARRAY
	cout <<"Enter the number of items : ";
	cin>>sizeOfArray;
	//CREATING ARRAY WITH THE LENGTH UNPUTED BY THE USER
	int array[sizeOfArray];
	//inputing array element by random numbers
	for(int i=0 ; i<sizeOfArray ; i++)
	{
		//cout << (rand() % (ub - lb + 1)) + lb << " ";
		array[i]=(rand()%(9))+1;
	}
	//DISPLAYING RANDOMLY GENERATED ARRAY
	DisplayArray(array,sizeOfArray);
	//FUNCTION CALL TO FIND LARGEST AND SECOND LARGEST NUMBER IN THE ARRAY
	LargestNumber(array,sizeOfArray);
	//FUNCTION CALL TO FIND SMALLEST AND SECOND SMALLEST NUMBER IN THE ARRAY		
	SmallestNumber(array,sizeOfArray);
	//FUNCTION CALL TO REVERSE THE ARRAY
	ReverseArray(array,sizeOfArray);
	//FUNCTION CALL TO SORT ARRAY IN ASCENDING ORDER
	SortArrayAscendingOrder(array,sizeOfArray);
	//FUNCTION CALL TO SORT ARRAY IN DESCENDING ORDER
	SortArrayDescendingOrder(array,sizeOfArray);
}