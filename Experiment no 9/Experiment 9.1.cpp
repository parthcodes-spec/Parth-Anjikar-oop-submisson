#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    ifstream fin;
    ofstream fout;

    fin.open("source.txt");
    fout.open("destination.txt");

    if(!fin){
        cout<<"error takes place"<<endl;
        return 1;
    }
    char ch;
    while(fin.get(ch)){
        fout.put(ch);
    }

    fin.close();
    fout.close();

    fin.open("source.txt");
    string word;
    int wordcount=0;
    while(fin>>word){
        wordcount++;
    }
    cout<<"the wordcount is :-"<<wordcount<<endl;
    fin.close();
    fin.open("source.txt");
    string target;
    int count=0;
    cout<<"enter the target"<<endl;
    cin>>target;
    while(fin>>word){
        if(word==target){
            count++;
        }
    }
    cout<<"the target word found whose occurence is"<<count<<endl;
    fin.close();

    fin.open("source.txt");

    int digitcount=0;
    int spacecount=0;

    while(fin.get(ch)){
        if(isdigit(ch)){
            digitcount++;
        }
        if(isspace(ch)){
            spacecount++;
        }
    }

    cout<<"digit count is :"<<digitcount<<endl;
    cout<<"the space count is:"<<spacecount<<endl;
    fin.close();
}