#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream inputFile("PTIT.in");
    ofstream outputFile("PTIT.out");
    string line;
    while(getline(inputFile, line)){
        outputFile<<line<<endl;
    }
    inputFile.close();
    outputFile.close();

}