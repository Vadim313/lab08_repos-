/* 
Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... . Підрахувати
довжину найдовшого слова в цій послідовності (слово – це група символів, які розташовані
поспіль і відмінні від пробілів та знаків пунктуації).
*/
#include <iostream>
#include <sstream>

using namespace std;

int max_count(string s, string s2, string s3)
{
    istringstream iss(s);
    int max = 0,
        k = 0;
    
    while (iss >> s2)
    {
        if (s2.size() > max)
        {
            max = s2.size();
            s3 = s2;
        }
    }
    return max;

}
int main()
{
    setlocale(0, "");

    string s;
    string s2, s3;

    cout << "Enter string:" << endl;
    getline(cin, s);

    cout << "вхiдна  строка : " << s << "\n";
    cout << "кiлькiсть букв в найдовшому словi: " << max_count(s, s2, s3) << "\n";

    std::cin.get();
    return 0;
}