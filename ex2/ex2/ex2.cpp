#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int readInt()
{
    int number;

    cout << "Please introduce your number: " << endl;
    cin >> number;

    return number;
}


int main()
{
    
    //Creating new file and writing in it


    std::cout << "How many numbers you want to write ?" << std::endl;
    int totalNumbers = readInt();

    std::vector<int> values;

    for (int i = 0; i < totalNumbers ; i++)
    {
        int temp = readInt();
        values.push_back(temp);
    }


    
    std::ofstream file;
    file.open("values.txt");

    for (int i = 0; i < totalNumbers; i++)
    {
        file << values[i] <<"\n";
    }

    file.close();
    
    std::vector<int> read_values;
    std::ifstream new_file("values.txt");

    if (new_file.is_open())
    {
        std::string line;

        while (getline(new_file, line))
        {
            read_values.push_back(std::stoi(line));
        }
        new_file.close();
    }
    else
    {
             std::cout << "There was a problem opening the file";
    }


    float sum = 0;

    for (int i = 0; i < totalNumbers; i++)
    {
        sum += read_values[i];
    }

    float mean = sum / totalNumbers;

    std::cout << "Mean = " << mean << std::endl;




   // std::ifstream new_file("file.txt");

   // if (new_file.is_open())
   // {
   //     std::string line;

   //     while(getline(new_file,line))
   //     {
   //         std::cout << line << std::endl;
   //    }
   //     new_file.close();
   // }
   // else
   // {
   //     std::cout << "There was a problem opening the file";
   // }





    return 0;
}

