#include <QCoreApplication>
#include <iostream>
#include <sstream>
using namespace std;

bool isBeautiful(string numeral)
{
    int res;
    int mas[13];
    for(int i = 0; i < numeral.length(); i++)
    {
        char temp = numeral[i];
        istringstream(&temp) >> hex >> res;
        mas[i] = res;

    }

    int index = 12;
    res = 0;
    for(int i =0 ; i< 6;i++,index--)
    {
        res += mas[i]-mas[index];
    }

    return res == 0;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string num;
    cout << "Enter a Num: \n";
    cin >> num;
    num.resize(13);

    if ( isBeautiful(num))
        cout << "Num is beautiful! \n";
    else
        cout << "Num is not beautiful! \n";

    return a.exec();
}
