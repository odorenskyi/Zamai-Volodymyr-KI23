#include <iostream>
#include <string>
#include <cassert>
#include <fstream>

class ClassLab12_Zamai {
private:
    std::string title;
    std::string author;
    int pages;
    double length; // довжина палітурки
    double width;  // ширина палітурки

public:
    ClassLab12_Zamai(std::string t, std::string a, int p, double l, double w)
        : title(t), author(a), pages(p), length(l), width(w) {}

    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    int getPages() const {
        return pages;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getCoverArea() const {
        return length * width;
    }

    void setTitle(const std::string& t) {
        title = t;
    }

    void setAuthor(const std::string& a) {
        author = a;
    }

    void setPages(int p) {
        if (p > 0) {
            pages = p;
        } else {
            std::cerr << "Number of pages must be positive.\n";
        }
    }

    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            std::cerr << "Length must be positive.\n";
        }
    }

    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            std::cerr << "Width must be positive.\n";
        }
    }
};

void testGetters(const ClassLab12_Zamai& book, std::ofstream& log) {
    log << "Running testGetters...\n";
    assert(book.getTitle() == "Программирование. Принципы и практика с использованием C++");
    assert(book.getAuthor() == "Бьярне Страуструп");
    assert(book.getPages() == 1360);
    assert(book.getLength() == 25.0);
    assert(book.getWidth() == 20.0);
    assert(book.getCoverArea() == 25.0 * 20.0);
    log << "testGetters passed\n";
}

void testSetters(ClassLab12_Zamai& book, std::ofstream& log) {
    log << "Running testSetters...\n";
    book.setTitle("Программирование. Принципы и практика с использованием C++");
    book.setAuthor("Бьярне Страуструп");
    book.setPages(1400);
    book.setLength(26.0);
    book.setWidth(21.0);

    assert(book.getTitle() == "Программирование. Принципы и практика с использованием C++");
    assert(book.getAuthor() == "Бьярне Страуструп");
    assert(book.getPages() == 0);
    assert(book.getLength() == 26.0);
    assert(book.getWidth() == 21.0);
    assert(book.getCoverArea() == 26.0 * 21.0);

    log << "testSetters passed\n";
}

void testInvalidInputs(ClassLab12_Zamai& book, std::ofstream& log) {
    log << "Running testInvalidInputs...\n";

    book.setPages(-50);
    assert(book.getPages() == 1400);

    book.setLength(-30.0);
    assert(book.getLength() == 26.0);


    book.setWidth(-15.0);
    assert(book.getWidth() == 21.0); // width should remain unchanged

    log << "testInvalidInputs passed\n";
}

int main() {
    std::ofstream log("test_results.txt");

    if (!log.is_open()) {
        std::cerr << "Unable to open file for writing test results.\n";
        return 1;
    }

    ClassLab12_Zamai book("Программирование. Принципы и практика с использованием C++", "Бьярне Страуструп", 1360, 25.0, 20.0);

    testGetters(book, log);
    testSetters(book, log);
    testInvalidInputs(book, log);

    log << "All tests passed!\n";
    log.close();

    return 0;
}
