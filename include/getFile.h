#ifndef GETFILE_H
#define GETFILE_H

#include <string>

class getFile {
    public:
        void getUserPath(); // ввод пути до файла
        void getFileExtansion(const std::string& path); // получение расширения файла
        std::string getPath(); // геттер для пути
        std::string getExtansion(); // геттер для расширения
    private:
        std::string path; // путь до файла
        std::string extansion; // расширение файла
};

#endif // GETFILE_H