#include <stdio.h>

char[512] readFile(char[512] ) {
    // read file here
    // write what the function does here
    
    // this statement says what the func
    return output;
}

int main()
{
double w1;
double w2;
double w3;
double w4;
double w5;
double w6;
double w7;
double w8;
double w9;
double w10;
char ptr;
char input [512];
long double startKey [10];
long double output [1024];
double endKey [10];
long double startkeybuffer[10];
int spacecounter = 0;
int etc = 0;

//read input file
FILE *myFile;
    myFile = fopen("input.txt", "r");
//read file into array
//load contents of input file

    int i;
    for (i = 0; i < 512; i++)
    {
        fscanf(myFile, "%c", &input[i]);
    }
 fclose("input.txt");   

//read StartKey file
FILE *myFile;
    myFile = fopen("startKey.txt", "r");

//load contents of StartKey file
    for (i = 0; i < 512; i++)
    {
        fscanf(myFile, "%d", &startkeybuffer[i]);
        if(startkeybuffer[i] == int('0'))
        {
            ++spacecounter;
            etc = i;
            if (startkeybuffer[i] == 0 && i-1 == etx && spacecounter = 1)
            {
                spacecounter = 0;
            }
            if(spacecounter = 2)
            {
                spacecounter = 0;
                break;
            }
        }
    }
    for (i = 0; i )
fclose("startKey.txt");
//set ptr to first position in loaded input array
ptr = input[0];
/*
Python - input("filename", "mode")
char[] readFile(char[] filename) {
    // read file here
    return output
}
*/
//<repeat to end>
for(int i = 0; i < /*lenght of file*/; ++i)
{
ptr = ptr * w1;
ptr = ptr * w2;
ptr = ptr * w3;
ptr = ptr * w4;
ptr = ptr * w5;
ptr = ptr * w6;
ptr = ptr * w7;
ptr = ptr * w8;
ptr = ptr * w9;
ptr = ptr * w10;
//write resulting number to array
output[i] = ptr;
//"hash" result and set the first weight to resulting "hash"
if(i != /* length of message*/)
{
w1 = (ptr ** 2) * 0.42;
//"hash" first weight and set next weight to result
w2 = (w1 ** 2) * 0.42;
w3 = (w2 ** 2) * 0.42;
w4 = (w3 ** 2) * 0.42;
w5 = (w4 ** 2) * 0.42;
w6 = (w5 ** 2) * 0.42;
w7 = (w6 ** 2) * 0.42;
w8 = (w7 ** 2) * 0.42;
w9 = (w8 ** 2) * 0.42;
w10 = (w9 ** 2) * 0.42;
}
//repeat above step untill all weights are changed
// set ptr to next number in array
ptr = input[i];
//repeat; note to skip weigh changing step when processing last character of input file
//<repeat to end>
}
//create output file
//load output array to output file
//create EndKey file
//load ending weight values to EndKey file
endKey = (w1, w2 ,w3, w4, w5, w6, w7, w8, w9, w10);
//close input file
//save output file
//save EndKey file
return 0;
}