#include<iostream>

using namespace std;

void runningLengthEncoding(string letter){
    int count = 1;
    char current = letter[0];
    for(int i=1;i<letter.size();i++){
        if(letter[i]==current){
            count++;
        }
        else{
            cout<<current<<count;
            current=letter[i];
            count=1;
        }
    }
     cout << current << count << endl;

}

int main(){
    string letter = "AAAABBBCCDAA";
    runningLengthEncoding(letter);
    return 0;
}