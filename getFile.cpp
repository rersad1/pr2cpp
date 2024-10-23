#include <iostream>
#include <string>

using namespace std;

class getUserInput {
    private:
    string path;
    string extansion;
    public:

        void getUserPath() {
            cout << "Введите путь до файла или нажмите Ctrl + C для завершения: ";
            cin >> path;
        }

        void getFileExtansion(string path) {
            int dot = path.find_last_of(".");
            extansion = path.substr(dot + 1);
        }

        string getPath() {
            return path;
        }

        string getExtansion() {
            return extansion;
        }

        
};