#include <iostream>
#include <string>

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

int main() {
    ClassLab12_Zamai book("Программирование. Принципы и практика с использованием C++", "Бьярне Страуструп", 1360, 25.0, 20.0);

    std::cout << "Title: " << book.getTitle() << "\n";
    std::cout << "Author: " << book.getAuthor() << "\n";
    std::cout << "Pages: " << book.getPages() << "\n";
    std::cout << "Cover length: " << book.getLength() << " cm\n";
    std::cout << "Cover width: " << book.getWidth() << " cm\n";
    std::cout << "Cover area: " << book.getCoverArea() << " square cm\n";

    book.setPages(1400);
    book.setLength(26.0);
    book.setWidth(21.0);

    std::cout << "Updated Pages: " << book.getPages() << "\n";
    std::cout << "Updated Cover length: " << book.getLength() << " cm\n";
    std::cout << "Updated Cover width: " << book.getWidth() << " cm\n";
    std::cout << "Updated Cover area: " << book.getCoverArea() << " square cm\n";

    return 0;
}
