#include <fstream>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

//Note: Do not change any part of the existing code.
int main(int argc, char *argv[]) {
    std::vector<int> numVec;
    int nextNum;
    ifstream inFile;
    inFile.open(argv[1]);
    ofstream outfile;
    outfile.open("output");

    while(inFile >> nextNum){
       numVec.push_back(nextNum);
    }
    
    // Write your code to remove all occurences 3 contiguous numbers that add up to 0 from the vector numVec
    // Note that the output vector should not have any occurances where 3 contiguous numbers sum to 0

   //  getting the size of the file
    int size = numVec.size();
    // creating a iterator to iterate over the array.
    int it=0;
    // this loop will move up to the size of the array.
    while(it<size){
        /** 
         * we have to find contiguous 3 number which will give the some 0 and remove it.
         * so we have done here is we have iterate the array in linear fashion.
         * if we found a match we will earse or delete it else we will move forward.
         * this will give us a Time Complexity is O(n);
        */
            if(numVec[it]+numVec[it+1]+numVec[it+2]==0){
                numVec.erase(numVec.begin()+it);
                numVec.erase(numVec.begin()+it);
                numVec.erase(numVec.begin()+it);
                size = numVec.size();
                it = 0;
            }else{
                it++;
            }

    }

   for(auto n:numVec) {
      outfile << n << endl; 
   }
}
