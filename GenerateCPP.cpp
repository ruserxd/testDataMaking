#include <bits/stdc++.h>

using namespace std;

void generateString(ofstream& outFile);
void generateINT(ofstream& outFile, long long limit_num);
void generateSortedRandomNumbers(ofstream& outFile, long long num);
 
int main()
{
    srand(time(NULL)); // define a seed for the random number generator
    string fileName;
    cout << "Please tell me the filename you want to input: ";
    cin >> fileName;

    ofstream outFile(fileName.c_str(), ios::out);
    
    

    outFile.close();

    return 0;
}

void generateString(ofstream& outFile)
{
    char random[10 + 1];
    const char ALLOWED[] = "abcdefghijklmnopqrstuvwxyz";
    long long i = 0;
    long long c = 0;
    long long nbAllowed = sizeof(ALLOWED) - 1;

    for (i = 0; i < 3; i++)
    {
        c = rand() % nbAllowed;
        random[i] = ALLOWED[c];
    }

    random[10] = '\0';

    for (long long i = 0; i < 3; i++)
    {
        if (i == 0)
            outFile << static_cast<char>(toupper(random[i]));
        else
            outFile << random[i];
    }
}

void generateINT(ofstream& outFile, long long limit_num)
{
    long long randomNum = rand() % limit_num;
    outFile << " " << randomNum;
}

void generateSortedRandomNumbers(ofstream& outFile, long long num)
{
    vector<long long>numbers;
    for (long long i = 0; i < num; ++i)
    {
        numbers.push_back(rand());
    }

    sort(numbers.begin(), numbers.end());

    for (long long i = 0; i < num; ++i)
    {
        outFile << numbers[i] << " ";
    }
}