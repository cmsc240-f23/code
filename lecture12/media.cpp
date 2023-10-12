#include <iostream>

class MultimediaContent {
public:
    virtual void play() = 0;
};

class Song : public MultimediaContent {
public:
    void play() {
        std::cout << "Playing a melodious song." << std::endl;
    }
};

class Video : public MultimediaContent {
public:
    void play() {
        std::cout << "Streaming a captivating video." << std::endl;
    }
};

int main() {
    MultimediaContent* content1 = new Song();
    MultimediaContent* content2 = new Video();

    content1->play();  // ?
    content2->play();  // ?

    delete content1;
    delete content2;

    Video* myVideo = new Video();

    myVideo->play();
    
    return 0;
}
