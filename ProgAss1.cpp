#include<string>
#include<vector>
#include<fstream>
#include<iostream>
#include<algorithm>
#include "LinkedList.h"
#include "NodeClass.h"
#include "timer.h"
using namespace std;

vector<string> readDictionary() {
    ifstream infile;
	vector<string> words;
	string word;
	infile.open("dict.txt");
    long int count = 0;
	if (infile.is_open()) {
		infile >> word;
		while (!infile.eof()) {
			words.push_back(word);
            count++;
			infile >> word;
		}
	}
	infile.close();
    return words;
    cout << "Number of words in the dictionary is " << count;
}

void CleanWord(string &word){
    int length = word.size();
    char temp;
    for(int i=0; i<length; i++){
        temp = word[i];
        if(isalpha(temp)){
            if(isupper(temp)){
                word[i] = tolower(temp);
            }
        }
        else if((isdigit(temp)) ||(temp == '\'') ){

        }
        else{
            word = word.erase(i, 1);
            length = word.size();
            i--;
        }

    }

}

int main(){
    int skip = 0;
    float correctSpell = 0.0;
	float wrongSpell =0.0;
	float foundAvg = 0.0;
	float notFoundAvg = 0.0;
    string word;
	vector<string> dictWords = readDictionary();
	linkedList<string> dictionary;
    Timer timer;
    ofstream outfile;
	outfile.open("misspelled.txt");

    for(int i=0; i < dictWords.size(); i++){
        CleanWord(dictWords[i]);
        dictionary.insert(dictWords[i]);
    }
	cout << "Size of linked List: " << dictionary.getSize() << "\n";

    string bookWords;
    ifstream infile;
	infile.open("book.txt");

	if (infile.is_open()){
		timer.Start();
		infile >> bookWords;
		while (!infile.eof()){
			CleanWord(bookWords);
			if(bookWords.compare("") == 0){

			}
			else  if (!(isalpha(bookWords[0]))){
				skip++;
			}
		    else if (dictionary.find(bookWords)){
				correctSpell++;
			}
			else{
				outfile << bookWords;
				outfile << "\n";
				wrongSpell++;
			}
			infile >> bookWords;
		}
		timer.Stop();
	}
	outfile.close();
    infile.close();

    foundAvg = ((correctSpell)/(dictionary.foundCompare));
	notFoundAvg = ((wrongSpell)/(dictionary.notFoundCompare));
	cout<< "Done Checking and these are the results\n";
	cout<< "Finished in time: " << timer.Time() << "\n";
	cout << "There are " << correctSpell << "words found in the dictionary\n";
	cout<< dictionary.foundCompare << "Compares. Average: " << foundAvg << "\n";
	cout << "There are " << wrongSpell << "words NOT found in the dictionary\n";
	cout << dictionary.notFoundCompare << "compares. Average: " << notFoundAvg << "\n";
	cout << "There are " << skip << "words not checked." << "\n";

    return 0;
}

